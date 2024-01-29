## 513. Find Bottom Left Tree Value

This problem involved about, gGiven the root of a binary tree, return the leftmost value in the last row of the tree.

# Problem description

For better problem description, please visit [GeekForGeeks Pages](https://leetcode.com/problems/find-bottom-left-tree-value/description/)

**Approach :**<br/>

1. Initialization:

    - Initialize a variable `res` to store the result. Set it to 0 initially.

2. Breadth-First Search (BFS):

    - Use a queue `q` to perform level-order traversal of the binary tree.
    - Enqueue the root node into the queue.

3. Level-Order Traversal:

    - While the queue is not empty:
        - Dequeue a node from the front of the queue.
        - If the node has a right child, enqueue the right child.
        - If the node has a left child, enqueue the left child.
        - Update the result `res` with the value of the dequeued node. This ensures that the leftmost value at the bottom level is stored in `res`.

4. Result:
    - Return the value stored in `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the no of nodes of given tree
-   Space-Complexity: `O(h)` - where h is the height of the tree
