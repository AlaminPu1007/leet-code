# 2658. Maximum Number of Fish in a Grid

This problem involved about, you are given a 0-indexed 2D matrix grid of size m x n, where (r, c) represents:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a 2D grid where each cell represents either water (`grid[i][j] > 0`) or land (`grid[i][j] = 0`).
    - The goal is to find the maximum number of fish that can be caught by traversing connected water cells (up, down, left, right).

2. `Algorithm`:

    - Use `Breadth-First Search (BFS)` to explore all connected water cells starting from each unvisited cell.
    - For each unvisited water cell, perform BFS to calculate the total number of fish in the connected region.
    - Track the maximum fish count across all regions.

3. `Steps`:
    - Initialize a `visit` matrix to keep track of visited cells.
    - Iterate through each cell in the grid.
    - If the cell is a water cell and unvisited, perform BFS to calculate the total fish in the connected region.
    - Update the result with the maximum fish count found.

**Time Complexity :**<br/>

-   Time-Complexity : `O(n * m)` - where `n` is the number of rows and `m` is the number of columns in the grid.

-   Space-Complexity: `O(n * m)` - due to the `visit` matrix and the BFS queue.
