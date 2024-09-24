# 1367. Linked List in Binary Tree

This problem involved about, given a binary tree root and a linked list with head as the first node.

Return True if all the elements in the linked list starting from the head correspond to some downward path connected in the binary tree otherwise return False.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/linked-list-in-binary-tree/description)

**Approach :**<br/>

#### Step 1: Recursive Traversal of the Binary Tree

-   The function starts at the root of the binary tree. For each node, it checks whether the current path matches the linked list starting from the current tree node using a helper function `isValidPath`.
-   If the current path does not match, it recursively checks the left and right subtrees for the linked list.

#### Step 2: Check for Valid Path Match

-   The helper function `isValidPath` recursively compares the values of the tree nodes and linked list nodes.
    -   If the values match, the function continues checking the left and right subtrees for the next node in the list.
    -   If the values don't match or one of the structures ends (i.e., the list ends or the tree reaches a null node), the function returns false.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - In the worst case, we might need to check every node in the tree as a potential starting point for the linked list. For each node, we might need to traverse up to m nodes in the linked list.
-   Space-Complexity: `O(n + m)` - The space is used by the recursive call stack. In the worst case (skewed tree), the depth of the recursion could be `n`. Each recursive call also needs to keep track of the current position in the linked list, which at most is `m`.
