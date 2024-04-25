## 1038. Binary Search Tree to Greater Sum Tree

This problem involved about, Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/)

**Approach :**<br/>

1. Implement a Depth-First Search (DFS) function to traverse the tree in reverse order (right, root, left).
2. During the DFS traversal, maintain a running sum of node values encountered so far.
3. Update the current node's value with the sum and update the sum accordingly.
4. Recursively traverse the right subtree, then the root, and finally the left subtree.
5. Return the modified root after the traversal.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` - The time complexity is linear with respect to the number of nodes in the tree.

-   Space-Complexity:`O(h)` - Height of the binary search tree.
