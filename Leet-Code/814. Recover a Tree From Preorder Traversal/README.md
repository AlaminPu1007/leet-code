# 1028. Recover a Tree From Preorder Traversal

This problem involved about, we run a `pre-order` depth-first search (DFS) on the root of a binary tree.
At each node in this traversal, we output D dashes (where D is the depth of this node), then we output the value of this node. If the depth of a node is D, the depth of its immediate child is D + 1. The depth of the root node is 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description)

**Approach :**<br/>

1. `Extract depth`: Count the number of dashes (`-`) to determine the node's depth.
2. `Extract value`: Read the digits to get the node's value.
3. `Maintain hierarchy using a stack`:
    - `Pop` from the stack until its size matches the node’s depth.
    - `Attach` the node as the left or right child.
    - `Push` the node to the stack.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We traverse the string traversal exactly once while counting dashes and extracting node values. Each character is processed a constant number of times, contributing `O(n)`. The stack operations (push and pop) are performed at most once per node. Since the total number of nodes is at most `O(n)`, the stack operations contribute `O(n)`in total.

-   Space-Complexity: `O(n)` - The maximum depth of the tree determines the maximum size of the stack. In the worst case (a skewed tree), the depth can be `O(n)`, leading to an `O(n)` stack size.
