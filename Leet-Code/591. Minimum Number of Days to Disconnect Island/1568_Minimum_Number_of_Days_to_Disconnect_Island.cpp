#include <bits/stdc++.h>
using namespace std;

class Solution
{
  vector<int> del_row = {0, 1, 0, -1};
  vector<int> del_col = {1, 0, -1, 0};

public:
  int minDays(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();

    // if the given grid is already disconnected, then return 0
    if (countNoOfIsland(grid, n, m) != 1)
      return 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == 0)
          continue;

        // mark it as a temporary water
        grid[i][j] = 0;

        int res = countNoOfIsland(grid, n, m);

        if (res != 1)
          return 1;

        // restore in previous state
        grid[i][j] = 1;
      }
    }

    return 2;
  }

private:
  int countNoOfIsland(vector<vector<int>> &grid, int n, int m)
  {
    vector<vector<int>> visit(n, vector<int>(m, 0));
    int res = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == 1 && !visit[i][j])
        {
          DFS(i, j, n, m, grid, visit);
          res++;
        }
      }
    }

    return res;
  }

private:
  void DFS(int row, int col, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &visit)
  {
    visit[row][col] = 1;

    for (int i = 0; i < 4; i++)
    {
      int new_row = del_row[i] + row;
      int new_col = del_col[i] + col;

      if (isValidCell(new_row, new_col, n, m, grid, visit))
      {
        DFS(new_row, new_col, n, m, grid, visit);
      }
    }
  }

private:
  bool isValidCell(int row, int col, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &visit)
  {
    if (row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == 1 && visit[row][col] == 0)
      return true;

    return false;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid = {{0, 1, 1, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}};
  cout << obj.minDays(grid) << endl;
  return 0;
}