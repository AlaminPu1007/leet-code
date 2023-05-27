#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> res;
        vector<bool> isInDegree(n, false);

        // check in-degree of vertices
        for (auto item : edges)
        {
            // for ex-1: 0 -> 1(1 has one in-degree from 0), mark 1 as true
            isInDegree[item[1]] = true;
        }

        // check remain nodes that has no in-in-degree
        for (int i = 0; i < n; i++)
        {
            if (!isInDegree[i])
                res.push_back(i);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}};
    vector<int> res = obj.findSmallestSetOfVertices(n, edges);
    for (auto item : res)
        cout << item << " ";
    return 0;
}