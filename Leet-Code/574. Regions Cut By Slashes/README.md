# 959. Regions Cut By Slashes

This problem involved about, an n x n grid is composed of 1 x 1 squares where each 1 x 1 square consists of a '/', '\', or blank space ' '. These characters divide the square into contiguous regions.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/regions-cut-by-slashes/description/)

**Approach :**<br/>

1. `Expand the Grid`:

    - Each cell in the original grid is expanded into a 3x3 block.
    - If the cell contains a `/`, the top-right to bottom-left diagonal of the 3x3 block is marked as filled (1).
    - If the cell contains a `\`, the top-left to bottom-right diagonal of the 3x3 block is marked as filled (1).

2. `Count the Number of Regions`:
    - Traverse the expanded grid to count the number of connected components (regions).
    - A connected component is an area of zeros (0s) that are adjacent (connected by edges).
    - Use a BFS or DFS to traverse each region, marking the cells as visited (changing 0s to 1s).

**Detailed Algorithm :**<br/>

1. `Expand Each Cell`:

    - Initialize a `n*3 x n*3` matrix, where each original cell is replaced by a 3x3 block.
    - Depending on the character in the original cell (`/` or `\`), mark the corresponding cells in the 3x3 block.

2. `Traverse the Expanded Grid`:

    - Use BFS to find and mark all cells connected to a starting cell (i.e., part of the same region).
    - For each unvisited cell (0), increment the region count and start a BFS to mark the entire region.

3. `Return the Number of Regions`:
    - The number of BFS/DFS calls represents the number of distinct regions.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - The algorithm populates the expanded grid by iterating over the original grid, which takes `O(n^2)` time.
-   Space-Complexity: `O(n^2)` - The expanded grid has dimensions `3n × 3n`, which requires `O(n^2)` space.
