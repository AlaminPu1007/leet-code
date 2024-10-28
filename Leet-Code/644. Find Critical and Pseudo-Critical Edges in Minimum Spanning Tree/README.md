# 1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree

This problem involved about, given a weighted undirected connected graph with n vertices numbered from 0 to n - 1, and an array edges where edges[i] = [ai, bi, weighti] represents a bidirectional and weighted edge between nodes ai and bi. A minimum spanning tree (MST) is a subset of the graph's edges that connects all vertices without cycles and with the minimum possible total edge weight.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description/)

**Approach :**<br/>

#### Step 1: Utilize the Disjoint Set Union (DSU)

We implement the Disjoint Set Union (DSU) data structure, also known as Union-Find, to efficiently handle union and find operations while building the MST:

-   `findParent(node)`: Find the ultimate (root) parent of the node using path compression.
-   `unionByRank(u, v)`: Union the sets containing `u` and `v` by rank, which helps keep the tree balanced.

#### Step 2: Sort Edges by Weight

-   First, sort all edges based on their weights in ascending order to process the smallest edges first when building the MST.

#### Step 3: Handle MST Construction

To identify critical and pseudo-critical edges, we repeatedly construct MSTs by:

-   `Skipping an edge`: This helps in determining whether it's a critical edge.
-   `Including an edge`: This helps in determining whether it's a pseudo-critical edge.

#### Step 4: Find Critical and Pseudo-Critical Edges

For each edge, we do the following:

1. `Critical Edge Check`: If excluding the edge from MST construction results in a higher weight, it is a critical edge.
2. `Pseudo-Critical Edge Check`: If including the edge results in the same MST weight, it is a pseudo-critical edge.

#### Key Functions

-   `handleMst`: This function builds the MST while optionally skipping or adding an edge. It uses the DSU to ensure no cycles and tracks the total weight of the MST.
-   `findCriticalAndPseudoCriticalEdges`: This function processes all edges and classifies them into either critical or pseudo-critical edges.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E * log(E)) + (E^2 * α)` - Sorting the edges takes `O(E * log (E))`, and for each edge, we construct an MST, taking `(E^2 * α)`.

-   Space-Complexity: `O(E + V)` - due to the storage of edges, DSU data structures, and intermediate results.
