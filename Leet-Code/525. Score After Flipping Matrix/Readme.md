

## 861. Score After Flipping Matrix

This problem involved about, you are given an m x n binary matrix grid. <br/>

A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/score-after-flipping-matrix/description)

**Approach Modify the original array :**<br/>

1. Iterate over each row of the grid.
2. If the first element of the row is 0, flip the row.
3. Iterate over each column of the grid.
4. Count the number of zeros in each column.
5. If the count of zeros is greater than half the number of rows, flip the column.
6. Calculate the score by converting each row to an integer, treating it as a binary number, and summing up the values.
   - Start with the leftmost column and consider each cell's value.
   - For each cell, left-shift the value by `(m - 1 - col)` and add it to the score.
7. Return the score.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - `N` be the number of rows and `M` be the number of columns in the grid.

- Space-Complexity: `O(1)` - space complexity is `O(1)` because we are not using any extra space that grows with the input size.


  <br/>
  <br/>

# Optimal Approach without modifying the actual array

**Approach Modify the original array :**<br/>

1. Calculate the initial score assuming all rows start with 1.
2. For each column starting from the second column:
   - Count the number of rows where the current column value is different from the first column value.
   - Determine the maximum count between the number of rows with the same value as the first row and the number of rows with a different value.
   - Add the contribution of the current column to the total score.
3. Return the final score.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - `N` be the number of rows and `M` be the number of columns in the grid.

- Space-Complexity: `O(1)` - space complexity is `O(1)` because we are not using any extra space that grows with the input size.