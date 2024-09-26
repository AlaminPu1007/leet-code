# 1579. Remove Max Number of Edges to Keep Graph Fully Traversable

This problem involved about, given an array edges where `edges[i] = [typei, ui, vi]` represents a bidirectional edge of type `typei` between nodes ui and vi, find the maximum number of edges you can remove so that after removing the edges, the graph can still be fully traversed by both Alice and Bob. The graph is fully traversed by Alice and Bob if starting from any node, they can reach all other nodes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/description/)

**Approach :**<br/>

To solve the problem of finding the maximum number of edges that can be removed while ensuring the graph remains fully traversable for both Alice and Bob, we can use the Disjoint Set Union (DSU) or Union-Find data structure. The approach involves using two DSU instances (one for Alice and one for Bob) and processing the edges in a specific order to maximize the number of removable edges.

**Algorithm :**<br/>

1. `Define the DSU Class `:

    - The DSU class is defined with methods for finding the root parent of a node with path compression and union by rank.
    - The class keeps track of the number of components in the graph.

2. `Initialize DSUs `:

    - Create two DSU instances, one for Alice and one for Bob.

3. `Sort Edges `:

    - Sort the edges in descending order based on their type to prioritize type 3 edges (common to both Alice and Bob).

4. `Process Edges `:

    - Traverse through the edges and perform union operations based on the type of edge:
        - Type 3 edges are processed first and added to both Alice's and Bob's DSUs.
        - Type 1 edges are added to Alice's DSU.
        - Type 2 edges are added to Bob's DSU.

5. `Check Connectivity `:
    - After processing all edges, check if both Alice and Bob have fully connected graphs (only one component remains).
    - If both graphs are fully connected, return the number of edges that can be removed. Otherwise, return -1.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting edges

-   Space-Complexity: `O(v)` - where `v` is the number of vertices, for storing the parent and rank arrays.