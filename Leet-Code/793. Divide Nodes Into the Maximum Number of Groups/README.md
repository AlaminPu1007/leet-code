# 493. Divide Nodes Into the Maximum Number of Groups

This problem involved about, you are given a positive integer n representing the number of nodes in an undirected graph. The nodes are labeled from 1 to n.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/description/)

**Approach :**<br/>

1. `Graph Representation`

    - Construct an adjacency list `adj` from the given `edges`.

2. `Connected Components Identification`

    - Iterate through all nodes `1` to `n`.
    - Use BFS to find all nodes in a connected component and store them in `srcNodes`.

3. `Bipartiteness Check & Maximum Groups Calculation`

    - For each node in `srcNodes`, perform BFS to check if the component is bipartite.
    - Track the maximum possible groups for the component.

4. `Handling Odd-Length Cycles`
    - If an odd-length cycle is found in the graph, return `-1` as it cannot be grouped as per problem constraints.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(V + E)` - where `V` is the number of nodes and `E` is the number of edges.
-   Space-Complexity: `O(V + E)` - for the adjacency list, visited array, and BFS queue.
