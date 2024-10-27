# 1937. Maximum Number of Points with Cost

This problem involved about, you are given an m x n integer matrix points (0-indexed). Starting with 0 points, you want to maximize the number of points you can get from the matrix.<br/>

To gain points, you must pick one cell in each row. Picking the cell at coordinates (r, c) will add points[r][c] to your score.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-points-with-cost/description)

**Approach :**<br/>

1. `Dynamic Programming (DP) Initialization`:

    - Start by initializing the first row's points as the current row in the DP table.

2. `Prefix Sum Calculation`:

    - For each row, compute two auxiliary arrays:
        - `leftSum`: Stores the maximum points achievable from the left side up to each cell.
        - `rightSum`: Stores the maximum points achievable from the right side up to each cell.

3. `Row-wise Calculation`:

    - For each cell in the current row, calculate the maximum points by considering the maximum of the left and right sums, and update the next row accordingly.

4. `Result`:
    - After processing all rows, the maximum value in the last row gives the maximum points achievable.

**Detailed Algorithm :**<br/>

1. `Initialization`:

    - `cur_row` is initialized with the points from the first row.

2. `Iterate Over Rows`:

    - For each subsequent row:
        - Calculate `leftSum` for each cell, which is the maximum points attainable by coming from the left.
        - Calculate `rightSum` for each cell, which is the maximum points attainable by coming from the right.
        - For each cell, calculate the new value by adding the maximum of the corresponding `leftSum` or `rightSum`.

3. `Return the Result`:
    - After processing all rows, return the maximum value from the last `cur_row`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns. We process each cell in the grid exactly once.
-   Space-Complexity: `O(n)` - as we only maintain arrays of size equal to the number of columns.
