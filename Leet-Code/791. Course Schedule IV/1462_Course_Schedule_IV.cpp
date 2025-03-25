#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>> &prerequisites, vector<vector<int>> &queries)
    {
        unordered_map<int, vector<int>> adj;

        // create a adjacency list
        for (auto item : prerequisites)
        {
            int u = item[0], v = item[1];
            adj[u].push_back(v);
        }

        vector<bool> res;

        for (auto item : queries)
        {
            int u = item[0], v = item[1];
            vector<int> visit(numCourses, 0);

            res.push_back(DFS(u, v, adj, visit));
        }

        return res;
    }

private:
    bool DFS(int src, int target, unordered_map<int, vector<int>> &adj, vector<int> &visit)
    {
        // mark as visited
        visit[src] = 1;

        if (src == target)
            return true;

        bool answer = false;

        // iterate over the adjacency list
        for (auto nei : adj[src])
            if (!visit[nei])
                answer = answer || DFS(nei, target, adj, visit);

        return answer;
    }
};

int main(void)
{
    Solution obj;
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1, 0}}, queries = {{0, 1}, {1, 0}};

    vector<bool> res = obj.checkIfPrerequisite(numCourses, prerequisites, queries);

    for (auto item : res)
        cout << item << " ";

    return 0;
}