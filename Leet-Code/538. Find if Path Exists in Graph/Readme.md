## 1971. Find if Path Exists in Graph

This problem involved about, there is a bi-directional graph with n vertices, where each vertex is labeled from 0 to n - 1 (inclusive). The edges in the graph are represented as a 2D integer array edges, where each edges[i] = [ui, vi] denotes a bi-directional edge between vertex ui and vertex vi. Every vertex pair is connected by at most one edge, and no vertex has an edge to itself.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-if-path-exists-in-graph/description/)

**Approach :**<br/>

1. If the given node is its own parent (i.e., `node == parents[node]`), return the node.
2. Otherwise, recursively find the parent of the current node and update its parent to the root parent using path compression.

### Method: unionByRank

**Algorithm:**

1. Find the root parents of the given nodes `u` and `v` using the `findParent` method.
2. If both nodes have the same root parent, they are already in the same connected component, so return.
3. Otherwise, merge the smaller rank tree under the root parent of the larger rank tree.
4. If both trees have the same rank, choose one as the parent and increment its rank.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - The time complexity of both `findParent` and `unionByRank` methods is approximately` O(log n)` due to path compression and union by rank.

-   Space-Complexity: `O(e)` - The space complexity of the `edges` vector is `O(E)`, where `E` is the number of edges in the graph.
