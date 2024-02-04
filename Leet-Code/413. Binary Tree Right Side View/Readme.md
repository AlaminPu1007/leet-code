## 199. Binary Tree Right Side View

This problem involved about, given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-right-side-view/description/)

**Approach :**<br/>

1. Initialization:

    - Initialize an empty vector `res` to store the result.

2. Depth-First Search (DFS):

    - Implement a DFS function `DFS` to traverse the binary tree.
    - The function takes parameters: the current node `root`, the result vector `res`, and the current level `l`.
    - If the current node is NULL, return.
    - If the size of the result vector `res` is less than or equal to the current level `l`, push the value of the current node to the result vector. This ensures that only the rightmost node at each level is considered.
    - Recursively call DFS on the right child of the current node with an incremented level (`l + 1`).
    - Recursively call DFS on the left child of the current node with an incremented level (`l + 1`).

3. Result:
    - Return the vector `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where H is the height of the binary tree. In the worst case, when the tree is skewed, the space complexity is O(N).
