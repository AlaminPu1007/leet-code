## 173. Binary Search Tree Iterator

This problem involved about, given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/)

**Approach :**<br/>

# BSTIterator class

1. **`next()` Method:**

    - Returns the next element in the BST based on the specified mode.
    - Pops the top element from the stack, which is the next element according to the specified mode.
    - Calls `pushLeftElement` to push all leftmost elements of the corresponding subtree onto the stack.

2. **`hasNext()` Method:**

    - Returns a boolean indicating whether there are more elements to iterate through (i.e., the stack is not empty).

3. **`pushLeftElement(TreeNode *node)` Method:**
    - Pushes all leftmost elements of the given subtree onto the stack.
    - The direction of traversal is determined by the boolean flag `isReverse`.

# Solution class

1. Initialize two BSTIterators (`l` and `r`) with different traversal modes: "before" (`l`, left subtree) and "next" (`r`, right subtree).
2. Get the first values from both iterators (`i` and `j`).
3. While `i` is less than `j`:
    - Calculate the total sum of the current elements (`i + j`).
    - If the total is equal to the target (`k`), return true.
    - If the total is less than `k`, update `i` by getting the next element from the "before" iterator (`l`).
    - If the total is greater than `k`, update `j` by getting the next element from the "next" iterator (`r`).
4. If no pair is found, return false.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`

    1. The time complexity for the `findTarget` method is O(n), where n is the number of nodes in the BST.
    2. The `pushLeftElement` method in the `BSTIterator` class contributes to the overall time complexity.

-   Space-Complexity: `O(h)` - The space complexity is O(h) due to the stack in the `BSTIterator`, where h is the height of the BST.
