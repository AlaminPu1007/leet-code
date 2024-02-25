## 98. Validate Binary Search Tree

This problem involved about, given the root of a binary tree, determine if it is a valid binary search tree (BST).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/validate-binary-search-tree/description/)

**Approach :**<br/>

The `isValidBST` method checks whether a given binary tree is a valid Binary Search Tree (BST). It uses a Depth-First Search (DFS) approach to traverse the tree, validating each node against a range of allowed values.

-   Algorithm:

    1. Call the DFS method with the root node, setting the initial range as `(LONG_MIN, LONG_MAX)`.
    2. The DFS method checks if the current node's value is within the allowed range `(minValue, maxValue)`. If not, the tree is not a valid BST, and the method returns `false`.
    3. Recursively call the DFS method on the left subtree with the updated range `(minValue, root->val)` and on the right subtree with the updated range `(root->val, maxValue)`.
    4. If the DFS calls on both subtrees return `true`, the tree is a valid BST.

-   DFS Method (`DFS`):

    1. If the current node is NULL, return `true` (an empty tree is a valid BST).
    2. Check if the current node's value is within the allowed range `(minValue, maxValue)`. If not, return `false`.
    3. Recursively call the DFS method on the left subtree with the updated range `(minValue, root->val)` and on the right subtree with the updated range `(root->val, maxValue)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the given tree
-   Space-Complexity: `O(h)` - where `h` is the height of the tree, due to the recursive call stack.
