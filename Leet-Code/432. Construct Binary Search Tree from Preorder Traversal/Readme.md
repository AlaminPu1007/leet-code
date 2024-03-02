## 1008. Construct Binary Search Tree from Preorder Traversal

This problem involved about, given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/)

**Approach :**<br/>

1. Call the DFS method with the preorder traversal array (`arr`), index (`index`), and the initial bound as `INT_MAX`.
2. In the DFS method:
    - Check the base case: If the end of the array is reached or the current element is greater than the given bound, return NULL.
    - Create a new TreeNode with the current element from the array (`arr[index]`) and increment the index.
    - Recursively call the DFS method for the left subtree with the updated bound as the value of the current node.
    - Recursively call the DFS method for the right subtree with the original bound.

-   DFS Method (`DFS`):

1. If the end of the array is reached or the current element is greater than the given bound, return NULL.
2. Create a new TreeNode with the current element from the array.
3. Recursively call the DFS method for the left subtree with the updated bound as the value of the current node.
4. Recursively call the DFS method for the right subtree with the original bound.
5. Return the root of the constructed subtree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(3n) or O(n)` - where n is the number of elements in the input array.

-   Space-Complexity: `O(h)` - where h is the height of the constructed BST, due to the recursive call stack.
