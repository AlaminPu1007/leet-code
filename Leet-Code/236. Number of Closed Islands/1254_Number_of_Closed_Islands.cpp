
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int closedIsland(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        // define an visited array
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (!vis[i][j] && !grid[i][j])
                {
                    // make BFS method called
                    if (BFS(i, j, vis, grid))
                        counter++;
                }
            }
        }

        return counter;
    }

private:
    bool BFS(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        // define queue data-structure
        queue<pair<int, int>> q;

        bool isClosed = true;

        q.push({row, col});
        vis[row][col] = 1;

        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int new_row = r + del_row[i];
                int new_col = c + del_col[i];

                if (!(new_row >= 0 && new_row < n && new_col >= 0 && new_col < m))
                    isClosed = false;

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !vis[new_row][new_col] && grid[new_row][new_col] == 0)
                {
                    vis[new_row][new_col] = 1;
                    q.push({new_row, new_col});
                }
            }
        }
        return isClosed;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid =
        {

            {0, 0, 1, 1, 0, 1, 0, 0, 1, 0},
            {1, 1, 0, 1, 1, 0, 1, 1, 1, 0},
            {1, 0, 1, 1, 1, 0, 0, 1, 1, 0},
            {0, 1, 1, 0, 0, 0, 0, 1, 0, 1},
            {0, 0, 0, 0, 0, 0, 1, 1, 1, 0},
            {0, 1, 0, 1, 0, 1, 0, 1, 1, 1},
            {1, 0, 1, 0, 1, 1, 0, 0, 0, 1},
            {1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
            {1, 1, 1, 0, 0, 1, 0, 1, 0, 1},
            {1, 1, 1, 0, 1, 1, 0, 1, 1, 0}};

    int res = obj.closedIsland(grid);
    cout << res << endl;
    return 0;
}