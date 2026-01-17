# 1339. Maximum Product of Splitted Binary Tree

This problem involved about, given the root of a binary tree, split the binary tree into two subtrees by removing one edge such that the product of the sums of the subtrees is maximized.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/description/)

**Approach :**<br/>

If you remove an edge, the tree is split into:

-   A subtree rooted at some node
-   The remaining part of the tree

If:

-   `total_sum` = sum of all nodes in the tree
-   `subtree_sum` = sum of a subtree

Then the product formed by cutting above this subtree is:

`(subtree_sum) * (total_sum - subtree_sum)`

To maximize the product, we must consider `every subtree sum`.

**Algorithm :**<br/>

-   Perform a `post-order traversal`.
-   For each node, update its value to store the `sum of its entire subtree`.
-   This also gives us the `total_sum` of the tree.

-   Traverse the tree again (using BFS).
-   For each node:

    -   Consider the product:
        ```
        (total_sum - node->val) * node->val
        ```
    -   Update the maximum product found.

-   Return the maximum product modulo `1e9 + 7`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Compute the maximum product. Compute subtree sums.
-   Space-Complexity: `O(n)` - Queue used for BFS traversal. Recursion stack during DFS for subtree sum calculation.
