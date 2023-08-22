#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestCycle(vector<int> &edges)
    {
        int len = edges.size();

        vector<int> vis(len, 0);
        vector<int> inDegree(len, 0);
        queue<int> q;

        for (int i = 0; i < len; i++)
        {
            if (edges[i] != -1)
                inDegree[edges[i]]++;
        }

        for (int i = 0; i < len; i++)
        {
            if (!inDegree[i])
            {
                // insert into queue
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            // removed node
            q.pop();

            // mark as visited
            vis[node] = 1;

            int neighborNode = edges[node];

            if (neighborNode != -1)
            {
                inDegree[neighborNode]--;
                if (!inDegree[neighborNode])
                    q.push(neighborNode);
            }
        }

        int res = -1;

        for (int i = 0; i < len; i++)
        {
            if (!vis[i])
            {
                int neighborNode = edges[i];
                // mark this node visited
                vis[i] = 1;

                int count = 1;
                // if neighborNode == i, that mean's it has loop
                while (neighborNode != i)
                {
                    vis[neighborNode] = 1;
                    count++;
                    neighborNode = edges[neighborNode];
                }
                res = max(res, count);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> edges = {3, 3, 4, 2, 3};
    cout << obj.longestCycle(edges) << endl;
    return 0;
}