## 124. Binary Tree Maximum Path Sum

This problem involved about, a path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root. <br/>

The path sum of a path is the sum of the node's values in the path.<br/>

Given the root of a binary tree, return the maximum path sum of any non-empty path.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-maximum-path-sum/description/)

**Approach :**<br/>

1. Call the DFS function with the root of the binary tree and the reference to maxSum.
2. Inside the DFS function:
    - Base case: If the current node is NULL, return 0.
    - Recursively calculate the maximum path sum of the left subtree (lh) by calling DFS on the left child. Use max(0, lh) to handle negative values.
    - Recursively calculate the maximum path sum of the right subtree (rh) by calling DFS on the right child. Use max(0, rh) to handle negative values.
    - Update maxSum with the maximum of the current maxSum and the sum of the current node, left subtree, and right subtree.
    - Return root->val + max(lh, rh), representing the maximum path sum that includes the current node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where h is the height of the binary tree.
