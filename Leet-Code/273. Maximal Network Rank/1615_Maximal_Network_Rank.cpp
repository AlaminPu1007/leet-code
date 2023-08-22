#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximalNetworkRank(int n, vector<vector<int>> &roads)
    {
        int res = 0;
        unordered_set<int> adj[n];

        for (auto item : roads)
        {
            adj[item[0]].insert(item[1]);
            adj[item[1]].insert(item[0]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int curCount = adj[i].size() + adj[j].size();

                if (adj[i].find(j) != adj[i].end())
                {
                    curCount--;
                }
                res = max(res, curCount);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 5;
    // vector<vector<int>> roads = {{0, 1}, {0, 3}, {1, 2}, {1, 3}};
    vector<vector<int>> roads = {{0, 1}, {0, 3}, {1, 2}, {1, 3}, {2, 3}, {2, 4}};
    cout << obj.maximalNetworkRank(n, roads) << endl;
    return 0;
}