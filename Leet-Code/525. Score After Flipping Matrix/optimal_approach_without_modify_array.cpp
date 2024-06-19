#include <bits/stdc++.h>
using namespace std;


class Solution {
   public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();     // indicating row size
        int m = grid[0].size();  // indicating col size

        int res = n * pow(2 , (m - 1));

        // flip every column that will have more 0 than 1
        for (int col = 1; col < m; col++) {

            int count = 0;

            // count the majority element
            // cause we want the major element to be 1, that will give us maximum result 

            for (int row = 0; row < n; row++)
                // if the current bit is not equal to it's original first row bit
                if(grid[row][0] != grid[row][col])
                  count++;
            
            count = max(count, (n - count));

            res += count * pow(2, (m - 1 -col));
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