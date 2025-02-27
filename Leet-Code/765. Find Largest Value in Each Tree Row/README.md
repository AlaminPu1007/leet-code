# 515. Find Largest Value in Each Tree Row

This problem involved about, given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/)

**Approach :**<br/>

1. `Level-Order Traversal`:

    - To identify the largest value in each row, traverse the binary tree level by level.
    - Use a `queue` (BFS approach) to process nodes row by row.

2. `Tracking Maximum Value`:

    - For each level, iterate through all the nodes and track the maximum value in that row.
    - Store the maximum value in the result array.

3. `Empty Tree Check`:
    - If the tree is empty, return an empty result array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node in the tree is visited exactly once.
-   Space-Complexity: `O(n)` - Space for the queue, where `(n)` is the maximum number of nodes at any level of the tree (i.e., the width of the tree).
