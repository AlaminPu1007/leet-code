## 576. Out of Boundary Paths

This problem involved about, there is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball. <br/>

Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7. <br/>

# Problem description

For better better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/out-of-boundary-paths/description/)

**Approach :**<br/>

1. Initialize a 3D array `dp` to store computed results with dimensions `m x n x (maxMove + 1)`.
2. Implement the DFS function, which represents the number of paths from a given position `(i, j)` within `maxMove` moves.
3. Base cases:
    - If the position is out of the boundary, return 1 (indicating a successful path).
    - If `maxMove` becomes 0, return 0 (no more moves left).
4. If the result for the current state `(i, j, maxMove)` is already memoized, return the stored result.
5. Calculate the number of paths by recursively exploring movements in four directions: up, down, left, and right.
6. Update the result in the `dp` array and return the computed value.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(O(m * n * maxMove))` - The time complexity of the algorithm is O(m _ n _ maxMove) due to the memoization table.
-   Space-Complexity: `O(O(m * n * maxMove))` - The space complexity is O(m _ n _ maxMove) for the memoization table.
