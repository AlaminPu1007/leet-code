## 530. Minimum Absolute Difference in BST

This problem involved about, given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/)

**Algorithm :**<br/>
1. Create a list of integers nodeValues to store the node values.
2. Perform the DFS traversal over the given binary search tree. We call dfs(root) where dfs is a recursive method that takes TreeNode node as a parameter. We perform the following in this method:
    - If node is null, return.
    - Add the current node's value, node.val, in the nodeValues list.
    - Recursively perform DFS from node.left.
    - Recursively perform DFS from node.right.
3. Sort the nodeValues list.
4. Create an integer variable minDifference and initialize it to infinity
5. Iterate over in-orderNodes starting from index 1, and for each element at index i, find the difference with the element at index i - 1 and update the variable minDifference accordingly.
6. Return minDifference

**Complexity Analysis :**<br/>
- Time-Complexity: `O(n * log(n))` -  We traverse once over each node of the BST using DFS traversal which takes`O(n)` time. We take `O(n⋅log⁡n)` time to sort a list of nnn elements
- Space complexity: `O(n)` - The DFS traversal is recursive and would take some space to store the stack calls. The maximum number of active stack calls at a time would be the tree's height, which in the worst case would be `O(n)` when the tree is a straight line.