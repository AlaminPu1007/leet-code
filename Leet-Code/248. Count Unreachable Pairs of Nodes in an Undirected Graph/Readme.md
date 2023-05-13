# 2316. Count Unreachable Pairs of Nodes in an Undirected Graph

[Visit Problem](https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/description/)

**Approach :**<br/>

## Algorithm

-   Create an adjacency list where `adj[n]` contains all the neighbors of node `n`.
-   Create a `visit` array of length `n` to keep track of nodes that have been visited.
-   Iterate through all of the `nodes` and for each node `i` check if it is visited or not. If node `i` is not visited, begin the `DFS traversal`

-   **Complexity Analysis :**<br/>

-   Time-Complexity: `O(V + E)`
-   Space-Complexity: `O(V + E)`
