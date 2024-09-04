# 1568. Minimum Number of Days to Disconnect Island

This problem involved about, you are given an m x n binary grid grid where 1 represents land and 0 represents water. An island is a maximal 4-directionally (horizontal or vertical) connected group of 1's.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/description/)

**Approach :**<br/>

1. `Initial Check for Disconnection`:

    - First, check if the given grid is already disconnected. If so, return `0` as no days are needed.

2. `Simulate Land Removal`:

    - Iterate over each cell in the grid. For each land cell, temporarily turn it into water and check if the grid becomes disconnected. If it does, return `1` as only one day is required.
    - Restore the grid to its original state after checking.

3. `Return the Result`:
    - If no single land cell removal leads to disconnection, return `2` since removing two cells will guarantee disconnection.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)^2` - where `n` is the no of rows, and m is the no of cols. The outer loop runs for each cell in the grid, and each check for islands is `O(n * m)`
-   Space-Complexity: `O(n * m)` - for visited grid