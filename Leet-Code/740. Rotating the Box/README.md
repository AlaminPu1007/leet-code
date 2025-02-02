# 1861. Rotating the Box

This problem involved about, you are given an m x n matrix of characters box representing a side-view of a box. Each cell of the box is one of the following:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/rotating-the-box/description)

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

-   Time-Complexity: `O(n * m)` - Simulating gravity involves one traversal per row (`O(m)` for each row).
-   Space-Complexity: `O(n * m)` - Space required for the result grid.
