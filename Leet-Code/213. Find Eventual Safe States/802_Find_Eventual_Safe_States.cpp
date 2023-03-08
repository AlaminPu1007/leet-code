#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int V = graph.size();
        vector<int> vis(V, 0), pathVis(V, 0), checkSafePath(V, 0);
        vector<int> res;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                // make an DFS recursive method called
                DFS(i, vis, pathVis, checkSafePath, graph);
            }
        }

        for (int i = 0; i < V; i++)
            if (checkSafePath[i])
                res.push_back(i);

        return res;
    }

private:
    bool DFS(int startNode, vector<int> &vis, vector<int> &pathVis, vector<int> &checkSafePath, vector<vector<int>> &graph)
    {
        // mark start node as visited
        vis[startNode] = 1;
        // mark path as visited
        pathVis[startNode] = 1;
        // initialize safe path with 0
        checkSafePath[startNode] = 0;

        for (auto item : graph[startNode])
        {
            if (!vis[item])
            {
                // make dfs called
                if (DFS(item, vis, pathVis, checkSafePath, graph))
                    return true;
            }
            else if (pathVis[item])
                return true;
        }

        // if any cycle is not detected, then mark path as unvisited
        pathVis[startNode] = 0;
        // also mark it's an safe node
        checkSafePath[startNode] = 1;
        // any cycle is not found
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> graph = {
        {1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}};
    vector<int> res = obj.eventualSafeNodes(graph);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}