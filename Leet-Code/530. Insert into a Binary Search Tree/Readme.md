## 701. Insert into a Binary Search Tree

This problem involved about, You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/insert-into-a-binary-search-tree/description/)

**Approach :**<br/>

1. If the root is NULL, create a new node with the given value and return it.
2. Initialize a pointer `head` to the root.
3. While true:
    - If the value to be inserted is greater than or equal to the current node's value:
        - If the right child exists, move to the right child.
        - If the right child is NULL, insert the new node with the given value as the right child and break the loop.
    - If the value to be inserted is less than the current node's value:
        - If the left child exists, move to the left child.
        - If the left child is NULL, insert the new node with the given value as the left child and break the loop.
4. Return the `head` of the tree.

**Complexity Analysis :**<br/>

-   Time Complexity:

    1.  The time complexity of the search operation is `O(h)`, where h is the height of the BST.
    2.  In the worst case, where the tree is skewed, the time complexity is `O(n)`, where n is the number of nodes in the tree.
    3.  In the average case, for a balanced BST, the time complexity is `O(log n)`.

-   Space-Complexity: `O(h)` - where h is the height of the BST, due to the recursive call stack.
