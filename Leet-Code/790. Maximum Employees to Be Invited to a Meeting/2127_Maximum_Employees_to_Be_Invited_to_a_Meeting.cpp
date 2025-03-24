#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumInvitations(vector<int> &favorite)
    {
        int n = favorite.size();
        vector<int> inDeg(n, 0);

        // calculate in-degree of each node
        for (int i = 0; i < n; ++i)
        {
            inDeg[favorite[i]]++;
        }

        // initialized a queue ds
        // Topological sorting to remove non-cycle nodes
        queue<int> q;

        for (int i = 0; i < n; i++)
            if (!inDeg[i])
                q.push(i);

        // calculate depth for each node
        vector<int> depth(n, 1);

        while (q.size())
        {
            int node = q.front();

            // removed form queue
            q.pop();

            // get next node
            // initially each node is adjacent with it's index node
            int nextNode = favorite[node];

            // calculate depth
            depth[nextNode] = max(depth[nextNode], depth[node] + 1);

            // reduce next node in-degree by one
            if (--inDeg[nextNode] == 0)
                q.push(nextNode);
        }

        int larger_cycle_length = 0;
        int twoCyclesLength = 0;

        // iterate over the array and detect cycle
        for (int i = 0; i < n; i++)
        {

            if (inDeg[i] == 0)
                continue;

            int cycleLength = 0;
            int cur_item = i;

            while (inDeg[cur_item] != 0)
            {
                // mark as visited
                inDeg[cur_item] = 0;

                // increment cycle length
                cycleLength++;

                // updated with next adjacent node
                cur_item = favorite[cur_item];
            }

            if (cycleLength == 2)
                twoCyclesLength += depth[i] + depth[favorite[i]];

            else
                larger_cycle_length = max(larger_cycle_length, cycleLength);
        }

        return max(twoCyclesLength, larger_cycle_length);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 1, 2};

    cout << obj.maximumInvitations(arr) << endl;
    return 0;
}