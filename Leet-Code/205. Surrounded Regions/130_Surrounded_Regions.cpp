
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<char>> &board)
    {
        int n = board.size(), m = board[0].size();
        // initially an visited array
        vector<vector<int>> vis(n, vector<int>(m, 0));
        // initialize an queue
        queue<pair<int, int>> q;

        // visit first row, last row
        for (int j = 0; j < m; j++)
        {
            // for first row
            if (!vis[0][j] && board[0][j] == 'O')
            {
                // push into queue
                q.push({0, j});
                // mark as visited
                vis[0][j] = 1;
            }
            // for last row
            if (!vis[n - 1][j] && board[n - 1][j] == 'O')
            {
                // push into queue
                q.push({n - 1, j});
                // mark as visited
                vis[n - 1][j] = 1;
            }
        }

        // visit first col, last col
        for (int i = 0; i < n; i++)
        {
            // for first row
            if (!vis[i][0] && board[i][0] == 'O')
            {
                // push into queue
                q.push({i, 0});
                // mark as visited
                vis[i][0] = 1;
            }
            // for last row
            if (!vis[i][m - 1] && board[i][m - 1] == 'O')
            {
                // push into queue
                q.push({i, m - 1});
                // mark as visited
                vis[i][m - 1] = 1;
            }
        }

        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            // removed it from queue also
            q.pop();

            // visit matrix up,right,bottom,left direction
            for (int i = 0; i < 4; i++)
            {
                int new_row = row + del_row[i];
                int new_col = col + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !vis[new_row][new_col] && board[new_row][new_col] == 'O')
                {
                    q.push({new_row, new_col});
                    vis[new_row][new_col] = 1;
                }
            }
        }

        // fill remain O with X
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
        // print board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution obj;
    vector<vector<char>> board{
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'},
    };
    obj.solve(board);
    return 0;
}