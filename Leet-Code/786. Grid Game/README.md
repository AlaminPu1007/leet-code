# 2017. Grid Game

This problem involved about, you are given a 0-indexed 2D array grid of size 2 x n, where grid[r][c] represents the number of points at position (r, c) on the matrix. Two robots are playing a game on this matrix.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/grid-game/description/)

**Approach :**<br/>

1. `Initialization`:

    - `firstRowSums`: Sum of all elements in the first row.
    - `secondRowRemainingSum`: Sum of the elements of the second row that remain after each move of the first robot.
    - `res`: Variable to store the minimum of all maximum remaining sums.

2. `Iterating Over Columns`:

    - For each column `i`:
        - Subtract the current element in the first row from `firstRowSums`, as the first robot moves.
        - Calculate the remaining sum for the second robot by considering the maximum of the remaining sum in the first row and the sum accumulated in the second row (`secondRowRemainingSum`).
        - Update `res` by storing the minimum of the current `res` and the best remaining sum for the second robot.
        - Add the current element from the second row to `secondRowRemainingSum`.

3. `Return the Result`:
    - After iterating over all columns, return `res`, which is the minimum of the maximum remaining sums for all moves.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Calculating the sum of the first row takes `O(n)`, The loop iterates over all columns, performing constant time operations for each, resulting in `O(n)`.
-   Space-Complexity: `O(1)` - as we are using only a constant amount of space.
