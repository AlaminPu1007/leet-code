#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void DFS(int startNode, vector<int> adj[], vector<vector<int>> &ans, vector<int> &temp, int graphLength)
    {
        if (graphLength == startNode)
        {
            // also need to push the last item
            temp.push_back(startNode);

            // push object in root answer
            ans.push_back(temp);

            // remove precious pushed item from temp
            temp.pop_back();

            return;
        }

        temp.push_back(startNode);

        // traverse adjacency list of node
        for (auto item : adj[startNode])
        {
            DFS(item, adj, ans, temp, graphLength);
        }
        // remove precious pushed item from temp
        temp.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int n = graph.size(), m = graph[0].size();
        vector<int> adj[n], temp;

        vector<vector<int>> ans;

        // convert matrix with adjacency list
        for (int i = 0; i < n; i++)
            for (auto item : graph[i])
                adj[i].push_back(item);

        // called DFS method
        DFS(0, adj, ans, temp, n - 1);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {
        {4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};
    vector<vector<int>> ans = obj.allPathsSourceTarget(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}