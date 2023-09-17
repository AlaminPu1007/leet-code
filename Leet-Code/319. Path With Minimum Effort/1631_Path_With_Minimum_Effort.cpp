#include <bits/stdc++.h>
using namespace std;

// define a reusable pair
typedef pair<int, pair<int, int>> iPair;

class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

        int count = 0;

        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};
        // first value is the weight & second is the {row, col}
        pq.push({0, {0, 0}});
        dis[0][0] = 0;

        vector<int> res;

        while (!pq.empty())
        {
            int w = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;

            // removed item from queue
            pq.pop();

            if (row == n - 1 && col == m - 1)
                return dis[row][col];

            // traverse through matrix
            for (int i = 0; i < 4; i++)
            {
                int newRow = del_row[i] + row;
                int newCol = del_col[i] + col;

                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m)
                {
                    int value = abs(heights[row][col] - heights[newRow][newCol]);

                    int newMax = max(value, w);

                    if (newMax < dis[newRow][newCol])
                    {
                        pq.push({newMax, {newRow, newCol}});
                        dis[newRow][newCol] = newMax;
                    }
                }
            }
        }

        return 0;
    }
};

int main(void)
{
    Solution obj;
    int n = 5, m = 6;
    // vector<vector<int>> edges = {{1, 2, 3}, {3, 8, 4}, {5, 3, 5}};
    vector<vector<int>> edges = {{1, 10, 6, 7, 9, 10, 4, 9}};
    cout << obj.minimumEffortPath(edges) << endl;
    return 0;
}