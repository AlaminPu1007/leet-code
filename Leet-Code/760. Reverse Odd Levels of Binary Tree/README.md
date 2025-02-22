# 2415. Reverse Odd Levels of Binary Tree

This problem involved about, given the root of a perfect binary tree, reverse the node values at each odd level of the tree.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/)

**Approach :**<br/>

1. `Breadth-First Search (BFS)`:

    - Perform a level-order traversal using a queue.
    - At each odd level, reverse the node values while keeping their positions unchanged.

2. `Reversing Odd Levels`:

    - Collect nodes of each level in a vector.
    - Reverse the values of the nodes in the vector if the level is odd.

3. `Perfect Binary Tree`:
    - Since the tree is perfect:
        - Each level is guaranteed to be fully populated.
        - This simplifies the traversal and reversal process.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node is visited once.
-   Space-Complexity: `O(n)` - The queue can store up to `n` nodes.
