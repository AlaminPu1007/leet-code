## 1325. Delete Leaves With a Given Value

This problem involved about, given a binary tree root and an integer target, delete all the leaf nodes with value target.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/delete-leaves-with-a-given-value/description/)

**Approach :**<br/>

    -   If the root is `NULL`, return `NULL`.
    -   Recursively visit the left subtree and update the left child.
    -   Recursively visit the right subtree and update the right child.
    -   Check if the current node is a leaf node and if its value matches the target value.
        -   If both conditions are true, return `NULL` to remove this leaf node.
    -   If the current node is not a leaf node with the target value, return the current node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node is visited once during the traversal, resulting in a linear time complexity.

-   Space-Complexity: `O(h)` - The space complexity is determined by the recursion stack, which in the worst case (for a skewed tree) can be equal to the height of the tree, h.
