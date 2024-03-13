## 173. Binary Search Tree Iterator

This problem involved about, implement the BSTIterator class that represents an iterator over the in-order traversal of a binary search tree (BST):

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/binary-search-tree-iterator/description/)

**Approach :**<br/>

1. **`next()` Method:**

    - Returns the next element in the BST in ascending order.
    - Pops the top element from the stack, which is the next smallest element.
    - Calls `pushLeftElement` to push all leftmost elements of the right subtree of the popped element onto the stack.

2. **`hasNext()` Method:**

    - Returns a boolean indicating whether there are more elements to iterate through (i.e., the stack is not empty).

3. **`pushLeftElement(TreeNode *node)` Method:**
    - Pushes all leftmost elements of the given subtree onto the stack.
    - Achieves this by traversing as left as possible in the given subtree and pushing each encountered node onto the stack.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(h)`

    1.  The time complexity for both `next` and `hasNext` methods is `O(1)` on average.
    2.  The `pushLeftElement` method has a time complexity of `O(h)`, where h is the height of the BST.

-   Space-Complexity: `O(h)` - The space complexity is `O(h)` due to the stack, where h is the height of the BST.
