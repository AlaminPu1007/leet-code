#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<int, vector<int>> adj;

public:
    vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
    {
        int len = adjacentPairs.size();
        vector<int> ans;

        // making of adjacency list
        for (auto &edge : adjacentPairs)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int root = 0;

        // find the root or source node
        for (auto &item : adj)
        {
            if (item.second.size() == 1)
            {
                root = item.first;
                break;
            }
        }

        // called dfs method
        DFS(root, INT_MAX, ans);

        return ans;
    }

    // traverse adjacency list using dfs algo
    void DFS(int node, int prv, vector<int> &ans)
    {
        ans.push_back(node);

        for (auto item : adj[node])
        {
            if (item != prv)
                DFS(item, node, ans);
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{4, -10}, {-1, 3}, {4, -3}, {-3, 3}};
    vector<int> res = obj.restoreArray(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}