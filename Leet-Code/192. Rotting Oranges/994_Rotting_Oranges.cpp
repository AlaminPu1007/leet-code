#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        // define size of grid
        int n = grid.size(), m = grid[0].size();
        int vis[grid.size()][grid[0].size()];

        int fresshOrange = 0;

        // pattern: { {row,col}, freq }

        queue<pair<pair<int, int>, int>> q;

        // push rotted orange inside vis array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    vis[i][j] = 2;
                    // also push into queue, to keep track of rot
                    q.push({{i, j}, 0});
                }
                else
                {
                    vis[i][j] = 0;
                }
                // count how many freesh orange are present
                if (grid[i][j] == 1)
                    fresshOrange++;
            }
        }

        // define array to visit X,Y axis wise
        int del_row[] = {-1, 0, +1, 0};
        int del_col[] = {0, 1, 0, -1};
        int afterRot = 0;

        int minTime = 0;

        while (!q.empty())
        {
            int new_row = q.front().first.first;
            int new_col = q.front().first.second;
            int getTime = q.front().second;

            // get minimum time for making rot of a given matrix
            minTime = max(minTime, getTime);

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int row = new_row + del_row[i];
                int col = new_col + del_col[i];

                // make rot other oranges if they are exists in X, Y axis, and also freesh
                if (row >= 0 && row < n && col >= 0 && col < m && vis[row][col] == 0 && grid[row][col] == 1)
                {
                    // push into queue also, and increment prev time by one
                    q.push({{row, col}, getTime + 1});
                    // mark as rotten
                    vis[row][col] = 2;
                    // count fressh orange also
                    afterRot++;
                }
            }
        }

        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < m; j++)
        //     {
        //       cout<<vis[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        if (fresshOrange != afterRot)
            return -1;

        return minTime;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid{
        {0, 1, 2},
        {0, 1, 1},
        {2, 1, 1},
    };

    int res = obj.orangesRotting(grid);
    cout << res << endl;
    return 0;
}