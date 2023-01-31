#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        // initialize visited array
        vector<vector<int>> vis(n, vector<int>(m, 0));

        // count no of islands, (count of starting node)
        int count = 0;

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (!vis[row][col] && grid[row][col] == '1')
                {
                    // called bfs method
                    BFS(row, col, vis, grid);
                    count++;
                }
            }
        }

        return count;
    }

private:
    void BFS(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        // make everything as visited
        vis[row][col] = 1;

        queue<pair<int, int>> Q;

        Q.push({row, col});

        while (!Q.empty())
        {
            int row_value = Q.front().first;
            int col_value = Q.front().second;

            // now pop queue
            Q.pop();

            // check at top
            if (row_value - 1 >= 0 && row_value - 1 < n && grid[row_value - 1][col_value] == '1' && !vis[row_value - 1][col_value])
            {
                // make as visited
                vis[row_value - 1][col_value] = 1;

                // push into queue
                Q.push({row_value - 1, col_value});
            }
            // check at bottom
            if (row_value + 1 >= 0 && row_value + 1 < n && grid[row_value + 1][col_value] == '1' && !vis[row_value + 1][col_value])
            {
                // make as visited
                vis[row_value + 1][col_value] = 1;

                // push into queue
                Q.push({row_value + 1, col_value});
            }

            // check at left
            if (col_value - 1 >= 0 && col_value - 1 < m && grid[row_value][col_value - 1] == '1' && !vis[row_value][col_value - 1])
            {
                // make as visited
                vis[row_value][col_value - 1] = 1;

                // push into queue
                Q.push({row_value, col_value - 1});
            }

            // check at right
            if (col_value + 1 >= 0 && col_value + 1 < m && grid[row_value][col_value + 1] == '1' && !vis[row_value][col_value + 1])
            {
                // make as visited
                vis[row_value][col_value + 1] = 1;

                // push into queue
                Q.push({row_value, col_value + 1});
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'},
    };

    int res = obj.numIslands(grid);
    cout << "result is : " << res << endl;
    return 0;
}