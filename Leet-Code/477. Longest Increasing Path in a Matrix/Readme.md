## 329. Longest Increasing Path in a Matrix

This problem involved about, given an m x n integers matrix, return the length of the longest increasing path in matrix.<br/>

From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e., wrap-around is not allowed).

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/)

**Approach :**<br/>

1. Create a `DFS` function to traverse the matrix and find the longest increasing path starting from each cell.
2. Initialize a cache to store the computed results for each cell to avoid redundant calculations.
3. Iterate through each cell in the matrix:
    - Perform a depth-first search (`DFS`) from the current cell to find the longest increasing path starting from that cell.
    - During the DFS traversal, check each adjacent cell to see if it is valid to move to that cell based on the increasing order condition.
    - Use memoization to store the computed results for each cell in the cache.
4. Return the maximum length of the increasing path found among all cells.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m)` - The DFS function is called for each cell in the matrix, resulting in a total of `n * m` function calls.

-   Space-Complexity: `O(n*m)` - We use a cache to store the results of DFS for each cell, resulting in `O(n * m)` space complexity. Additionally, the DFS function call stack can have a maximum depth of `n * m` in the worst case. Overall, the space complexity is dominated by the cache and the DFS call stack.
