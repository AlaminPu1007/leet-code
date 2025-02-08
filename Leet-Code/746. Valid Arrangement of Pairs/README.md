# 2097. Valid Arrangement of Pairs

This problem involved about, you are given a 0-indexed 2D integer array pairs where `pairs[i] = [starti, endi]`. An arrangement of pairs is valid if for every index i where `1 <= i < pairs.length`, we have `endi-1 == starti`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/valid-arrangement-of-pairs/description/)

**Approach :**<br/>

#### Step 1: Graph Representation

-   Build an `adjacency list` from the pairs.
-   Track `in-degree` and `out-degree` for each node to identify the starting node:
    -   If a node has `out-degree = in-degree + 1`, it's a starting node.
    -   If no such node exists, use any node as the starting node.

#### Step 2: DFS to Find Eulerian Path

-   Perform a `modified DFS` to traverse edges:
    1. While the current node has outgoing edges, recursively visit the next node.
    2. Push the current node into a `path` after visiting all its neighbors.
-   Reverse the resulting path to get the correct order.

#### Step 3: Convert Path to Pairs

-   Convert the Eulerian path into pairs by iterating through consecutive nodes.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E + V)` - No of edges, no of nodes.
-   Space-Complexity: `O(E + V)` - Space for adjacency list, in-degree, out-degree maps, and recursion stack
