## 94. Binary Tree Inorder Traversal

This problem involved about, given the root of a binary tree, return the inorder traversal of its nodes' values.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)

**Approach :**<br/>

1. Initialize an empty vector res to store the result.
2. Call the DFS method with the root of the binary tree and the res vector.
3. In the DFS method:
    - If the current node (root) is NULL, return.
    - Recursively call DFS on the left subtree.
    - Add the value of the current node to the res vector.
    - Recursively call DFS on the right subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we traversal tree exactly `n` times of node
-   Space-Complexity: `O(n) + o(h)` - for storing result in additional vector, and h is the height of the binary tree
