# 2641. Cousins in Binary Tree II

This problem involved about, given the root of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/cousins-in-binary-tree-ii/description/)

**Approach :**<br/>

#### Two Pass BFS Approach

1. `First BFS (Level Sum Calculation)`:

    - Traverse the tree level by level using a queue, and compute the sum of node values at each level. Store these level sums in a `levelSum` array.

2. `Second BFS (Node Value Replacement)`:
    - Traverse the tree again, and for each node at a given level, replace its value with the difference between the level's sum and the sum of its sibling's values. This will effectively replace each node's value with the sum of its cousins.

### Key Points

1. `BFS Traversal`:

    - In the first BFS, we calculate the sum of node values at each level.
    - In the second BFS, we replace each node's value by the cousin's sum based on the calculated `levelSum`.

2. `Handling Cousin Calculation`:
    - During the second traversal, for each node, its value is updated as:
        ```
        node->val = levelSum[level] - sum of sibling's values
        ```

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the tree.
-   Space-Complexity: `O(n)` - where n is the number of nodes