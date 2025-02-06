# 2290. Minimum Obstacle Removal to Reach Corner

This problem involved about, you are given a 0-indexed 2D integer array grid of size m x n. Each cell has one of two values:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-obstacle-removal-to-reach-corner/description/)

**Approach :**<br/>

1. `Dijkstra's Algorithm`:

    - This problem is a variation of shortest path problems where each cell has a cost:
        - Cost `0` for free paths.
        - Cost `1` for obstacle cells.
    - A priority queue is used to always explore the least-cost path first.

2. `Priority Queue`:

    - Stores `{current_cost, {row, col}}` pairs.
    - Always explores cells with the minimum current cost first.

3. `Four-Directional Movement`:
    - From any cell `(row, col)`, explore its neighbors:
        - Up, Down, Left, Right.

**Steps :**<br/>

1. `Initialization`:

    - Use a priority queue to store the current move cost and cell position.
    - A `visited` array ensures each cell is processed only once.

2. `Process Grid`:

    - Start from the top-left corner `(0,0)` with cost `0`.
    - Explore all neighbors. If a neighbor is an obstacle, increment the cost; otherwise, continue with the current cost.

3. `Termination`:

    - Once the bottom-right corner `(n-1, m-1)` is reached, return the cost.

4. `Edge Cases`:
    - If the grid is a single cell, the cost is `0`.
    - If no path exists, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m) * log(n * m)` - Push/pop operations can be cost `O(log(n * m))`. Each cell is visited once `O(n * m)`.
-   Space-Complexity: `O(n * m)` - we are using an additional queue, visited array.
