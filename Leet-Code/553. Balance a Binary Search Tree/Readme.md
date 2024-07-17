# 1382. Balance a Binary Search Tree

This problem involved about, given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/balance-a-binary-search-tree/description/)

**Approach :**<br/>

1. `In-Order Traversal :` Perform an in-order traversal of the given BST to get the nodes' values in a sorted order.
2. `Construct Balanced BST :` Use the sorted values to construct a balanced BST by recursively selecting the middle element as the root.

**Algorithm :**<br/>

1. Define a function `dfsToGetSortedData` to perform an in-order traversal of the BST and store the node values in a sorted order.
2. Define a function `getBalancedBST` to construct a balanced BST from the sorted node values.
3. In the `balanceBST` function:
    - Initialize an empty vector to store the sorted node values.
    - Perform an in-order traversal of the BST using `dfsToGetSortedData` to fill the vector with sorted values.
    - Construct and return the balanced BST using `getBalancedBST`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the BST. This is because both the in-order traversal and the construction of the balanced BST take linear time.

-   Space-Complexity: `O(n)` - for storing the node values in a vector and the recursion stack during the construction of the balanced BST.