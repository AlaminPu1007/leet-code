# 2872. Maximum Number of K-Divisible Components

This problem involved about, there is an undirected tree with n nodes labeled from 0 to n - 1. You are given the integer n and a 2D integer array edges of length n - 1, where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-k-divisible-components/description)

**Approach :**<br/>

1. `Subtree Sum Modulo`:

    - For each subtree rooted at a node, calculate the sum of the node values modulo `k`. If the sum is divisible by `k`, the subtree can form a `separate component`.

2. `Tree Representation`:

    - Since the input graph is connected, it can be treated as a tree.
    - Represent the tree using an adjacency list for efficient traversal.

3. `DFS for Subtree Calculation`:

    - Use Depth-First Search (DFS) to calculate the subtree sum starting from an arbitrary root node (e.g., node `0`).
    - Track the parent node during traversal to prevent visiting the same edge multiple times.

4. `Count K-Divisible Components`:
    - During DFS, if the subtree sum modulo `k` equals `0`, increase the count of divisible components.
    - Return the modulo sum to the parent for further calculations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - The algorithm involves creating an adjacency list from the edges, which takes `O(m)` time. The depth-first search (DFS) traversal visits each node and edge exactly once, resulting in a time complexity of `O(n + m)`. The operations within the DFS (such as summing values and checking divisibility) are constant time operations, so they do not affect the overall time complexity.

-   Space-Complexity: `O(n + m)` - The space complexity is determined by the storage used for the adjacency list, which requires `O(m)` space, and the recursion stack during the DFS, which can go up to `O(n)` in the worst case (for a skewed tree). Additionally, the values array and other variables consume `O(n)` space. Therefore, the total space complexity is `O(n + m)`.
