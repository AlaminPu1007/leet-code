#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, pair<int, int>> IPAIR;

public:
    int minimumObstacles(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int res = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int del_row[] = {-1, 0, 1, 0}, del_col[] = {0, 1, 0, -1};

        priority_queue<IPAIR, vector<IPAIR>, greater<IPAIR>> pq;
        // {currentMove, {row, col}}
        pq.push({0, {0, 0}});

        vis[0][0] = 1;

        while (!pq.empty())
        {
            int curMove = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;

            // removed item from queue
            pq.pop();

            if (row == n - 1 && col == m - 1)
            {
                // cout << curMove << " ";
                return curMove;
            }

            // traverse in four direction
            for (int i = 0; i < 4; i++)
            {
                int new_row = del_row[i] + row;
                int new_col = del_col[i] + col;

                if (isValid(n, m, new_row, new_col) && !vis[new_row][new_col])
                {
                    vis[new_row][new_col] = 1;
                    pq.push({grid[new_row][new_col] == 1 ? curMove + 1 : curMove + 0, {new_row, new_col}});
                }
            }
        }

        return -1;
    }

private:
    bool isValid(int n, int m, int row, int col)
    {
        return row >= 0 && row < n && col >= 0 && col < m;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{0, 1, 0, 0, 0}, {0, 1, 0, 1, 0}, {0, 0, 0, 1, 0}};

    cout << obj.minimumObstacles(grid) << endl;
    return 0;
}