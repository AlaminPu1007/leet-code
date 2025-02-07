# 2577. Minimum Time to Visit a Cell In a Grid

This problem involved about, you are given a `m x n` matrix grid consisting of non-negative integers where `grid[row][col]` represents the minimum time required to be able to visit the cell `(row, col)`, which means you can visit the cell `(row, col)` only when the time you visit it is greater than or equal to `grid[row][col]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/description/)

**Approach :**<br/>

#### Step 1: Simulate Gravity

For each row:

1. Maintain a pointer (`right`) that tracks the rightmost empty position in the row.
2. Traverse the row from right to left:
    - If a stone (`#`) is found:
        - Swap the stone with the position at the `right` pointer.
        - Decrement the `right` pointer.
    - If an obstacle (`*`) is found:
        - Update the `right` pointer to just before the obstacle.

#### Step 2: Rotate the Box

To rotate the box 90 degrees clockwise:

1. Create a new 2D grid with dimensions `m x n`.
2. For each column in the original box:
    - Populate it as a row in the new grid by reading elements from bottom to top.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m * n * log(m * n))` - `O(m * n)` cells and `O(log(m * n))` time for each queue operation
-   Space-Complexity: `O(n * m)` - Space required for the result grid.
