## 105. Construct Binary Tree from Preorder and Inorder Traversal

This problem involved about, given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)

**Approach :**<br/>

1. Initialization:

    - The `buildTree` function takes two vectors of integers, `preorder` and `inorder`, representing the preorder and inorder traversals of a binary tree.
    - It constructs the binary tree using these traversals and returns the root of the tree.

2. Algorithm (`buildTree`):

    - Initialize a map `inMap` to store the indices of elements in the inorder traversal for efficient lookup.
    - Traverse the inorder vector and populate `inMap` with element indices.
    - Call the recursive helper function `createNewTree` to construct the binary tree using the following parameters:
        - `preorder` vector.
        - Starting and ending indices for the preorder traversal (`preStart` and `preEnd`).
        - `inorder` vector.
        - Starting and ending indices for the inorder traversal (`inStart` and `inEnd`).
        - `inMap` for efficient lookup of the root element's index in the inorder traversal.

3. Algorithm (`createNewTree`):

    - Check if the boundaries are valid (base case for recursion).
    - Create a new `TreeNode` with the value from the current `preorder` index (`preStart`).
    - Find the index of the root element in the inorder traversal (`inRoot`).
    - Calculate the number of elements on the left side of the root (`numsLeft`).
    - Recursively call `createNewTree` for the left and right subtrees.
    - Return the constructed root.

4. Result (`buildTree`):

    - The function returns the root of the binary tree constructed from the given preorder and inorder traversals.

5. DFS Traversal (`DFS`):
    - The `DFS` function performs a Depth-First Search traversal of the binary tree.
    - It starts from the root and prints the values of nodes in preorder fashion.
    - Call this function to print the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(n)` - for the map and recursive stack.
