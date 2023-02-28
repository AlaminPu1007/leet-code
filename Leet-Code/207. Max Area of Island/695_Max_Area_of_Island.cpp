#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int count = 0;
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    int counter = 0;
                    // make dfs called
                    DFS(n, m, i, j, vis, grid, counter, del_row, del_col);

                    count = max(count, counter);
                }
            }
        }
        return count;
    }

private:
    void DFS(int n, int m, int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, int &counter, int del_row[], int del_col[])
    {
        // mark as visited first
        vis[row][col] = 1;
        counter++;

        for (int i = 0; i < 4; i++)
        {
            int new_row = row + del_row[i];
            int new_col = col + del_col[i];

            if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !vis[new_row][new_col] && grid[new_row][new_col] == 1)
            {
                DFS(n, m, new_row, new_col, vis, grid, counter, del_row, del_col);
            }
        }
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> grid = {
        {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
    };
    int res = obj.maxAreaOfIsland(grid);
    cout << res << endl;
    return 0;
}