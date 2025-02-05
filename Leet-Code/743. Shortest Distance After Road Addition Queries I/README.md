# 3243. Shortest Distance After Road Addition Queries I

This problem involved about, you are given an integer n and a 2D integer array queries.
There are n cities numbered from 0 to n - 1. Initially, there is a unidirectional road from city i to city `i + 1` for all `0 <= i < n - 1`.

## Problem description

For better problem description please visit [LeetCode Page](https://leetcode.com/problems/shortest-distance-after-road-addition-queries-i/description/)

**Approach :**<br/>

1. `Graph Representation`:

    - The graph is represented as an adjacency list `adj` where `adj[u]` contains all nodes directly reachable from `u`.

2. `Breadth-First Search (BFS)`:

    - BFS is used to compute the shortest path from node `0` to node `n-1`.

3. `Dynamic Edge Addition`:
    - For each query, a new directed edge is added to the graph, and the shortest path is recomputed.

**Algorithm :**<br/>

1. `Initialize Graph`:

    - Create an adjacency list for the initial graph, representing the simple path from `0` to `n-1`.

2. `Process Queries`:

    - For each query, add the directed edge `(u, v)` to the graph.
    - Perform BFS to compute the shortest path from `0` to `n-1` after the edge is added.
    - Store the result for each query.

3. `Return Results`:
    - Return a list of shortest distances corresponding to each query.

**Complexity Analysis :** <br/>

-   Time-Complexity: `O(q * (v + e))` - where `v` is the number of nodes and `e` is the number of edges.
-   Space-Complexity: `O(v + e)` - for the adjacency list
