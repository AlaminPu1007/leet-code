## 543. Diameter of Binary Tree

This problem involved about, given the root of a binary tree, return the length of the diameter of the tree.<br/>

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.<br/>

The length of a path between two nodes is represented by the number of edges between them.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/diameter-of-binary-tree/description/)

**Approach :**<br/>

1. Call the DFS function with the root of the binary tree and the reference to maxNum.
2. Inside the DFS function:
    - Base case: If the current node is NULL, return 0.
    - Recursively calculate the height of the left subtree (lh) by calling DFS on the left child.
    - Recursively calculate the height of the right subtree (rh) by calling DFS on the right child.
    - Update maxNum with the maximum of the current maxNum and the sum of left and right subtree heights.
    - Return 1 + max(lh, rh), representing the height of the current subtree.
3. Return the final value of maxNum as the maximum diameter of the binary tree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where h is the height of the binary tree.
