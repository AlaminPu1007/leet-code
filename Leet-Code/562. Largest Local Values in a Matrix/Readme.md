## 2373. Largest Local Values in a Matrix

This problem involved about, you are given an n x n integer matrix grid.<br/>
Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/largest-local-values-in-a-matrix/description/)

**Approach :**<br/>

1. Initialize a 2D vector `maxLocal` of size `(n-2) x (n-2)` to store the largest local values.
2. Iterate over the grid with nested loops from `i = 0` to `n-3` and from `j = 0` to `n-3`.
3. For each position `(i, j)` in the grid, find the maximum value in the 3x3 subgrid starting from `(i, j)`.
4. Store the maximum value in the corresponding position `(i, j)` in the `maxLocal` vector.
5. Return the `maxLocal` vector containing the largest local values.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2)` - Iterating over the grid with nested loops takes `O(N^2)` time.
- Space-Complexity: `O(n^2)` - because the `maxLocal`