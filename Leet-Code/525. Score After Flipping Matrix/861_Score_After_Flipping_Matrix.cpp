#include <bits/stdc++.h>
using namespace std;


class Solution {
   public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();     // indicating row size
        int m = grid[0].size();  // indicating col size

        int res = 0;

        // flip every row that will be start withing 0
        for (int row = 0; row < n; row++) {
            if (grid[row][0] == 0) {
                for (int col = 0; col < m; col++) {
                    grid[row][col] = (grid[row][col] == 0 ? 1 : 0);
                }
            }
        }

        // flip every column that will have more 0 than 1
        for (int col = 0; col < m; col++) {
            int count_zeros = 0;

            for (int row = 0; row < n; row++)
                if (grid[row][col] == 0) count_zeros++;

            if (count_zeros > (n - count_zeros)) {
                for (int i = 0; i < n; i++) grid[i][col] = (grid[i][col] == 0 ? 1 : 0);
            }
        }

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                // we can use this
                // if(grid[row][col] == 1)
                // {
                //   res += pow(2, (m - 1- col));
                // }

                // also this is similar approach
                // by shifting the left most bit
                res += grid[row][col] << (m - 1 - col);
            }
        }

        return res;
    }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
  cout<<obj.matrixScore(grid)<<endl;
  return 0;
}