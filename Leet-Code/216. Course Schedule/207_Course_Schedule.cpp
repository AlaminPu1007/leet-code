#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> ans;
        vector<int> adj[n];

        for (auto item : prerequisites)
        {
            adj[item[1]].push_back(item[0]);
        }

        queue<int> q;
        vector<int> inDegree(n, 0);

        for (int i = 0; i < n; i++)
            for (auto item : adj[i])
                inDegree[item]++;

        for (int i = 0; i < n; i++)
            if (!inDegree[i])
                q.push(i);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto item : adj[node])
            {
                inDegree[item]--;
                if (!inDegree[item])
                    q.push(item);
            }
        }

        if (ans.size() == n)
            return true;
        return false;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> arr = {
        {1, 0}, {1, 2}, {0, 1}};

    bool ans = obj.canFinish(3, arr);

    cout << ans << " ";

    return 0;
}