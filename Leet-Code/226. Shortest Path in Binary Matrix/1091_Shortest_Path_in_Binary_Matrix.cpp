#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, -1));

        if (grid[0][0] == 0)
        {
            q.push({0, 0});
            dist[0][0] = 1;
        }
        else
            return -1;

        // define an row, col value to visit grid with 8 direction
        // north, south, east, west, northeast, northwest, southeast, and southwest
        int del_row[] = {-1, +1, 0, 0, -1, +1, -1, +1};
        int del_col[] = {0, 0, -1, +1, -1, +1, +1, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            for (int i = 0; i < 8; i++)
            {
                int new_row = row + del_row[i];
                int new_col = col + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && grid[new_row][new_col] == 0 && dist[new_row][new_col] == -1)
                {
                    dist[new_row][new_col] = dist[row][col] + 1;
                    q.push({new_row, new_col});
                }
            }
        }

        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < m; j++)
        //         cout<<dist[i][j]<<" ";
        //     cout<<endl;
        // }

        if (dist[n - 1][m - 1] == -1)
            return -1;
        else
            return dist[n - 1][m - 1];
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid =
        {
            {0, 1, 1, 0, 0, 0},
            {0, 1, 0, 1, 1, 0},
            {0, 1, 1, 0, 1, 0},
            {0, 0, 0, 1, 1, 0},
            {1, 1, 1, 1, 1, 0},
            {1, 1, 1, 1, 1, 0}};

    int res = obj.shortestPathBinaryMatrix(grid);
    cout << res << endl;
    return 0;
}