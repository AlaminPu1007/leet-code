## 1289. Minimum Falling Path Sum II

This problem involved about, given an n x n integer matrix grid, return the minimum sum of a falling path with non-zero shifts.<br/>

A falling path with non-zero shifts is a choice of exactly one element from each row of grid such that no two elements chosen in adjacent rows are in the same column.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-falling-path-sum-ii/description)

**Approach with dp :**<br/>

1. Initialize variables to store the number of rows (n) and columns (m) in the given grid.
2. Create a dynamic programming (DP) array `dp` of size `m` to store the minimum falling path sum values.
3. Initialize the DP array with the values from the first row of the grid.
4. Iterate through each row of the grid starting from the second row:
    - Create a temporary DP array `next_dp` to store the updated minimum falling path sum values for the current row.
    - For each cell in the current row, calculate the minimum falling path sum by considering all possible paths from the previous row.
    - Update the corresponding cell in `next_dp` with the minimum sum value.
    - Update the DP array `dp` with the values of `next_dp`.
5. After processing all rows, find the minimum falling path sum from the last row in the DP array.
6. Return the minimum falling path sum as the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^3)`- We iterate through each cell in the grid, and for each cell, we consider all possible paths from the previous row, resulting in a time complexity of `O(n * m^2)`.

-   Space-Complexity: `O(n)` - we are using two additional array to hold previous and current values

<br/>
<br/>
<br/>

## Optimal Approaches:

1. Initialize variables to store the number of rows (n) and columns (m) in the given grid.
2. Iterate through each row of the grid starting from the second row:
    - For each cell in the current row, find the two smallest values from the previous row using a helper method `getTwoMinValue`.
    - Update the current cell by adding the smaller of the two smallest values to its original value.
3. After processing all rows, find the minimum falling path sum from the last row.
4. Return the minimum falling path sum as the result.

## Helper Method:

### `getTwoMinValue(row: vector<int>) -> pair<int, int>`:

-   This method takes a vector representing a row of the grid as input.
-   It iterates through the elements of the row to find the two smallest values.
-   Returns a pair containing the two smallest values found in the row.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m)`- n is the number of rows, and m is the number of columns in the grid.

-   Space-Complexity: `O(1)` - The space complexity is constant as we do not use any additional space that grows with the input size.
