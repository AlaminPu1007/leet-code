# 1857. Largest Color Value in a Directed Graph

This problem involved about, there is a directed graph of n colored nodes and m edges. The nodes are numbered from 0 to n - 1.

You are given a string colors where `colors[i]` is a lowercase English letter representing the color of the ith node in this graph (0-indexed). You are also given a 2D array edges where `edges[j] = [aj, bj]` indicates that there is a directed edge from node aj to node bj.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/largest-color-value-in-a-directed-graph/description)

**Key Insights :**<br/>

1. `Cycle Detection`: The graph must be a DAG (no cycles) for valid paths
2. `Color Frequency Tracking`: Need to track maximum count of each color along paths
3. `DFS with Memoization`: Depth-first search with memoization of color counts
4. `Path Validation`: Must detect cycles during traversal

**Algorithm Steps :**<br/>

1. `Graph Construction`:

    - Build adjacency list from edges
    - Initialize color count matrix (node × color)

2. `DFS Traversal`:

    - Track visited nodes and current path
    - Return INT_MAX if cycle detected
    - Memoize color counts for each node

3. `Color Count Update`:

    - For each neighbor, update current node's color counts
    - Add 1 if color matches current node

4. `Result Calculation`:
    - Find maximum color count across all nodes
    - Return -1 if cycle detected (INT_MAX found)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - for standard DFS.
-   Space-Complexity: `O(n * m)` - for adjacency lists.
