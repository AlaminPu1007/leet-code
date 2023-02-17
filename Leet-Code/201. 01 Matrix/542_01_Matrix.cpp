#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> res(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));

        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // start BFS if cell contains 1
                if (grid[i][j] == 0)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
                else
                {
                    // mark unvisited
                    vis[i][j] = 0;
                }
            }
        }

        int del_row[] = {-1, 0, +1, 0};
        int del_col[] = {0, +1, 0, -1};

        while (!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;

            // delte item from q
            q.pop();
            // update res array with dis
            res[row][col] = dis;

            for (int i = 0; i < 4; i++)
            {
                int new_row = row + del_row[i];
                int new_col = col + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !vis[new_row][new_col])
                {
                    vis[new_row][new_col] = 1;
                    q.push({{new_row, new_col}, dis + 1});
                }
            }
        }
        return res;
    }
};