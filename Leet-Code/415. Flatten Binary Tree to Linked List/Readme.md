## 114. Flatten Binary Tree to Linked List

This problem involved about, given the root of a binary tree, flatten the tree into a "linked list": <br/>

-   The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
-   The "linked list" should be in the same order as a pre-order traversal of the binary tree.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/)

**Approach of DFS :**<br/>

-   The method takes a `TreeNode` pointer `root` as input.
-   Perform a depth-first search (DFS) in post-order fashion.
-   For each node, perform the following steps:
    -   Recursively flatten the right subtree.
    -   Recursively flatten the left subtree.
    -   Update the current node's right child to the previously visited node (`prv`).
    -   Set the left child of the current node to `NULL`.
    -   Update `prv` to the current node.
-   This process effectively flattens the binary tree into a linked list.

**Complexity Analysis of DFS :**<br/>

-   Time-Complexity: `O(n)` - The time complexity is `O(N)`, where N is the number of nodes in the binary tree.
-   Space-Complexity:`O(h)` - The space complexity is `O(H)`, where H is the height of the binary tree (recursion depth).

**Approach of stack :**<br/>

1. Initialize an empty stack `st`.
2. Push the root node onto the stack.
3. While the stack is not empty, perform the following steps:
    - Pop a node `node` from the stack.
    - If the right child of `node` exists, push it onto the stack.
    - If the left child of `node` exists, push it onto the stack.
    - If the stack is not empty, update the `right` pointer of `node` to the top of the stack.
    - Set the `left` pointer of `node` to `NULL`.
4. Repeat the above steps until the stack is empty.

**Complexity Analysis of stack :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree.
-   Space-Complexity:`O(h)` - where H is the height of the binary tree (maximum size of the stack).
