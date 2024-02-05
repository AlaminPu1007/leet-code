## 230. Kth Smallest Element in a BST

This problem involved about, given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/)

**Approach :**<br/>

**Algorithm:**

1. If the root is NULL, return -1 (indicating an empty tree).
2. Initialize the answer (`ans`) to -1.
3. Call the DFS method to perform an in-order traversal of the BST and find the kth smallest element.
4. Return the value of the kth smallest element.

**DFS Method (`DFS`):**

1. If the current node is NULL, return.
2. Recursively call `DFS` on the left child.
3. Increment the `counter` by 1.
4. If the `counter` is equal to `k`, set the `ans` to the value of the current node and return.
5. Recursively call `DFS` on the right child.

**Complexity Analysis :**<br/>

-   Time Complexity:

    1.  The time complexity is O(n), where n is the number of nodes in the tree.
    2.  Each node is visited once during the in-order traversal.

-   Space-Complexity: `O(h)` - where h is the height of the tree, due to the recursive call stack.
