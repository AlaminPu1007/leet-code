# 2471. Minimum Number of Operations to Sort a Binary Tree by Level

This problem involved about, you are given the root of a binary tree with unique values.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/description/)

**Approach :**<br/>

1. `Breadth-First Search (BFS)`:

    - Use a queue to traverse the binary tree level by level.
    - For each level, collect the node values into a list `lists`.

2. `Sorting and Mapping`:

    - Create a sorted copy `sortedLists` of the values at the current level.
    - Use a hashmap `Map` to store the index of each value in the original list for quick lookups during swaps.

3. `Count Minimum Swaps`:

    - Compare the `lists` and `sortedLists`:
        - If a value in `lists` is not in its correct position as per `sortedLists`, swap it with the correct value using the indices stored in `Map`.
        - Update the hashmap to reflect the new positions after each swap.
        - Increment the swap counter for each operation.

4. `Repeat for All Levels`:

    - Continue this process for all levels in the binary tree.

5. `Return Result`:
    - The total number of swaps across all levels is the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - The BFS traversal visits each node exactly once, contributing `O(n)`. At each level, we perform sorting of the level values array which costs `O(n * log(n))` where `n` is the width of that level.
-   Space-Complexity: `O(n)` - The queue used for BFS will store at most `n` nodes at any time.
