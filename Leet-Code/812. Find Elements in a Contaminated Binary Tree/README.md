# 1261. Find Elements in a Contaminated Binary Tree

This problem involved about, Given a binary tree with the following rules

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description)

**Approach :**<br/>

#### Recovery Process (DFS Traversal)

-   Start from the root (`0`).
-   Assign values to children using:
    1.  `Left child`: `2 * x + 1`
    2.  `Right child`: `2 * x + 2`
-   Store these values in an `unordered map` for `O(1)` lookup.

#### Finding a Value

-   Simply check if the value exists in the `hash map`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node is visited once
-   Space-Complexity: `O(n)` - We are using an extra hash-map.
