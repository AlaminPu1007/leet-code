#include <bits/stdc++.h>
using namespace std;

// define reusable component of DisjointDSA
// [Learn disjoint data-structure](https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/Graph/Disjoint%20Set%2C%20Union%20by%20Rank%20%2C%20Union%20by%20Size%2C%20%20Path%20Compression)
class DisjointDSA
{
public:
    vector<int> rank, parents;
    DisjointDSA(int n)
    {
        // resize array for working on 0 base component also
        rank.resize(n + 1, 0);
        parents.resize(n + 1);

        for (int i = 0; i <= n; i++)
            parents[i] = i;
    }

    // Find ultimate parent of each given node
    int findUltimateParent(int node)
    {
        if (node == parents[node])
            return node;
        else
            return parents[node] = findUltimateParent(parents[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if (ulp_u == ulp_v)
            return;

        if (rank[ulp_u] < rank[ulp_v])
        {
            parents[ulp_u] = ulp_v;
        }

        else if (rank[ulp_v] < rank[ulp_u])
        {
            parents[ulp_v] = ulp_u;
        }

        else
        {
            parents[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        vector<vector<string>> ans;
        // define hash-map to hold key->mail, value->index
        unordered_map<string, int> Map;

        int n = accounts.size();

        // define disjoint DSA
        DisjointDSA obj(n);

        for (int i = 0; i < n; i++)
        {
            // we skip the name of all user
            for (int j = 1; j < accounts[i].size(); j++)
            {
                string mail = accounts[i][j];
                if (Map.find(mail) == Map.end())
                    Map[mail] = i;

                // mail is already exist in hash-table
                // we need to connect small component with larger component, to get ultimate parent of them
                else
                    obj.unionByRank(i, Map[mail]);
            }
        }

        // define merge array to hold list of mail
        vector<string> mergeMails[n];

        for (auto item : Map)
        {
            string mail = item.first;

            // find ultimate parent of each email
            int node = obj.findUltimateParent(item.second);

            // push each item into their ultimate parent index
            mergeMails[node].push_back(mail);
        }

        for (int i = 0; i < n; i++)
        {
            if (!mergeMails[i].size())
                continue;

            // sort array of mail
            sort(mergeMails[i].begin(), mergeMails[i].end());

            vector<string> tmp;

            // push first index as person name
            tmp.push_back(accounts[i][0]);

            for (auto it : mergeMails[i])
            {
                tmp.push_back(it);
            }

            // put this into answer array
            ans.push_back(tmp);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<string>> str = {
        {"John", "johnsmith@mail.com", "john_newyork@mail.com"},
        {"John", "johnsmith@mail.com", "john00@mail.com"},
        {"Mary", "mary@mail.com"},
        {"John", "johnnybravo@mail.com"}};

    vector<vector<string>> res = obj.accountsMerge(str);

    for (auto item : res)
    {

        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}