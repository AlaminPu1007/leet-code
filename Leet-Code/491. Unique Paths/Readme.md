## 62. Unique Paths

This problem involved about, there is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.<br/>

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.<br/>

**Approach :**<br/>

1. It initializes a 2D vector `dp` of size `m x n` to store the number of unique paths for each cell. Initialize all cells with -1 to denote unvisited cells.

2. It calls the recursive DFS function with parameters `(0, 0, m, n, dp)` to start exploring paths from the top-left corner.

3. In the DFS function:

    - If the current cell is the bottom-right corner `(row == m - 1 && col == n - 1)`, return 1 to denote a unique path found.
    - Check if the current cell is out of the grid boundaries (`m <= row` or `n <= col`). If so, return 0 to denote no valid path.
    - If the number of unique paths for the current cell is already computed (`dp[row][col] != -1`), return the stored value.
    - Recursively explore paths by moving down (`row + 1`) and moving right (`col + 1`). Add the number of unique paths from these two directions and store the result in `dp[row][col]`.

4. Finally, return the number of unique paths computed for the top-left corner `(0, 0)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m)` - `O(m * n)`, where m is the number of rows and n is the number of columns in the grid.
-   Space-Complexity: `O(m * n)` due to the 2D `dp` array used for memoization, where m is the number of rows and n is the number of columns in the grid.
