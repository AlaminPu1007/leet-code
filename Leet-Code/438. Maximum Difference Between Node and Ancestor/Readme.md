## 1026. Maximum Difference Between Node and Ancestor

This problem involved about, given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/)

**Approach :**<br/>

1. Initialization:

    - The `maxAncestorDiff` function takes a binary tree node `root`.
    - It calculates the maximum absolute difference between any ancestor and the current node in the binary tree.

2. Algorithm:

    - Start with the root of the binary tree.
    - Utilize a recursive depth-first search (DFS) approach to traverse the tree.
    - Keep track of the maximum and minimum values encountered on the path from the root to the current node.
    - At each node, update the maximum and minimum values.
    - Calculate the absolute difference between the maximum and minimum values and update the result (`ans`) if needed.
    - Continue the DFS traversal for the left and right subtrees.

3. Result:
    - The function returns the maximum absolute difference between any ancestor and the current node in the binary tree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree. Each node is processed once.
-   Space-Complexity: `O(h)` - where H is the height of the binary tree. The space is used for the recursive call stack during DFS traversal.
