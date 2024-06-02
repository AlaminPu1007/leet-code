#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int getMaximumGold(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();
    int res = 0;

    vector<vector<int>> visit(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        res = max(res, DFS(i, j, visit, grid, n, m));
      }
    }

    return res;
  }

private:
  int DFS(int row, int col, vector<vector<int>> &visit, vector<vector<int>> &grid, int n, int m)
  {
    if (min(row, col) < 0 || row == n || col == m || visit[row][col] == 1 || grid[row][col] == 0)
      return 0;

    visit[row][col] = 1;
    int res = 0;

    int del_row[] = {-1, 0, +1, 0};
    int del_col[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++)
    {
      int new_row = del_row[i] + row;
      int new_col = del_col[i] + col;
      res = max(res, grid[row][col] + DFS(new_row, new_col, visit, grid, n, m));
    }

    visit[row][col] = 0;
    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid = {{0, 6, 0}, {5, 8, 7}, {0, 9, 0}};
  cout << obj.getMaximumGold(grid) << endl;
  return 0;
}