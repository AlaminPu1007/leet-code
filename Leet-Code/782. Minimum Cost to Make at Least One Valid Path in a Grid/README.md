# 1368. Minimum Cost to Make at Least One Valid Path in a Grid

This problem involved about, given an m x n grid. Each cell of the grid has a sign pointing to the next cell you should visit if you are currently in this cell. The sign of `grid[i][j]` can be:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/description)

**Approach :**<br/>

1. `Understand the Grid and Movement`:

    - Each cell indicates a preferred direction, with the movement costing `0` if you follow the direction and `1` if you deviate.

2. `Use Dijkstra's Algorithm`:

    - Model this problem as a weighted graph where:
        - Nodes are cells in the grid.
        - Edges represent moving to a neighboring cell, with weights (`0` or `1`) based on the direction.
    - The shortest path from the top-left to the bottom-right cell minimizes the cost.

3. `Priority Queue for Optimization`:

    - Use a `min-heap priority queue` to always process the cell with the smallest accumulated cost.
    - Maintain a `costMatrix` to store the minimum cost to reach each cell.

4. `Explore All Directions`:

    - For each cell, consider moving in the four cardinal directions (right, left, down, up).
    - If the move matches the cell's direction, add `0` to the cost; otherwise, add `1`.

5. `Boundary Checks`:

    - Ensure that the new row and column indices remain within the grid's bounds before processing.

6. `Return Result`:
    - Once the bottom-right cell is processed, its value in the `costMatrix` gives the minimum cost.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * log(n * m))` - The algorithm uses Dijkstra's algorithm with a priority queue. In the worst case, we might need to visit each cell multiple times until we find the optimal path, but no more than 4 times per cell (once for each direction). For each cell, we perform a priority queue operation which takes `O(log(n * m))` time, where n⋅m is the maximum size of the queue.
-   Space-Complexity: `O(n * m)` - The algorithm uses a priority queue that in the worst case might contain all cells of the grid.
