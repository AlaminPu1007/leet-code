# 2812. Find the Safest Path in a Grid

This problem involved about, you are given a 0-indexed 2D matrix grid of size n x n, where (r, c) represents: <br/>
A cell containing a thief if grid[r][c] = 1 <br/>
An empty cell if grid[r][c] = 0

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-safest-path-in-a-grid/description/)

**Approach :**<br/>

##### BFS Initialization:

1. Initialize a grid `(sudoGrid)` with -1 indicating unvisited cells.
2. Enqueue all cells containing enemies (value 1) into a BFS queue with a distance of 0.
3. Perform BFS to fill `sudoGrid` with the minimum distance from each cell to any enemy.

##### Priority Queue Search:

1. Initialize a priority queue `(pq)` with the top-left cell `(0, 0)` and its safeness factor from sudoGrid.
2. While the priority queue is not empty, pop a cell from the queue.
3. For each neighbor of the popped cell, if it hasn't been visited, update its safeness factor and enqueue it into the priority queue.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2 * log(n))` - Each cell is processed once, and each edge (neighbor relationship) is considered once. At most, all cells are added to the priority queue, and each insertion or deletion takes `O(log(n))`

- Space-Complexity: `O(n^2 + n)` - Additional space is required for the priority queue and the visitation array. Additional space is required for the sudoGrid and the BFS queue.