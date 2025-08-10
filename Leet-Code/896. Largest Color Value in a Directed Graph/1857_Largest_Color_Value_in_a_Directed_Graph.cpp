#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestPathValue(string colors, vector<vector<int>> &edges)
    {
        int n = colors.size();
        vector<int> adj[n + 1];
        vector<vector<int>> count(n + 1, vector<int>(26, 0));

        // create a adjacency list using edges
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];

            // create a directed edges
            adj[u].push_back(v);
        }

        unordered_set<int> visited, path;

        int res = 0;

        // iterate over the all node and treat every node as a source node and validate their path
        for (int i = 0; i < n; i++)
        {
            res = max(res, Solved(i, visited, path, adj, count, colors));
        }

        return res == INT_MAX ? -1 : res;
    }

private:
    int Solved(int node, unordered_set<int> &visited, unordered_set<int> &path, vector<int> adj[], vector<vector<int>> &Count, string &colors)
    {
        if (path.count(node))
            return INT_MAX;

        if (visited.count(node))
            return 0;

        visited.insert(node);
        path.insert(node);

        int colorIdx = colors[node] - 'a';

        // initialized Count[node][colors[node]] to 1
        Count[node][colorIdx] = 1;

        for (auto nei : adj[node])
        {
            if (Solved(nei, visited, path, adj, Count, colors) == INT_MAX)
                return INT_MAX;

            // iterate over all columns
            for (int i = 0; i < 26; i++)
            {
                Count[node][i] = max(
                    Count[node][i],
                    Count[nei][i] + ((i == colorIdx) ? 1 : 0));
            }
        }

        path.erase(node);

        int res = 0;

        for (auto item : Count[node])
            res = max(res, item);

        return res;
    }
};

int main(void)
{
    Solution obj;
    string colors = "abaca";
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}, {3, 4}};

    cout << obj.largestPathValue(colors, edges) << endl;

    return 0;
}