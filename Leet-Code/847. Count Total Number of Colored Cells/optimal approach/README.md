# 2579. Count Total Number of Colored Cells

This problem involved about, there exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-total-number-of-colored-cells/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an integer `n` representing the number of minutes.
    - The goal is to calculate the number of colored cells in a grid after `n` minutes, following a specific pattern:
        1. At each minute, the colored cells expand outward in a diamond-like pattern.
    - The number of colored cells follows a quadratic growth pattern.

2. `Algorithm`:

    - Observe the pattern of colored cells:
        - For `n = 1`, the number of colored cells is `1`.
        - For `n = 2`, the number of colored cells is `5`.
        - For `n = 3`, the number of colored cells is `13`.
        - The pattern can be generalized as: `res = 1 + 2 * n * (n - 1)`.
    - Use the formula to directly compute the result.

3. `Steps`:
    - Use the formula `res = 1 + 2 * n * (n - 1)` to calculate the number of colored cells.
    - Return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - as the result is computed using a mathematical formula.
-   Space-Complexity: `O(1)` - as only a few variables are used.
