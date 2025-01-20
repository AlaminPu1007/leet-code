# 2458. Height of Binary Tree After Subtree Removal Queries

This problem involved about, you are given the root of a binary tree with n nodes. Each node is assigned a unique value from 1 to n. You are also given an array queries of size m.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/height-of-binary-tree-after-subtree-removal-queries/description/)

**Approach :**<br/>

1. `Depth-First Search (DFS)`:
    - Traverse the tree and calculate the height of each node.
    - During DFS traversal, also keep track of each node’s level.
2. `Track Level Heights`:
    - Maintain two arrays for each level: `firstMaxHeight` and `secondMaxHeight`, which store the maximum and second maximum heights of nodes at that level.
3. `Calculate Height without Subtree`:
    - For each query, calculate the height of the tree as if that node were removed by using the `firstMaxHeight` or `secondMaxHeight` of the node's level.

**Algorithm :**<br/>

1. `DFS Traversal`:
    - Traverse the tree to calculate the `height` of each node and store its level in `levels`.
    - Populate `firstMaxHeight` and `secondMaxHeight` arrays for each level during traversal.
2. `Query Processing`:
    - For each query node, check the maximum height of nodes at its level. Use either the first or second maximum height depending on whether the queried node contributes to the maximum height.
3. `Store Results`:
    - For each query, calculate the modified height and store it in the results.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + q)` - where `n` is the number of nodes and `q` is the number of queries.

-   Space-Complexity: `O(n)` - required for arrays to store height, levels, and max heights.
