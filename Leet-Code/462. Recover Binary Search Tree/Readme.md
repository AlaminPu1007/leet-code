## 99. Recover Binary Search Tree

This problem involved about, you are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/recover-binary-search-tree/description/)

**Approach :**<br/>

1. Initialize pointers `first`, `last`, `middle`, and `prv`.
2. Perform in-order traversal of the BST, updating the pointers based on the identified anomalies.
3. If both `first` and `last` are not NULL, swap the values of the `first` and `last` nodes.
4. If `first` is not NULL but `last` is NULL, swap the values of the `first` and `middle` nodes.

# In-Order Traversal

1. Traverse the left subtree.
2. Process the current node and check for anomalies.
3. Update pointers accordingly.
4. Traverse the right subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the BST.
-   Space-Complexity: `O(h)` - where h is the height of the BST, due to the recursive call stack.
