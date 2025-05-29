# 2579. Count Total Number of Colored Cells

This problem involved about, there exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-total-number-of-colored-cells/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an integer `n` representing the number of minutes.
    - The goal is to calculate the number of colored cells in a grid after `n` minutes, following a specific pattern:
        - At each minute, the colored cells expand outward in a diamond-like pattern.
    - The number of colored cells follows a quadratic growth pattern.

2. `Algorithm`:

    - Observe the pattern of colored cells:
        1. For `n = 1`, the number of colored cells is `1`.
        2. For `n = 2`, the number of colored cells is `5`.
        3. For `n = 3`, the number of colored cells is `13`.
        4. The pattern can be generalized as: `res = 1 + 4 + 8 + 12 + ... + 4*(n-1)`.
    - Use a loop to calculate the total number of colored cells by summing the series.

3. `Steps`:
    - Initialize `res` to `1` (the center cell).
    - Initialize `count` to `4` (the number of cells added in the first minute).
    - Iterate from `1` to `n-1`:
        1. Add `count` to `res`.
        2. Increment `count` by `4` for the next layer.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of minutes.
-   Space-Complexity: `O(1)` - as only a few variables are used.
