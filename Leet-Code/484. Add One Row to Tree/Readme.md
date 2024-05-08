---
runme:
  id: 01HVJDEGPNYR0FPCXF3J0ZVNCP
  version: v3
---

## 623. Add One Row to Tree

This problem involved about, given the root of a binary tree and two integers val and depth, add a row of nodes with value val at the given depth depth.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/add-one-row-to-tree/description/)

**Approach :**<br/>

1. If the given depth `d` is 1, create a new root node with value `val` and set its left child to the original root. Return the new root.
2. Initialize a queue `q` for level-order traversal and a variable `d` to track the current depth.
3. Enqueue the root node to the queue.
4. Perform level-order traversal using the queue:
    - Increment the depth `d` at the beginning of each level.
    - For each node in the current level:
        - If the current depth `d` is equal to the target depth `depth`, insert new nodes with value `val` as left and right children of the current node.
        - Enqueue the left and right children of the current node if they exist.
5. After traversing the entire tree, return the modified root.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm performs a level-order traversal of the tree, visiting each node once, resulting in a time complexity of `O(n)`.

-   Space-Complexity: `O(n)` - In the worst case, the tree could be a complete binary tree, resulting in a space complexity of `O(n)`.