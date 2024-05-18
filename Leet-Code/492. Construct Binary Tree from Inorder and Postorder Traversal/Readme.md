## 106. Construct Binary Tree from Inorder and Postorder Traversal

Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/)

**Approach :**<br/>

1. Initialization:

    - The `buildTree` function takes two vectors of integers, `inorder` and `postorder`, representing the inorder and postorder traversals of a binary tree.
    - It constructs the binary tree using these traversals and returns the root of the tree.

2. Algorithm (`buildTree`):

    - Check if the sizes of the `inorder` and `postorder` vectors are equal. If not, return NULL.
    - Initialize a map `inMap` to store the indices of elements in the inorder traversal for efficient lookup.
    - Traverse the inorder vector and populate `inMap` with element indices.
    - Call the recursive helper function `createNewTree` to construct the binary tree using the following parameters:
        - `postorder` vector.
        - Starting and ending indices for the postorder traversal (`postStart` and `postEnd`).
        - `inorder` vector.
        - Starting and ending indices for the inorder traversal (`inStart` and `inEnd`).
        - `inMap` for efficient lookup of the root element's index in the inorder traversal.

3. Algorithm (`createNewTree`):

    - Check if the boundaries are valid (base case for recursion).
    - Create a new `TreeNode` with the value from the current `postorder` index (`postEnd`).
    - Find the index of the root element in the inorder traversal (`inRoot`).
    - Calculate the number of elements on the left side of the root (`numsLeft`).
    - Recursively call `createNewTree` for the left and right subtrees.
    - Return the constructed root.

4. Result (`buildTree`):

    - The function returns the root of the binary tree constructed from the given inorder and postorder traversals.

5. DFS Traversal (`DFS`):
    - The `DFS` function performs a Depth-First Search traversal of the binary tree.
    - It starts from the root and prints the values of nodes in preorder fashion.
    - Call this function to print the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(n)` - for the map and recursive stack.
