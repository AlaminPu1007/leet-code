#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numMagicSquaresInside(vector<vector<int>> &grid)
  {
    int res = 0, n = grid.size(), m = grid[0].size();

    for (int row = 0; row <= n - 3; row++)
    {
      for (int col = 0; col <= m - 3; col++)
      {
        if (isMagicSquare(row, col, grid))
          res++;
      }
    }

    return res;
  }

private:
  bool isMagicSquare(int r, int c, vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();

    // check unique number from 1 to 9
    bool seen[10] = {false};

    for (int i = r; i < r + 3; i++)
    {
      for (int j = c; j < c + 3; j++)
      {
        int num = grid[i][j]; // Corrected this line

        if (num < 1 || num > 9)
          return false;

        if (seen[num])
          return false;

        seen[num] = true;
      }
    }

    // check row sum
    int sum = grid[r][c] + grid[r][c + 1] + grid[r][c + 2];

    for (int i = r; i < r + 3; i++)
    {
      if (grid[i][c] + grid[i][c + 1] + grid[i][c + 2] != sum)
        return false;
    }

    // check for col sum
    for (int j = c; j < c + 3; j++)
    {
      if (grid[r][j] + grid[r + 1][j] + grid[r + 2][j] != sum) 
        return false;
    }

    // check diagonals

    if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != sum)
      return false;

    if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != sum)
      return false;

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid = {
      {4, 3, 8, 4},
      {9, 5, 1, 9},
      {2, 7, 6, 2}};
  cout << obj.numMagicSquaresInside(grid) << endl;
  return 0;
}