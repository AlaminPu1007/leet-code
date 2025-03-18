# 407. Trapping Rain Water II

This problem involved about, given an `m x n` integer matrix heightMap representing the height of each unit cell in a 2D elevation map, return the volume of water it can trap after raining.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/trapping-rain-water-ii/description/)

**Approach :**<br/>

1. `Initialize Structures`:

    - Create a `min-heap` to store cells as `{height, {row, col}}` based on their height.
    - Use a `visited` 2D array to track processed cells.

2. `Add Boundary Cells`:

    - Push all boundary cells into the heap and mark them as visited. These cells form the initial boundary that water cannot escape.

3. `Process Cells`:

    - While the heap is not empty:
        1. Pop the cell with the minimum height from the heap.
        2. Check its unvisited neighbors.
        3. Calculate trapped water for each neighbor:
            - `water = max(0, current_height - neighbor_height)`.
        4. Update the height of the neighbor to the maximum of its height and the current height (to simulate water containment).
        5. Push the neighbor into the heap and mark it as visited.

4. `Return Result`:
    - Accumulate the trapped water and return the total.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * log(n * m))` - Each cell is pushed in the boundary exactly once, so the while loops runs `O(m * n)` times. On each iteration, an element is popped from the priority queue and four other elements (the neighboring cells) are potentially pushed into it. Since the push and pop operations of the priority queue have a time complexity of `O(k)`, where k represents the size of the priority queue, the overall time complexity of the algorithm becomes `O(n * m * log(n * m))`.
-   Space-Complexity: `O(n * m)` - Stores at most `O(n * m)` cells.
