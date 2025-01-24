# 802. Find Eventual Safe States

This problem involved about, there is a directed graph of n nodes with each node labeled from `0 to n - 1`. The graph is represented by a 0-indexed 2D integer array graph where `graph[i]` is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in `graph[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-eventual-safe-states/description)

**Approach :**<br/>

1. `Initialization`:

    - Create a hash map `safe` to store whether each node is safe.
    - Create an empty result vector `res`.

2. `Perform DFS`:

    - For each node in the graph:
        - If the node is determined to be safe by the DFS function, add it to the result vector.

3. `DFS Logic`:

    - If a node's safety status is already computed, return the result from `safe`.
    - Mark the node as unsafe (`false`) initially to detect cycles.
    - For each neighbor of the node:
        - Perform a recursive DFS. If any neighbor is unsafe, the current node is also unsafe.
    - If all neighbors are safe, mark the current node as safe (`true`).

4. `Return Result`:
    - Sort the result vector and return it.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(V + E)` - In the worst case, every node is visited, and all its edges are traversed. This results in `O(V + E)`.
-   Space-Complexity: `O(V)` - In the worst case, the recursion depth equals the number of nodes.
