## 103. Binary Tree Zigzag Level Order Traversal

Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/)

**Approach :**<br/>

1. Check if the root is NULL. If true, return an empty vector.
2. Breadth-First Search (BFS):
    - Initialize an empty queue q and enqueue the root node.
    - Initialize a boolean variable isLeftToRight to determine the order of elements in each level.
3. Level Order Traversal:
    - While the queue is not empty:
        1. Obtain the size of the current level n.
        2. Initialize an empty vector row to store the elements of the current level.
        3. For each node in the current level:
            - Dequeue a node from the front of the queue.
            - Determine the position to fill the node value based on the zigzag order (isLeftToRight).
            - Push the node value to the appropriate position in the row vector.
            - Enqueue the left and right children of the node if they exist.
        4. Add the row vector to the result vector.
        5. Toggle the value of isLeftToRight for the next level.
4. Return the final result vector containing the zigzag level order traversal.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree.
    Each node is visited once during the level-order traversal
-   Space-Complexity: `O(w)` - where w is the maximum width of the binary tree (width is the maximum number of nodes at any level).
