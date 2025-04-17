# 2467. Most Profitable Path in a Tree

This problem involved about, there is an undirected tree with n nodes labeled from 0 to n - 1, rooted at node 0. You are given a 2D integer array edges of length n - 1 where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

## Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/most-profitable-path-in-a-tree/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a tree represented by `edges`, where each edge connects two nodes.
    - Alice starts at node `0` and Bob starts at node `bob`.
    - Alice moves from node `0` to any leaf node, collecting profits from nodes along the way.
    - Bob moves from node `bob` to node `0`, and if Alice and Bob meet at the same node at the same time, Alice gets half the profit of that node.
    - The goal is to find the maximum profit Alice can achieve.

2. `Algorithm`:

    - Use `DFS` to find Bob's path from node `bob` to node `0` and record the time at which Bob reaches each node.
    - Use `BFS` to simulate Alice's traversal from node `0` to all leaf nodes, calculating the profit at each step while considering Bob's path.
    - If Alice and Bob reach the same node at the same time, Alice gets half the profit of that node.
    - If Alice reaches a node after Bob, she gets no profit from that node.
    - Track the maximum profit Alice can achieve.

3. `Steps`:
    - Build an adjacency list from the given edges.
    - Use DFS to find Bob's path and store the time at which Bob reaches each node in a hashmap (`bobPath`).
    - Use BFS to simulate Alice's traversal:
        - Start from node `0` with time `0` and initial profit `amount[0]`.
        - For each node, calculate the profit Alice gets based on Bob's path.
        - If Alice reaches a leaf node, update the maximum profit.
    - Return the maximum profit.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + n + n)` - Building adjacency list takes `O(n)`, Dfs track bob's path also takes `O(n)` nad BFS traversals also takes `o(n)`.
-   Space-Complexity: `O(n + n)` - adjacency list takes `o(n)` and bobPath also takes `O(n)`.
