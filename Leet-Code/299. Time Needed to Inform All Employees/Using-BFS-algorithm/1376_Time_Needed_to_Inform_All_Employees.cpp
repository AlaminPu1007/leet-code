#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
    {
        vector<int> adj[n];

        int result = 0;

        // making an adjacency list of manager
        for (int i = 0; i < n; i++)
            if (manager[i] != -1)
                adj[manager[i]].push_back(i);

        queue<pair<int, int>> q;
        q.push({headID, 0});

        while (!q.empty())
        {
            int node = q.front().first;
            int time = q.front().second;

            result = max(result, time);

            // removed item from queue
            q.pop();

            // traverse through adjacency list
            for (auto item : adj[node])
                q.push({item, time + informTime[node]});
        }

        return result;
    }
};

int main(void)
{
    Solution obj;
    int n = 6, headID = 2;
    vector<int> manager = {2, 2, -1, 2, 2, 2}, informTime = {0, 0, 1, 0, 0, 0};
    cout << obj.numOfMinutes(n, headID, manager, informTime) << endl;
    return 0;
}