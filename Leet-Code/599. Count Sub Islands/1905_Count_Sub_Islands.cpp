#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
  {
    int n = grid1.size(), m = grid1[0].size();
    int res = 0;

    vector<vector<int>> visit(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (isValid(i, j, grid2) && visit[i][j] == 0 && isSubIsLand(i, j, grid1, grid2, visit))
          res++;
      }
    }

    return res;
  }

private:
  bool isSubIsLand(int row, int col, vector<vector<int>> &grid1, vector<vector<int>> &grid2, vector<vector<int>> &visit)
  {
    int n = grid1.size(), m = grid1[0].size();
    bool res = true;

    int del_row[] = {0, 1, 0, -1};
    int del_col[] = {1, 0, -1, 0};

    queue<pair<int, int>> q;

    visit[row][col] = 1;
    q.push({row, col});

    while (!q.empty())
    {
      int i = q.front().first;
      int j = q.front().second;
      q.pop();

      // do not return from here, cause we need to mark other contiguous part is marked
      if (!isValid(i, j, grid1))
        res = false;

      // traverse adjacency land
      for (int dir = 0; dir < 4; dir++)
      {
        int new_row = del_row[dir] + i;
        int new_col = del_col[dir] + j;

        if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && visit[new_row][new_col] == 0 && isValid(new_row, new_col, grid2))
        {
          visit[new_row][new_col] = 1;
          q.push({new_row, new_col});
        }
      }
    }
    return res;
  }

private:
  bool isValid(int i, int j, vector<vector<int>> &grid)
  {
    return grid[i][j] == 1;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid1 = {{1, 1, 1, 0, 0}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 1, 0, 1, 1}}, grid2 = {{1, 1, 1, 0, 0}, {0, 0, 1, 1, 1}, {0, 1, 0, 0, 0}, {1, 0, 1, 1, 0}, {0, 1, 0, 1, 0}};
  cout << obj.countSubIslands(grid1, grid2) << endl;
  return 0;
}