## 94. Binary Tree Inorder Traversal

This problem involved about, given the root of a binary tree, return the inorder traversal of its nodes' values.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)

**Approach :**<br/>

1. Initialize an empty vector res to store the result.
2. Call the DFS method with the root of the binary tree and the res vector.
3. In the DFS method:

    - If the current node (root) is NULL, return.
    - Recursively call DFS on the left subtree.
    - Add the value of the current node to the res vector.
    - Recursively call DFS on the right subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we traversal tree exactly `n` times of node
-   Space-Complexity: `O(n) + o(h)` - for storing result in additional vector, and h is the height of the binary tree

**Approach of Morris traversal :**<br/>

-   The method takes a `TreeNode` pointer `root` as input.
-   Initialize an empty vector `res` to store the inorder traversal result.
-   Start from the root and traverse the tree using threaded nodes:
    -   If the current node's left child is `NULL`, add the current node's value to the result, and move to the right child.
    -   If the left child is not `NULL`, find the rightmost node in the left subtree.
        -   Connect this rightmost node with the current node to create a thread.
        -   Make a copy of the current node (`temp`) for future reference.
        -   Update the current node to its left child.
        -   Destroy the connection between the original current node and its left child.
-   Continue this process until all nodes are visited.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity is `O(N)`, where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(1)` - The space complexity is `O(1)` as we are using a constant amount of extra space.
