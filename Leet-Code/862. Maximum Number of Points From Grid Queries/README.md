# 2503. Maximum Number of Points From Grid Queries

This problem involved about, you are given an m x n integer matrix grid and an array queries of size k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a 2D grid of integers and a list of queries.
    - Each query asks for the number of cells in the grid that can be reached starting from the top-left cell (0,0) by only moving to adjacent cells (up, down, left, right) with values strictly less than the query value.
    - The goal is to answer each query efficiently.

2. `Algorithm`:

    - `Priority Queue (Min-Heap)`: Use a min-heap to always expand the smallest accessible cell first (Dijkstra's algorithm approach).
    - `Sorting Queries`: Sort the queries to process them in increasing order, allowing incremental computation of reachable cells.
    - `BFS with Priority Queue`: For each query, process cells from the heap that are smaller than the current query value, count them, and explore their neighbors.
    - `Visited Tracking`: Maintain a visited matrix to avoid reprocessing the same cells.

3. `Steps`:
    - Sort the queries along with their original indices.
    - Initialize a min-heap with the starting cell (0,0) and mark it as visited.
    - For each query in sorted order:
        - Process all cells in the heap with values less than the current query value.
        - For each processed cell, increment the count of reachable cells and explore its unvisited neighbors.
        - Store the count for the current query at its original index.
    - Return the results for all queries.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * log(n * m) + k log(k))` - where `n` is the number of rows, `m` is the number of columns, and `k` is the number of queries.
-   Spae-Complexity: `O(n * m + k)` - The visited matrix `O(n * m)` , sorting queries `o(K)`.
