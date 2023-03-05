#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool DFS(int startNode, int colorValue, vector<vector<int>> &graph, vector<int> &colors)
    {
        // mark colors as 1,
        colors[startNode] = colorValue;

        for (auto item : graph[startNode])
        {
            if (colors[item] == -1)
            {
                // !colorValue -> is the opposite color of root node
                if (!DFS(item, !colorValue, graph, colors))
                    return false;
            }
            else if (colors[item] == colors[startNode])
            {
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
                // called DFS algorithm
                if (!DFS(i, 0, graph, colors))
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