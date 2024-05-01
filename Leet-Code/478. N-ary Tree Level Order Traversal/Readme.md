## 429. N-ary Tree Level Order Traversal

This problem involved about, Given an n-ary tree, return the level order traversal of its nodes' values. <br/>

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/)

**Approach :**<br/>

1. Initialize an empty vector `res` to store the result.
2. If the root is null, return the empty result.
3. Create a queue `q` and enqueue the root node.
4. While the queue is not empty:
    - Get the size of the queue (`n`) to determine the number of nodes at the current level.
    - Initialize an empty vector `level` to store the values of nodes at the current level.
    - Iterate `n` times:
        - Dequeue a node from the front of the queue.
        - Add the value of the dequeued node to the `level` vector.
        - Enqueue all children of the dequeued node into the queue.
    - Push the `level` vector into the `res` vector.
5. Return the `res` vector containing the level order traversal.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of this algorithm is `O(N)`, where N is the number of nodes in the tree. This is because we visit each node exactly once.

-   Space-Complexity: `O(n)` - The space complexity of this algorithm is `O(N)`, where N is the number of nodes in the tree. This is because the queue can contain at most N nodes in the worst case (complete binary tree).
