#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int UNGUARDED = 0;
    const int GUARDED = 1;
    const int GUARD = 2;
    const int WALL = 3;

public:
    int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
    {
        vector<vector<int>> grid(m, vector<int>(n, UNGUARDED));

        // Mark guards' positions
        for (const auto &guard : guards)
        {
            int row = guard[0];
            int col = guard[1];

            grid[row][col] = GUARD;
        }

        // Mark walls' positions
        for (const auto &wall : walls)
        {
            int row = wall[0];
            int col = wall[1];

            grid[row][col] = WALL;
        }

        // iterate over the guard and marked all necessary positions
        for (auto &guard : guards)
        {
            int row = guard[0];
            int col = guard[1];
            BFS(row, col, m, n, grid);
        }

        int count = 0;

        // get the results
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == UNGUARDED)
                    count++;
            }
        }

        return count;
    }

private:
    void BFS(int row, int col, int m, int n, vector<vector<int>> &grid)
    {
        // iterate over the upwards
        for (int i = row - 1; i >= 0; i--)
        {
            if (grid[i][col] == WALL || grid[i][col] == GUARD)
                break;

            // marked them as guarded
            grid[i][col] = GUARDED;
        }

        // iterate over the downwards
        for (int i = row + 1; i < m; i++)
        {
            if (grid[i][col] == WALL || grid[i][col] == GUARD)
                break;

            // marked them as guarded
            grid[i][col] = GUARDED;
        }

        // iterate over the left directions
        for (int i = col + 1; i < n; i++)
        {
            if (grid[row][i] == WALL || grid[row][i] == GUARD)
                break;

            // marked them as guarded
            grid[row][i] = GUARDED;
        }

        // iterate over the right directions
        for (int i = col - 1; i >= 0; i--)
        {
            if (grid[row][i] == WALL || grid[row][i] == GUARD)
                break;

            // marked them as guarded
            grid[row][i] = GUARDED;
        }
    }
};

int main(void)
{
    Solution obj;
    int m = 4, n = 6;
    vector<vector<int>> guards = {{0, 0}, {1, 1}, {2, 3}}, walls = {{0, 1}, {2, 2}, {1, 4}};

    cout << obj.countUnguarded(m, n, guards, walls) << endl;
    return 0;
}