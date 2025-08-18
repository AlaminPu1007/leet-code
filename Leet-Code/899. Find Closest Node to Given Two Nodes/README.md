# 2359. Find Closest Node to Given Two Nodes

This problem involved about, you are given a directed graph of n nodes numbered from 0 to n - 1, where each node has at most one outgoing edge.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-closest-node-to-given-two-nodes/description)

**Key Insights :**<br/>

1. `Graph Traversal`: Need to explore all reachable nodes from both starting nodes
2. `Distance Tracking`: Maintain distances from both nodes to all reachable nodes
3. `Optimal Node Selection`: Find the node with minimum maximum distance from both nodes

**Algorithm Steps :**<br/>

1. `Graph Construction`:

    - Create adjacency list from edges array
    - Handle -1 values (no outgoing edge)

2. `BFS from Both Nodes`:

    - Perform BFS from node1 and node2 separately
    - Record distances to all reachable nodes for each

3. `Result Calculation`:
    - Find common nodes reachable from both
    - Select node with smallest maximum distance
    - Return -1 if no common node exists

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is number of nodes
-   Space-Complexity: `O(n)` - for adjacency and map.
