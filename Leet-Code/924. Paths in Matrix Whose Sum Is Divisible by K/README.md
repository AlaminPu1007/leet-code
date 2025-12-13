# 2435. Paths in Matrix Whose Sum Is Divisible by K

This problem involved about, you are given a 0-indexed `m x n` integer matrix grid and an integer k. You are currently at position `(0, 0)` and you want to reach position `(m - 1, n - 1)` moving only down or right.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/description)

**Approach :**<br/>

1. Start DFS from `(0,0)` with remainder `0`.
2. For each state `(r, c, rem)`:
    - If we reach the last cell `(n-1, m-1)`:
        - Add the cell value to `rem`
        - If `(rem + grid[r][c]) % k == 0` → valid path
    - If out of bounds → return 0
    - If already computed → return memoized value
3. Compute new remainder:
4. Recursively compute:
    - Move Down → `DFS(r+1, c, newRem)`
    - Move Right → `DFS(r, c+1, newRem)`
5. Store result in `dp` and return it.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * k)` - There are `n * m` grid positions. For each position, there are `k` possible remainder states.
-   Space-Complexity: `O(n * m * k)` - DP table.
