#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> iPair;

class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int res = 0;
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

        // put source node with distance 0, {distance, {row, col}}
        pq.push({grid[0][0], {0, 0}});
        // put distance with 0
        dis[0][0] = grid[0][0];

        // define an del-row, del-col to traverse four direction
        int del_row[] = {0, 1};
        int del_col[] = {1, 0};

        while (!pq.empty())
        {
            int distance = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;

            // removed item from pq
            pq.pop();

            if (row == n - 1 && col == m - 1)
                return distance;

            // traverse matrix with four direction
            for (int i = 0; i < 2; i++)
            {
                int new_row = row + del_row[i];
                int new_col = col + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m)
                {
                    if (distance + grid[new_row][new_col] < dis[new_row][new_col])
                    {
                        dis[new_row][new_col] = distance + grid[new_row][new_col];
                        pq.push({distance + grid[new_row][new_col], {new_row, new_col}});
                    }
                }
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    // vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    // vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};

    vector<vector<int>> grid = {
        {5, 4, 2, 9, 6, 0, 3, 5, 1, 4, 9, 8, 4, 9, 7, 5, 1},
        {3, 4, 9, 2, 9, 9, 0, 9, 7, 9, 4, 7, 8, 4, 4, 5, 8},
        {6, 1, 8, 9, 8, 0, 3, 7, 0, 9, 8, 7, 4, 9, 2, 0, 1},
        {4, 0, 0, 5, 1, 7, 4, 7, 6, 4, 1, 0, 1, 0, 6, 2, 8},
        {7, 2, 0, 2, 9, 3, 4, 7, 0, 8, 9, 5, 9, 0, 1, 1, 0},
        {8, 2, 9, 4, 9, 7, 9, 3, 7, 0, 3, 6, 5, 3, 5, 9, 6},
        {8, 9, 9, 2, 6, 1, 2, 5, 8, 3, 7, 0, 4, 9, 8, 8, 8},
        {5, 8, 5, 4, 1, 5, 6, 6, 3, 3, 1, 8, 3, 9, 6, 4, 8},
        {0, 2, 2, 3, 0, 2, 6, 7, 2, 3, 7, 3, 1, 5, 8, 1, 3},
        {4, 4, 0, 2, 0, 3, 8, 4, 1, 3, 3, 0, 7, 4, 2, 9, 8},
        {5, 9, 0, 4, 7, 5, 7, 6, 0, 8, 3, 0, 0, 6, 6, 6, 8},
        {0, 7, 1, 8, 3, 5, 1, 8, 7, 0, 2, 9, 2, 2, 7, 1, 5},
        {1, 0, 0, 0, 6, 2, 0, 0, 2, 2, 8, 0, 9, 7, 0, 8, 0},
        {1, 1, 7, 2, 9, 6, 5, 4, 8, 7, 8, 5, 0, 3, 8, 1, 5},
        {8, 9, 7, 8, 1, 1, 3, 0, 1, 2, 9, 4, 0, 1, 5, 3, 1},
        {9, 2, 7, 4, 8, 7, 3, 9, 2, 4, 2, 2, 7, 8, 2, 6, 7},
        {3, 8, 1, 6, 0, 4, 8, 9, 8, 0, 2, 5, 3, 5, 5, 7, 5},
        {1, 8, 2, 5, 7, 7, 1, 9, 9, 8, 9, 2, 4, 9, 5, 4, 0},
        {3, 4, 4, 1, 5, 3, 3, 8, 8, 6, 3, 5, 3, 8, 7, 1, 3}};

    int res = obj.minPathSum(grid);
    cout << res << endl;
    return 0;
}