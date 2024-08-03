# 1110. Delete Nodes And Return Forest

This problem involved about, given the root of a binary tree, each node in the tree has a distinct value.<br/>
After deleting all nodes with a value in to_delete, we are left with a forest (a disjoint union of trees).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/delete-nodes-and-return-forest/description/)

**Approach :**<br/>

1. **Convert `to_delete` Array to Set**:

    - Converting the `to_delete` array to a set allows for `O(1)` time complexity when checking if a node needs to be deleted.

2. **Perform Post-Order Traversal (DFS)**:

    - Using a Depth First Search (DFS) approach, traverse the tree in post-order (visit left child, right child, then root).
    - This ensures that we handle deletion from the bottom up, making it easier to manage child nodes of deleted nodes.

3. **Handle Deletions**:
    - If a node is in the `to_delete` set, remove it and consider its children as new roots of separate trees in the forest.
    - If the root node itself is not in the `to_delete` set, add it to the forest.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm traverses each node of the tree exactly once.
-   Space-Complexity: `O(n)` - In the worst case, the recursion stack will hold all nodes if the tree is skewed and we are using an `unordered_set`.
