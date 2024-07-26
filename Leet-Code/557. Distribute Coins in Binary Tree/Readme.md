## 979. Distribute Coins in Binary Tree

This problem involved about, you are given the root of a binary tree with n nodes where each node in the tree has node.val coins. There are n coins in total throughout the whole tree.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/distribute-coins-in-binary-tree/description/)

**Approach :**<br/>

-   **Helper Method (`DFS(TreeNode* root)`):**
    1.  This method returns a pair containing the number of nodes (size) and the number of coins in the subtree rooted at the current node.
    2.  If the current node is `NULL`, return {0, 0}.
    3.  Recursively call `DFS` on the left and right children to get the number of nodes and coins in the left and right subtrees.
    4.  Calculate the total number of coins and the total number of nodes in the current subtree.
    5.  Update the result `res` by adding the absolute difference between the number of nodes and the number of coins in the current subtree.
    6.  Return a pair containing the total number of nodes and coins in the current subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The DFS traversal visits each node exactly once, resulting in linear time complexity.

-   Space-Complexity: `O(n)` - The space complexity is determined by the recursion stack, which can go as deep as the height of the tree. In the worst case, the height of the tree can be n, resulting in `O(n)` space complexity. For a balanced tree, the height is `O(log n)`.
