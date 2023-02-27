#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numEnclaves(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        // define queue data-structure
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    if (grid[i][j] == 1)
                    {
                        vis[i][j] = 1;
                        q.push({i, j});
                    }
                }
            }
        }

        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            // pop element from queue
            q.pop();

            // traverse up,right,bottom,left of matrix
            for (int i = 0; i < 4; ++i)
            {
                int new_row = row + del_row[i];
                int new_col = col + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !vis[new_row][new_col] && grid[new_row][new_col])
                {
                    // push inside queue
                    q.push({new_row, new_col});

                    // mark as visited
                    vis[new_row][new_col] = 1;
                }
            }
        }

        int count = 0;

        // count how many land is left after traversal
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == 0 && grid[i][j] == 1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> grid =
        {
            {0, 0, 0, 0},
            {1, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
        };

    int res = obj.numEnclaves(grid);
    cout << res << endl;
    return 0;
}