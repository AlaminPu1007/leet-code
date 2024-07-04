/*
  we will take help of prefix sum approach.
  The iterate over the all possible subarray on the given matrix and count result of target subarray
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
  {
    int n = matrix.size(), m = matrix[0].size();
    int res = 0;

    // Calculate prefix sum of each row
    for (int i = 0; i < n; i++)
      for (int j = 1; j < m; j++)
        matrix[i][j] += matrix[i][j - 1];

    // Iterate over the columns of the matrix to define subarray windows
    for (int startWindow = 0; startWindow < m; startWindow++)
    {
      // Explore all possible subarray windows within the matrix
      for (int endWindow = startWindow; endWindow < m; endWindow++)
      {
        // Declare a hashmap to track previous subarray results
        unordered_map<int, int> Map;

        // Every subarray initially has an empty or zero result
        Map[0] = 1;

        int sum = 0;

        // Iterate over the rows to calculate subarray sums
        for (int row = 0; row < n; row++)
        {
          // Calculate subarray sum, exclude previous columns if any
          sum += matrix[row][endWindow] - (startWindow > 0 ? matrix[row][startWindow - 1] : 0);

          // Check if the current sum minus the target exists in the hashmap
          int value = (sum - target);
          if (Map.find(value) != Map.end())
            res += Map[value];

          // Increment the count of the current sum in the hashmap
          Map[sum]++;
        }
      }
    }

    return res;
  }
};
