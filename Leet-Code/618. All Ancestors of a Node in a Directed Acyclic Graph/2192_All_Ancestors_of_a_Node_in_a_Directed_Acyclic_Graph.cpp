/* Depth First Search (Reversed Graph) */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>> &edges)
    {

        vector<int> adjList[n];

        // reverse the direction of each child to it's ancestors
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];

            adjList[v].push_back(u);
        }

        vector<vector<int>> ancestorsList;

        // traverse all the node and find it's all ancestors
        for (int i = 0; i < n; i++)
        {
            vector<int> ancestors;
            unordered_set<int> vis;

            // perform a DFS to traverse a graph and find it's ancestor
            findAllAncestors(i, adjList, vis);

            // store all the ancestors that hold vis
            for (int node = 0; node < n; node++)
            {
                if (i == node)
                    continue;

                if (vis.find(node) != vis.end())
                    ancestors.push_back(node);
            }

            ancestorsList.push_back(ancestors);
        }

        return ancestorsList;
    }

private:
    void findAllAncestors(int node, vector<int> adjList[], unordered_set<int> &vis)
    {
        // mark node as visited
        vis.insert(node);

        // traverse all the node
        for (auto adjNode : adjList[node])
        {
            if (vis.find(adjNode) == vis.end())
                findAllAncestors(adjNode, adjList, vis);
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 3}, {0, 4}, {1, 3}, {2, 4}, {2, 7}, {3, 5}, {3, 6}, {3, 7}, {4, 6}};
    int n = 8;

    vector<vector<int>> res = obj.getAncestors(n, edges);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}