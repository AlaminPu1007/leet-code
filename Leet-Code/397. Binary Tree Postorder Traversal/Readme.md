## 144. Binary Tree Preorder Traversal

This problem involved about, given the root of a binary tree, return the `preorder` traversal of its nodes' values.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-preorder-traversal/description/)

**Approach :**<br/>

1. Initialize an empty vector res to store the result.
2. Call the DFS method with the root of the binary tree and the res vector.
3. In the DFS method:
    - If the current node (root) is NULL, return.
    - Recursively call DFS on the left subtree.
    - Recursively call DFS on the right subtree.
    - Add the value of the current node to the res vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree. Each node is visited exactly once.
-   Time-Complexity: `O(h)` - where h is the height of the binary tree
