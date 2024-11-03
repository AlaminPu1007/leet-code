/**
 * This is the most optimal solution
 * Time complexity: `O(n^2)`
 * Space complexity: `O(1)`
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        for (int i = 1; i < n; i++)
        {
            auto minValues = getTwoMinValue(grid[i - 1]);
            for (int j = 0; j < m; j++)
            {
                if (grid[i - 1][j] == minValues.first)
                {
                    grid[i][j] += minValues.second;
                }
                else
                    grid[i][j] += minValues.first;
            }
        }

        int res = INT_MAX;

        for (auto item : grid[n - 1])
            res = min(res, item);

        return res;
    }

private:
    // this is the helper method to get the two smallest value from the current row
    pair<int, int> getTwoMinValue(vector<int> row)
    {
        int min1 = INT_MAX, min2 = INT_MAX;

        for (auto item : row)
        {
            // it current item is less then the first element
            // then make it the first smallest element and update min1 value to min2 value
            if (item < min1)
            {
                min2 = min1;
                min1 = item;
            }

            else if (item < min2)
                min2 = item;
        }

        return {min1, min2};
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    cout << obj.minFallingPathSum(grid) << endl;
    return 0;
}