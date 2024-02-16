## 450. Delete Node in a BST

This problem involved about, given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST. <br/>

Basically, the deletion can be divided into two stages: <br/>

-   Search for a node to remove.
-   If the node is found, delete the node.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/delete-node-in-a-bst/)

**Approach :**<br/>

**Algorithm:**

1. If the root is NULL, return NULL (empty tree).
2. If the key matches the value of the current root node, call the `helperMethod` to handle the deletion for this node.
3. Otherwise, iterate through the tree to find the node with the specified key:

    - If the key is less than the current node's value, move to the left subtree.
        - If the left child exists and has the specified key, call the `helperMethod` to handle the deletion for this node and break the loop.
        - Otherwise, continue moving to the left subtree.
    - If the key is greater than the current node's value, move to the right subtree.
        - If the right child exists and has the specified key, call the `helperMethod` to handle the deletion for this node and break the loop.
        - Otherwise, continue moving to the right subtree.

4. Return the modified tree.

**Helper Method (`helperMethod`):**

1. If the node has no right child, return its left child.
2. If the node has no left child, return its right child.
3. If the node has both left and right children:
    - Find the last right child of the left subtree using the `findLastRightChild` method.
    - Set the right child of the last right child to the right child of the current node.
    - Return the left child of the current node.

**Helper Method (`findLastRightChild`):**

1. If the node has no right child, return the node.
2. Recursively call `findLastRightChild` on the right child.

**Complexity Analysis :**<br/>

-   Time Complexity: `O(h)` - where h is the height of the BST.

-   Space-Complexity: `O(h)` - where h is the height of the tree, due to the recursive calls and stack space.
