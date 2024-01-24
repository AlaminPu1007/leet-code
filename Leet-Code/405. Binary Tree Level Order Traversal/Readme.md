## 102. Binary Tree Level Order Traversal

This problem involved about, given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)

**Approach :**<br/>

1. Initialize an empty vector of vectors res to store the result.
2. If the root is NULL, return the empty result vector.
3. Create a queue q and enqueue the root node.
4. While the queue is not empty:
    - Get the size of the current level (size) from the queue.
    - Initialize an empty vector ans to store the values of nodes at the current level.
    - Iterate over the nodes at the current level:
        1. Dequeue a node from the front of the queue.
        2. Add the value of the node to the ans vector.
        3. Enqueue the left child if it exists.
        4. Enqueue the right child if it exists.
    - Push the ans vector to the res vector.
5. Return the res vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree. Each node is visited exactly once.

-   Space-Complexity: `O(n)` - where n is the maximum width (number of nodes at the same level) of the binary tree. In the worst case, the width is at its maximum, which is 2^(h-1) for a complete binary tree of height h. In the average case, the width is much smaller, and the space complexity is dominated by the queue.
