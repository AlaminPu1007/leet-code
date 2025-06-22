# 2033. Minimum Operations to Make a Uni-Value Grid

This problem involved about, you are given a 2D integer grid of size m x n and an integer x. In one operation, you can add x to or subtract x from any element in the grid.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/description)

**Approach :**<br/>

1. `Convert Grid to 1D Array`

    - Flatten the `grid` into a single array.

2. `Check Modulo Condition`

    - Compute `grid[0][0] % x` and ensure all elements share the same remainder.
    - If not, return `-1`.

3. `Sort the Array`

    - Sorting helps in choosing the `median` as the target.

4. `Calculate Minimum Operations`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * log(n * m))` - Sorting takes `O(n * m * log(n * m))`.
-   Space-Complexity: `O(n * m)` - for storing the flattened array
