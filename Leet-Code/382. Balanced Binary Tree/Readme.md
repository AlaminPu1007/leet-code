## 110. Balanced Binary Tree

This problem involved about, given a binary tree, determine if it is height-balanced

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/balanced-binary-tree/description/)

**Approach :**<br/>

1. isBalanced Function:
    - Initiates the process by calling the BalancedTree method on the root of the tree.
    - Returns true if the result from BalancedTree is not equal to -1, indicating a balanced tree; otherwise, returns false.
2. BalancedTree Function:
    - Base case: If the current node is NULL, returns 0 (height of an empty subtree).
    - Recursively calculates the height of the left subtree (lh) using a call to BalancedTree(root->left).
    - Recursively calculates the height of the right subtree (rh) using a call to BalancedTree(root->right).
    - If either the left or right subtree is unbalanced (height is -1), returns -1 to indicate an unbalanced subtree.
    - Checks if the absolute difference between the heights of the left and right subtrees is greater than 1. If true, returns -1 to indicate an unbalanced subtree.
    - If the subtree is balanced, returns 1 + max(lh, rh) as the height of the current subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity is O(n), where n is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where h is the height of the binary tree.
