## 257. Binary Tree Paths

This problem involved about, Given the root of a binary tree, return all root-to-leaf paths in any order.
A leaf is a node with no children.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-tree-paths/description/)

**Approach :**<br/>

1. Initialization:

    - The `binaryTreePaths` function returns a vector of strings representing all root-to-leaf paths in a binary tree.

2. DFS Recursive Function:

    - The `DFS` function is a recursive helper function that traverses the binary tree and constructs the paths.
    - It takes the current node `root`, a vector of strings `res` to store paths, and a string `s` representing the current path.
    - If the current node is NULL, the function returns.
    - Construct the current path by appending the value of the current node to the existing path string.
    - If the current node is a leaf node (both left and right are NULL), add the current path to the result vector.
    - Recursively call `DFS` for the left and right children of the current node.

3. Initial Call:

    - The `binaryTreePaths` function checks if the root is NULL. If so, it returns an empty vector with a single empty string.
    - Otherwise, it initializes an empty vector `res` and calls the `DFS` function with the root and empty string.

4. Result:
    - Returns the vector of strings containing all root-to-leaf paths in the binary tree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where H is the height of the binary tree. The recursive call stack space is proportional to the height of the tree.

**References:**<br/>

-   [Learn almost similar approach](https://takeuforward.org/data-structure/print-root-to-node-path-in-a-binary-tree/)
