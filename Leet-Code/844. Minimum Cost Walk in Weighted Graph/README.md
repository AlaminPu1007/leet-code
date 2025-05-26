# 1. Minimum Cost Walk in Weighted Graph

This problem involved about, there is an undirected weighted graph with n vertices labeled from 0 to `n - 1`.
You are given the integer `n` and an array edges, where `edges[i] = [ui, vi, wi]` indicates that there is an edge between vertices ui and vi with a weight of `wi`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-walk-in-weighted-graph/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a graph with `n` nodes, a list of weighted edges, and a list of queries.
    - Each query asks for the minimum cost to travel from node `u` to node `v`, where the cost is the bitwise AND of the weights of the edges in the path.
    - If there is no path between `u` and `v`, the cost is `-1`.

2. `Algorithm`:

    - Use `Disjoint Set Union (DSU)` to group nodes into connected components.
    - For each connected component, compute the bitwise AND of all edge weights in the component.
    - For each query, check if the two nodes belong to the same connected component:
        1. If they do, return the precomputed bitwise AND for that component.
        2. If they do not, return `-1`.

3. `Steps`:
    - Initialize a DSU object to manage the connected components.
    - Iterate through the edges and perform union operations to group nodes into connected components.
    - Use a hashmap `Map` to store the bitwise AND of edge weights for each connected component.
    - Iterate through the queries:
        1. Find the root nodes of the two query nodes.
        2. If the root nodes are the same, return the precomputed bitwise AND for that component.
        3. If the root nodes are different, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E + Q)` - Building the DSU takes `O(E)` & Precessing the queries takes `O(Q)`.
-   Space-Complexity: `O(n)` - The DSU data structure and the hashmap consume `O(n)` space.
