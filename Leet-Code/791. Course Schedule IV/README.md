# 1462. Course Schedule IV

This problem involved about, there are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where `prerequisites[i] = [ai, bi]` indicates that you must take course ai first if you want to take course `bi`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/course-schedule-iv/description/)

**Approach :**<br/>

1. `Graph Representation`

    - Use an **adjacency list** to represent the course dependency graph.
        - Example: `adj[u]` contains all courses directly dependent on course `u`.

2. `Depth-First Search (DFS)`

    - For each query `(u, v)`:
        - Perform a DFS starting from `u` to check if `v` is reachable.
        - Use a `visit` array to track visited nodes and prevent infinite loops or redundant checks.

3. `Result Storage`

    - Store the result (`true` or `false`) for each query in a vector `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2 * Q)` - Creating the adjacency list adjList takes `O(n^2)` time as we need to iterate over the list prerequisites. Then we iterate over queries and for each we perform DFS that can take `O(V + E)` which is equivalent to `O(n^2)`. Hence, the total time complexity equals `O(n ^ 2 * Q)`.

-   Space-Complexity: `O(n ^ 2)` - The adjacency list requires `O(n ^ 2)` as it stores every edge in the list prerequisites
