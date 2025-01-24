#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int V = graph.size();
        unordered_map<int, bool> safe;
        vector<int> res;

        for (int i = 0; i < V; i++)
            if (DFS(i, safe, graph))
                res.push_back(i);

        return res;
    }

private:
    bool DFS(int startNode, unordered_map<int, bool> &safe, vector<vector<int>> &graph)
    {
        // If already calculated
        if (safe.find(startNode) != safe.end())
            return safe[startNode];

        // initially mark this node, is not safe, it will help to detect cycle
        safe[startNode] = false;

        // iterate over the neighbour nodes
        for (auto nei : graph[startNode])
            if (!DFS(nei, safe, graph))
                return false;

        // after iterating neighbour nodes safely
        // means this path is safe
        return safe[startNode] = true;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> graph = {{1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}};

    vector<int> res = obj.eventualSafeNodes(graph);

    for (auto item : res)
        cout << item << " ";

    return 0;
}