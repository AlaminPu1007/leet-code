#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int magnificentSets(int n, vector<vector<int>> &edges)
    {
        int res = 0;
        vector<int> adj[n + 1];

        // create a adjacency list form given edges
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];

            // connected edges with undirected way
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> visit(n + 1, 0);

        // iterate through 1->n
        for (int i = 1; i <= n; i++)
        {
            if (visit[i])
                continue;

            // mark as visited
            visit[i] = 1;

            // get the all node(will be treat as a src node) to the current node
            set<int> srcNodes = getNoOfSrcNode(i, adj, visit);

            int maxGroup = 0;

            for (auto item : srcNodes)
            {
                int length = getMaxGroupBFS(item, adj);

                // if the graph or component belong any cycle and that will hae odd length
                // the there is no way to group them according to the problem description way
                if (length == -1)
                    return -1;

                maxGroup = max(maxGroup, length);
            }

            res += maxGroup;
        }

        return res;
    }

private:
    int getMaxGroupBFS(int src, vector<int> adj[])
    {
        queue<pair<int, int>> q;     // {node, length}
        unordered_map<int, int> Map; // {node, distant}

        q.push({src, 1});
        Map[src] = 1;

        while (q.size())
        {
            auto [node, length] = q.front();

            // removed from queue
            q.pop();

            // iterate over the adjacency list
            for (auto nei : adj[node])
            {
                if (Map.count(nei))
                {
                    // if item is already visited and belong to same group.
                    // they have odd no of length cycle
                    if (Map[nei] == length)
                        return -1;

                    continue;
                }

                q.push({nei, length + 1});
                Map[nei] = length + 1;
            }
        }

        int res = 0;

        for (auto item : Map)
            res = max(res, item.second);

        return res;
    }

private:
    set<int> getNoOfSrcNode(int src, vector<int> adj[], vector<int> &visited)
    {
        set<int> component;
        queue<int> q;
        q.push(src);
        visited[src] = true;
        component.insert(src);

        while (q.size())
        {
            int node = q.front();
            q.pop();

            // iterate over the adjacency list
            for (auto nei : adj[node])
            {
                if (!visited[nei])
                {
                    visited[nei] = true;
                    component.insert(nei);
                    q.push(nei);
                }
            }
        }

        return component;
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> edges = {{1, 2}, {1, 4}, {1, 5}, {2, 6}, {2, 3}, {4, 6}};

    cout << obj.magnificentSets(n, edges) << endl;

    return 0;
}