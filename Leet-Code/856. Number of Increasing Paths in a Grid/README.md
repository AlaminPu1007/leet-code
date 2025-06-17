# 2328. Number of Increasing Paths in a Grid

This problem involved about, you are given an m x n integer matrix grid, where you can move from a cell to any adjacent cell in all 4 directions.
Return the number of strictly increasing paths in the grid such that you can start from any cell and end at any cell. Since the answer may be very large, return it modulo `109 + 7`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-increasing-paths-in-a-grid/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a 2D grid of integers.
    - The goal is to count all possible strictly increasing paths in the grid, where a path is defined as a sequence of adjacent cells (up, down, left, right) with strictly increasing values.
    - The result should be returned modulo `(10^9 + 7)`.

2. `Algorithm`:

    - Use `dynamic programming with memoization` to count the number of strictly increasing paths starting from each cell.
    - Define a DP table `dp[row][col]` to store the number of strictly increasing paths starting from `(row, col)`.
    - For each cell, explore all four possible directions (up, down, left, right) and recursively compute the number of paths for cells with smaller values.
    - Sum up the results for all cells to get the total number of strictly increasing paths.

3. `Steps`:
    - Initialize a DP table `dp` with `-1` to represent `uncomputed` states.
    - Iterate through each cell in the grid:
        - Compute the number of strictly increasing paths starting from the current cell using the `Solved` function.
        - Add the result to the total count, taking modulo `(10^9 + 7)`.
    - The `Solved` function:
        - Checks if the current cell is out of bounds.
        - If the result for the current cell is already computed, returns it.
        - Initializes the result to `1` (the path consisting of the cell itself).
        - Recursively computes the number of paths for adjacent cells with smaller values.
        - Stores the result in the DP table and returns it.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns in the grid.
-   Space-Complexity: `O(n * m)` - due to the DP table storing results for each cell.
