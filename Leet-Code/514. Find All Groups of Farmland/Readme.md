## 1992. Find All Groups of Farmland

This problem involved about, you are given a 0-indexed m x n binary matrix land where a 0 represents a hectare of forested land and a 1 represents a hectare of farmland.<br/>

To keep the land organized, there are designated rectangular areas of hectares that consist entirely of farmland. These rectangular areas are called groups. No two groups are adjacent, meaning farmland in one group is not four-directionally adjacent to another farmland in a different group.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-all-groups-of-farmland/description)

**Approach :**<br/>

1. Initialize variables to store the number of rows (n) and columns (m) in the given matrix.
2. Define the four directions for traversal: up, left, right, down.
3. Create a function `findFarmland` to iterate through each cell of the matrix.
4. For each cell with a value of 1 (indicating land), perform Depth-First Search (DFS) to find the farmland boundaries.
5. During DFS traversal, mark visited land cells as 0 to avoid revisiting them.
6. Keep track of the maximum row (r2) and column (c2) coordinates encountered during DFS to determine the farmland boundaries.
7. After DFS traversal, add the coordinates of the farmland to the result vector.
8. Return the result vector containing the coordinates of all identified farmlands.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - Every cell of the matrix is traversed once during DFS.
-   Space-Complexity: `O(n^2)` - The space complexity is constant as we are not using any additional data structures that grow with the input size.
