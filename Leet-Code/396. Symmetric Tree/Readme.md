## 101. Symmetric Tree

This problem involved about, given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/symmetric-tree/description/)

**Approach :**<br/>

1. Initialization:

    - The `isSymmetric` function checks if a binary tree is symmetric.
    - It returns false if the root is NULL.

2. DFS Recursive Function:

    - The `DFS` function is a recursive helper function that compares the left subtree with the right subtree.
    - If either the left or right node is NULL, it returns true only if both are NULL (base case).
    - If the values of the left and right nodes are different, it returns false.
    - Recursively, it checks the symmetry of the outer subtrees (left->left, right->right) and inner subtrees (left->right, right->left).

3. Symmetry Check:

    - The `isSymmetric` function calls `DFS` with the left and right subtrees of the root.
    - Returns the result of the `DFS` function.

4. Result:
    - Returns true if the binary tree is symmetric, otherwise false.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity:`O(h)`- where H is the height of the binary tree. The recursive call stack space is proportional to the height of the tree.
