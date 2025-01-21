#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int dirs[3] = {-1, 0, 1};

public:
    int maxMoves(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int res = 0;
        queue<vector<int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            vis[i][0] = 1;
            q.push({i, 0, 0});
        }

        while (q.size())
        {
            int sz = q.size();

            while (sz--)
            {
                vector<int> item = q.front();
                q.pop();

                int row = item[0], col = item[1], count = item[2];

                res = max(res, count);

                for (int i = 0; i < 3; i++)
                {
                    int newRow = row + dirs[i], newCol = col + 1;

                    if (isValid(n, m, newRow, newCol) && !vis[newRow][newCol] &&
                        grid[row][col] < grid[newRow][newCol])
                    {
                        vis[newRow][newCol] = 1;
                        q.push({newRow, newCol, count + 1});
                    }
                }
            }
        }

        return res;
    }

private:
    bool isValid(int n, int m, int i, int j)
    {
        return (i >= 0 && j >= 0 && i < n &&
                j < m);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{2, 4, 3, 5}, {5, 4, 9, 3}, {3, 4, 2, 11}, {10, 9, 13, 15}};
    cout << obj.maxMoves(arr) << endl;
    return 0;
}