#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
      int n = grid.size();
      vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));

      for(int i = 0; i < n-2; i++)
      {
        for(int j = 0; j < n-2; j++)
        {
          maxLocal[i][j] = findMaxValue(i, j, grid);
        }
      }
      return maxLocal;
    }
  private:
  int findMaxValue(int row, int col, vector<vector<int>>& grid)
  {
    int maxValue = INT_MIN;
    int n = grid.size();

     for(int i = row; i <= row+2; i++)
      {
        for(int j = col; j <= col+2; j++)
        {
          maxValue = max(maxValue, grid[i][j]);
        }
      }
      return maxValue;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
  vector<vector<int>> res = obj.largestLocal(grid);

  for(auto item: res)
  {
    for(auto it: item)
      cout<<it<<" ";

    cout<<endl;
  }
  return 0;
}