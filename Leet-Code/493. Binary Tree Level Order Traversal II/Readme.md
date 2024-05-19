## 107. Binary Tree Level Order Traversal II

This problem involved about, given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/)

**Approach :**<br/>

1. Start with an empty result vector `res` and an empty queue `q`.
2. Push the root node into the queue if it exists.
3. While the queue is not empty:
    - Get the current size of the queue (`n`) which represents the number of nodes at the current level.
    - Create an empty vector `level` to store node values at the current level.
    - Iterate `n` times:
        - Pop the front node from the queue.
        - Push the value of the popped node into the `level` vector.
        - If the popped node has a left child, push it into the queue.
        - If the popped node has a right child, push it into the queue.
    - Push the `level` vector into the `res` vector.
4. Reverse the `res` vector to obtain the level order traversal from bottom to top.
5. Return the `res` vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n * log(n))` - In the worst case, each node of the binary tree is traversed once, so the time complexity is O(N), where N is the number of nodes in the tree. We are reverse the `ans` that has `O(n * log(n))`

-   Space-Complexity: `O(n)` - The space complexity is `O(N)`, where N is the number of nodes in the tree, as the maximum number of nodes that can be in the queue at any point is equal to the number of nodes at the maximum level of the binary tree.
