## 1219. Path with Maximum Gold

This problem involved about, in a gold mine grid of size m x n, each cell in this mine has an integer representing the amount of gold in that cell, 0 if it is empty. <br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/path-with-maximum-gold/description/)

**Approach :**<br/>

1. Iterate through each cell in the grid.
2. For each cell, perform DFS to explore all possible paths to collect gold.
3. During DFS:
   - Mark the cell as visited.
   - Explore all four adjacent cells (up, down, left, right) if they are within bounds and contain gold.
   - Keep track of the maximum amount of gold collected during the DFS traversal.
   - Unmark the cell as visited after exploring all paths from it.
4. Return the maximum amount of gold collected.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m * 4^(m*n))` - `N` be the number of rows and `M` be the number of columns in the grid.
- Space-Complexity: `O(n * m * 4^(m*n))` - additional visit matrix of size `N*M` to keep track of visited cells. During recursion, the call stack may grow up to `O(N*M)` in the worst case.