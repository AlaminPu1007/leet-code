## 113. Path Sum II

This problem involved about, given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/path-sum-ii/description/)

**Approach :**<br/>

1. Start by checking if the given tree `root` is empty. If it is, return an empty result vector since there are no paths in an empty tree.
2. Initialize a queue to perform level-order traversal (BFS) of the binary tree. Each element in the queue is a pair containing:
    - The current node.
    - The pair consisting of the total sum of the path from the root to the current node and the list of values along the path.
3. Push the root node into the queue with its value as the initial sum and a list containing only the root value.
4. While the queue is not empty, do the following:
    - Dequeue a node from the front of the queue.
    - If the dequeued node is a leaf node (i.e., it has no left or right child) and its total sum matches the target sum, add its path to the result vector.
    - If the dequeued node has a left child, create a copy of its path list, add the left child's value to the copy, update the total sum, and enqueue the left child along with the updated sum and path list.
    - If the dequeued node has a right child, create a copy of its path list, add the right child's value to the copy, update the total sum, and enqueue the right child along with the updated sum and path list.
5. Return the result vector containing all paths whose sum equals the target sum.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We perform a level-order traversal of the binary tree using a queue, visiting each node once.
-   Space-Complexity: `O(n)` - The queue used for level-order traversal, which can contain up to O(n)
