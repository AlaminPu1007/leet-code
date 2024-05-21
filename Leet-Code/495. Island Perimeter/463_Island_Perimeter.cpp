#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int islandPerimeter(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();
    int perimeter = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == 1)
          perimeter += DFS(i, j, grid);
      }
    }

    return perimeter;
  }

private:
  int DFS(int row, int col, vector<vector<int>> &grid)
  {
    // check boundary
    // Water contributes 1 to perimeter
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == 0)
    {
      return 1;
    }

    if (grid[row][col] == -1)
      return 0;

    grid[row][col] = -1;

    // Explore neighbors (up, down, left, right)
    return (
        DFS(row + 1, col, grid) +
        DFS(row - 1, col, grid) +
        DFS(row, col + 1, grid) +
        DFS(row, col - 1, grid));
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
  cout << obj.islandPerimeter(arr) << endl;
  return 0;
}