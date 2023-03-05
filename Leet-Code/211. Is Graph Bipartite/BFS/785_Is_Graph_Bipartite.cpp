#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool BFS(int startNode, vector<vector<int>> &graph, vector<int> &colors)
    {
        // define queue
        queue<int> q;
        colors[startNode] = 0;

        q.push(startNode);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto item : graph[node])
            {
                if (colors[item] == -1)
                {
                    colors[item] = !colors[node];
                    q.push(item);
                }
                else if (colors[item] == colors[node])
                    return false;
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int V = graph.size();
        vector<int> colors(V, -1);

        for (int i = 0; i < V; i++)
        {
            if (colors[i] == -1)
            {
                if (!BFS(i, graph, colors))
                    return false;
            }
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> graph = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0},
    };
    bool res = obj.isBipartite(graph);
    cout << res << endl;
    return 0;
}