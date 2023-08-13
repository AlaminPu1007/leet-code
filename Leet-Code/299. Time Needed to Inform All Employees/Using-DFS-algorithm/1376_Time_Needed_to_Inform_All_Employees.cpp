#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int result = 0;
    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
    {
        vector<int> adj[n];
        // making an adjacency list of manager
        for (int i = 0; i < n; i++)
            if (manager[i] != -1)
                adj[manager[i]].push_back(i);

        DFS(adj, informTime, headID, 0);

        return result;
    }

private:
    void DFS(vector<int> adj[], vector<int> &informTime, int node, int time)
    {
        // Maximum time for an employee to get the news.
        result = max(result, time);

        // traverse through adjacency list of node
        for (auto item : adj[node])
        {
            DFS(adj, informTime, item, time + informTime[node]);
        }
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