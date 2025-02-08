#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> validArrangement(vector<vector<int>> &pairs)
    {
        set<int> nodes; // keep track of all nodes
        map<int, vector<int>> adj;
        map<int, int> inDeg, outDeg;
        vector<vector<int>> res;

        // create a adjacency list
        for (auto item : pairs)
        {
            int u = item[0];
            int v = item[1];

            adj[u].push_back(v);

            // count in-degree
            inDeg[v]++;

            // count out degree of each node
            outDeg[u]++;

            // store node
            nodes.insert(u);
            nodes.insert(v);
        }

        // if we do not found any source node
        // then can be any one as a source node
        int startNode = pairs[0][0];

        for (auto node : nodes)
        {
            if (outDeg[node] == 1 + inDeg[node])
            {
                startNode = node;
                break;
            }
        }

        vector<int> path;

        // perform a DFS operation to find euler path
        DFS(startNode, adj, inDeg, outDeg, nodes, path);

        // reverse the path
        reverse(path.begin(), path.end());

        for (int i = 1; i < path.size(); i++)
        {
            int u = path[i - 1], v = path[i];
            res.push_back({u, v});
        }

        return res;
    }

private:
    void DFS(int node, map<int, vector<int>> &adj, map<int, int> &inDeg, map<int, int> &outDeg, set<int> &nodes, vector<int> &path)
    {
        int nextNode = -1;

        while (outDeg[node])
        {
            nextNode = adj[node][outDeg[node] - 1];

            // decrement the out-degree of current node
            outDeg[node]--;

            // called dfs with next node
            DFS(nextNode, adj, inDeg, outDeg, nodes, path);
        }

        path.push_back(node);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> pairs = {{5, 1}, {4, 5}, {11, 9}, {9, 4}};
    vector<vector<int>> res = obj.validArrangement(pairs);

    for (auto item : res)
    {
        cout << item[0] << " " << item[1] << endl;
    }

    return 0;
}