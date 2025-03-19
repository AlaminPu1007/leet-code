# 1765. Map of Highest Peak

This problem involved about, you are given an integer matrix isWater of size m x n that represents a map of land and water cells.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/map-of-highest-peak/description/)

**Approach :**<br/>

1. `Initialization`:

    - Create a `visited` matrix initialized to `-1` to track unvisited cells. For water cells, set their height to `0` and mark them as visited.
    - Use a queue (`q`) to store all water cells as the starting points of BFS.

2. `BFS Traversal`:

    - While the queue is not empty:
        - Dequeue a cell and iterate over its 4 neighbors (up, down, left, right).
        - If a neighbor is within bounds and unvisited, assign its height as `levelHeights` and mark it as visited.
        - Add the neighbor to the queue for further processing.

3. `Level Management`:

    - Use a `levelHeights` variable to keep track of the current height level, incrementing it after processing all cells of the current level.

4. `Return Result`:
    - The `visited` matrix will now contain the heights for all cells, which is returned as the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - Multi-source BFS, Each cell is visited exactly once, as it is marked as visited when processed.
-   Space-Complexity: `O(n * m)` - The `visited` matrix requires `O(n * m)` and In the worst case, the queue can store all cells requiring `O(n * m)`.
