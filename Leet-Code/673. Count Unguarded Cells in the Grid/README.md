# 2257. Count Unguarded Cells in the Grid

This problem involved about, you are given two integers m and n representing a 0-indexed m x n grid. You are also given two 2D integer arrays guards and walls where `guards[i] = [rowi, coli]` and `walls[j] = [rowj, colj]` represent the positions of the ith guard and jth wall respectively.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-unguarded-cells-in-the-grid/description/)

**Approach :**<br/>

#### Grid Representation

The grid cells are categorized as follows:

-   `UNGUARDED` (0): Default state for cells.
-   `GUARDED` (1): Cells that are guarded by a guard's line of sight.
-   `GUARD` (2): Cells occupied by a guard.
-   `WALL` (3): Cells occupied by a wall.

#### Steps

1. `Initialize the Grid`:
    - Mark the positions of guards and walls using the constants.
2. `Mark Guarded Cells`:
    - For each guard, traverse in all four directions (up, down, left, right) and mark cells as `GUARDED` until encountering a wall or another guard.
3. `Count Unguarded Cells`:
    - Traverse the grid and count the cells that remain `UNGUARDED`.

#### BFS Logic

-   The `BFS` function iterates in all four directions from the guard's position and marks visible cells as `GUARDED`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where m and n are grid dimensions.
-   Space-Complexity: `O(n * m)` - where m and n are grid dimensions.
