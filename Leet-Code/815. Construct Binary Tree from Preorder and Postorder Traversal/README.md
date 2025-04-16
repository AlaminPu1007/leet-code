# 889. Construct Binary Tree from Preorder and Postorder Traversal

This problem involved about, given two integer arrays, `preorder` and `postorder` where pre order is the `preorder` traversal of a binary tree of distinct values and `postorder` is the `postorder` traversal of the same tree, reconstruct and return the binary tree.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/description/)

**Approach :**<br/>

1. `Hash Map for Quick Lookup`

    - Store the indices of values in `postorder` using an `unordered_map` (`postMap`) for quick access.

2. `Recursive Tree Construction`

    - The first element in `preorder` is always the `root`.
    - The second element in `preorder` represents the `left child` of the root.
    - Find the left child's index in `postorder` to determine the `left subtree size`.
    - Recursively construct the `left and right subtrees`.

3. `Base Case`
    - If there are no elements left, return `NULL`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node is processed once. Since each recursive call divides the problem into smaller `subproblems`, the complexity is `O(n)`.
-   Space-Complexity: `O(n + n)` - recursive stack space in the worst case (skewed tree). For the hash map (`postMap`)
