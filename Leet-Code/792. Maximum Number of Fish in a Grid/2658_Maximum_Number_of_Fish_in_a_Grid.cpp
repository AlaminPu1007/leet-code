#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxFish(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int res = 0;

        vector<vector<int>> visit(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] && !visit[i][j])
                {
                    res = max(res, BFS(i, j, visit, grid));
                }
            }
        }

        return res;
    }

private:
    int BFS(int i, int j, vector<vector<int>> &visit, vector<vector<int>> &grid)
    {
        queue<pair<int, int>> q;
        int n = grid.size(), m = grid[0].size();
        int del_row[] = {-1, 0, +1, 0}, del_col[] = {0, +1, 0, -1};

        // insert into queue
        q.push({i, j});

        int count = 0;

        // mark as visited
        visit[i][j] = 1;

        while (q.size())
        {
            auto [row, col] = q.front();
            q.pop();

            count += grid[row][col];

            // iterate over the adjacency 4 directions node
            for (int dir = 0; dir < 4; dir++)
            {
                int new_row = del_row[dir] + row, new_col = del_col[dir] + col;

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !visit[new_row][new_col] && grid[new_row][new_col])
                {
                    visit[new_row][new_col] = 1;
                    // insert into queue
                    q.push({new_row, new_col});
                }
            }
        }

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{0, 4}};
    cout << obj.findMaxFish(arr) << endl;

    return 0;
}