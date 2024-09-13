# 1905. Count Sub Islands

This problem involved about, you are given two m x n binary matrices grid1 and grid2 containing only 0's (representing water) and 1's (representing land). An island is a group of 1's connected 4-directionally (horizontal or vertical). Any cells outside of the grid are considered water cells.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-sub-islands/description/)

**Approach :**<br/>

1. `Initialize Variables`:

    - `n` and `m` are the dimensions of the grid.
    - `res` to store the count of sub-islands.
    - `visit` to track visited cells.

2. `Traversal`:

    - Iterate through each cell in `grid2`.
    - If a cell is land (`1`), not visited, and is a valid part of an island, start a BFS to check if it forms a sub-island in `grid1`.

3. `BFS Implementation`:

    - Mark the starting cell as visited.
    - Traverse all adjacent land cells using BFS.
    - If any part of the island in `grid2` does not have a corresponding land cell in `grid1`, mark it as not a sub-island.
    - After the BFS, if the island is confirmed as a sub-island, increment the `res` counter.

4. `Return Result`:
    - Return the total count of sub-islands.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - We iterate over all cells in the grid, and each cell is processed only once. BFS for each cell takes O(1) on average due to marking cells as visited.
-   Space-Complexity: `O(n * m)` - Space is required for the visit matrix to track visited cells and for the BFS queue.