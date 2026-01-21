# 1411. Number of Ways to Paint N × 3 Grid

This problem involved about, you have a grid of size `n x 3` and you want to paint each cell of the grid with exactly one of the three colors: Red, Yellow, or Green while making sure that no two adjacent cells have the same color (i.e., no two cells that share vertical or horizontal sides have the same color).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/description/)

**Approach :**<br/>

Instead of coloring each cell individually, we predefine `all valid row color patterns` that satisfy the horizontal constraint.

There are exactly `12 valid patterns` for a single row of 3 columns using `{R, Y, G}` with no adjacent duplicates.

We then use `Dynamic Programming` to count how many ways we can stack these patterns vertically while respecting the vertical constraint.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - There are `n` rows.
-   Space-Complexity: `O(n)` - DP table of size `(n × 12)`.
