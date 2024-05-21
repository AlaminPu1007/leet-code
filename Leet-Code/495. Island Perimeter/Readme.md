---
runme:
  id: 01HVQRW6Y5YS3B0KG95ZJATAZ1
  version: v3
---

## 463. Island Perimeter

This problem involved about, you are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water. <br/>

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). <br/>

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/island-perimeter/description/)

**Approach :**<br/>

1. Initialize a variable `perimeter` to store the total perimeter.
2. Iterate through each cell in the grid:
    - If the cell value is `1`, call the DFS function to calculate the perimeter of the island starting from that cell.
3. Return the total perimeter calculated.

**DFS Function:**

1. Check the boundary conditions and handle the case where the current cell is water (cell value is `0`). Water cells contribute `1` to the perimeter.
2. Mark the current cell as visited by updating its value to `-1`.
3. Recursively explore the neighboring cells (up, down, left, and right) to calculate the perimeter.
4. Return the sum of perimeter contributed by the current cell and its neighbors.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - The algorithm traverses each cell of the grid once and performs DFS from each land cell, resulting in a time complexity of `O(n * m)`.

-   Space-Complexity: `O(n * m)` - In the worst case, if the island occupies the entire grid, the space complexity could be `O(n * m)`, where `n` is the number of rows and `m` is the number of columns in the grid.