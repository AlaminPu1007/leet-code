# 3372. Maximize the Number of Target Nodes After Connecting Trees I

This problem involved about, there exist two undirected trees with n and m nodes, with distinct labels in ranges `[0, n - 1] and [0, m - 1]`, respectively. You are given two 2D integer arrays edges1 and edges2 of lengths `n - 1 and m - 1`, respectively, where `edges1[i] = [ai, bi]` indicates that there is an edge between nodes ai and bi in the first tree and `edges2[i] = [ui, vi]` indicates that there is an edge between nodes `ui and vi` in the second tree. You are also given an integer k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximize-the-number-of-target-nodes-after-connecting-trees-i/description)

**Key Insights :**<br/>

1. `Graph Representation`: Both trees are represented as undirected graphs using adjacency lists
2. `BFS for Node Counting`: Use BFS to count nodes within a certain distance
3. `Two-Phase Calculation`:
    - First find the maximum reach in the second tree (edges2)
    - Then calculate reach for each node in the first tree (edges1)

**Algorithm Steps :**<br/>

1. `Graph Construction`:
    - Build adjacency lists for both trees (edges1 and edges2)
2. `Max Reach Calculation`:
    - For each node in edges2, perform BFS to find maximum nodes within k-1 distance
3. `Result Calculation`:
    - For each node in edges1, perform BFS to count nodes within k distance
    - Add this count to the precomputed maximum from edges2
4. `Return Result`: Vector containing combined counts for each node in edges1

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 + m^2)` - for tree (N nodes × BFS)
-   Space-Complexity: `O(n + m)` - depending on tree
