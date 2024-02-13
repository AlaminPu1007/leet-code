## 236. Lowest Common Ancestor of a Binary Tree

This problem involved about, given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.<br/>

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/)

**Approach :**<br/>

1. Initialization:

    - The `lowestCommonAncestor` function returns the lowest common ancestor (LCA) of two nodes `p` and `q` in a binary tree.
    - Calls the `DFS` function with the root node and the two target nodes `p` and `q`.

2. DFS Recursive Function:

    - The `DFS` function is a recursive helper function that traverses the binary tree in a depth-first manner.
    - If the current node `root` is NULL, returns NULL.
    - If the current node is either `p` or `q`, returns the node itself, indicating the discovery of one of the target nodes.
    - Recursively calls `DFS` for the left and right children of the current node.
    - If both left and right subtrees return non-NULL pointers, the current node is the lowest common ancestor.
    - If one subtree returns a non-NULL pointer, it means either `p` or `q` is found in that subtree, and the non-NULL pointer is the result.
    - If both subtrees return NULL pointers, returns NULL.

3. Result:
    - The `lowestCommonAncestor` function returns the result obtained from the `DFS` function.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where H is the height of the binary tree. The recursive call stack space is proportional to the height of the tree.
