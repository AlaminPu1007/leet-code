## 700. Search in a Binary Search Tree

This problem involved about, you are given the root of a binary search tree (BST) and an integer val. <br/>

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/search-in-a-binary-search-tree/description/)

**Approach :**<br/>

The given code defines a class `Solution` with a method `searchBST` that searches for a given value `val` in a binary search tree (BST). The search is performed iteratively by traversing the tree based on the comparison of the target value with the current node's value.

1. Start with the root node.
2. While the current node is not NULL and its value is not equal to the target value (`val`):
    - If `val` is greater than the current node's value, move to the right subtree.
    - If `val` is less than the current node's value, move to the left subtree.
3. Return the current node when either the value is found or the tree is exhausted.

**Complexity Analysis :**<br/>

-   Time Complexity:

    1.  The time complexity of the search operation is O(h), where h is the height of the BST.
    2.  In the worst case, where the tree is skewed, the time complexity is `O(n)`, where `n` is the number of nodes in the tree.
    3.  In the average case, for a balanced BST, the time complexity is `O(log n)`.

-   Space-Complexity:`O(1)` - since the iterative search is performed without using any additional data structures.
