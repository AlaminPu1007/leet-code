# 2685. Count the Number of Complete Components

This problem involved about, you are given an integer n. There is an undirected graph with n vertices, numbered from `0 to n - 1`. You are given a 2D integer array edges where `edges[i] = [ai, bi]` denotes that there exists an undirected edge connecting vertices ai and `bi`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-number-of-complete-components/description)

**Approach :**<br/>

1. `Build an adjacency list (`adj`)` from the given `edges[]`.
2. `Use DFS to find all connected components`:
    - Start DFS from each unvisited node.
    - Store all nodes in the component (`nodes` array).
3. `Check if the component is complete`:
    - If each node in the component has exactly `size - 1` neighbors, it is a `complete graph`.
4. `Count all complete components`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(V + E)` - DFS runs in `o(V + E)`.
-   Space-Complexity: `O(V + E)` - , dominated by the graph representation and recursion stack.
