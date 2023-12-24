## 104. Maximum Depth of Binary Tree

This problem involved about, given the root of a binary tree, return its maximum depth. <br/>
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)

**Approach :**<br/>

1. The maxDepth function uses a recursive approach to calculate the maximum depth of a binary tree.
2. It starts from the root and recursively calculates the height of the left and right subtrees.
3. The maximum depth is the maximum of the heights of the left and right subtrees plus 1 for the current node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - The space complexity is O(h), where h is the height of the binary tree.
