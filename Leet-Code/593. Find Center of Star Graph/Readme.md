# 1791. Find Center of Star Graph

This problem involved about, there is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where there is one center node and exactly n - 1 edges that connect the center node with every other node.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-center-of-star-graph/description/)

**Approach :**<br/>

To find the center of a star graph, we can utilize the property that the center node is connected to all other nodes. This means the center node will appear in every edge of the graph.

**Algorithm :**<br/>

1. `Count Node Connections :` Use a hash map to count the number of times each node appears in the edges list.

2. `Identify Center Node :` The node that appears in all edges (i.e., exactly `n-1` times, where `n` is the number of nodes) is the center node of the star graph.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of edges. This is because we iterate through the edges twice: once to count the occurrences of each node and once to find the center node.

-   Space-Complexity: `O(n)` - for storing the node counts in the hash map.