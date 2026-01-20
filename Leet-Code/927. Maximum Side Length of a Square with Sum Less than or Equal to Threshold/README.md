# 1292. Maximum Side Length of a Square with Sum Less than or Equal to Threshold

This problem involved about, given a `m x n` matrix mat and an integer threshold, return the maximum side-length of a square with a sum less than or equal to threshold or return 0 if there is no such square.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold/description)

**Why prefix sum :**<br/>

-   Without prefix sums, computing the sum of each square would take `O(k^2)` time.
-   With prefix sums, we can calculate the sum of any `submatrix in O(1)` time.

**Algorithm :**<br/>
Create a prefix sum matrix where:

-   `prefixSum[i][j] = sum of all elements in rectangle (0,0) to (i,j)`

1. Iterate through each cell `(i, j)` as the `top-left corner` of a square.
2. Try increasing square sizes starting from the current best result `res`.
3. For each size:
    - Compute the bottom-right cell `(r2, c2)`
    - Use prefix sum to compute the square’s sum in `O(1)`
4. If the sum is `≤ threshold`, update `res`
5. Stop expanding when the sum exceeds `threshold`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * k)` - For each cell, we try all possible square sizes.
-   Space-Complexity: `O(n * m)` - Extra space used for prefix sum matrix.
