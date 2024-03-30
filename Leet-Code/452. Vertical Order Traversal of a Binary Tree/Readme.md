## 987. Vertical Order Traversal of a Binary Tree

This problem involved about, given the root of a binary tree, calculate the vertical order traversal of the binary tree. <br/>

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0). <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/)

**Approach :**<br/>

1. Initialize an empty vector `res` to store the result.
2. Use a map `Map` with key as the vertical position (`x`) and a nested map with key as the level (`y`) and value as a multiset of node values.
3. Utilize a queue `todo` to perform level-order traversal and maintain the vertical and level positions for each node.
4. Enqueue the root node along with its vertical and level positions (0, 0) into the queue.
5. While the queue is not empty:
    - Dequeue an item from the queue.
    - Get the current node, vertical position (`x`), and level position (`y`).
    - Insert the node's value into the map at the specified vertical and level positions.
    - If the left child exists, enqueue it with updated vertical (`x - 1`) and level (`y + 1`) positions.
    - If the right child exists, enqueue it with updated vertical (`x + 1`) and level (`y + 1`) positions.
6. Iterate over the map `Map`.
    - For each vertical position, iterate over the nested map to retrieve nodes at different levels.
    - Append the multiset of node values to a temporary list.
    - Push the list into the final result vector `res`.
7. Return the vector `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where N is the number of nodes in the binary tree
-   Space-Complexity: `O(n) + log(n)` - considering the worst case where all nodes fall into the same vertical position and level. The multiset in the nested map maintains a sorted order, resulting in a log N factor for each node.
