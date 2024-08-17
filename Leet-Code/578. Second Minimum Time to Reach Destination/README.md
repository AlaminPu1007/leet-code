# 2045. Second Minimum Time to Reach Destination

This problem involved about, A city is represented as a bi-directional connected graph with n vertices where each vertex is labeled from 1 to n (inclusive). The edges in the graph are represented as a 2D integer array edges, where each edges[i] = [ui, vi] denotes a bi-directional edge between vertex ui and vertex vi. Every vertex pair is connected by at most one edge, and no vertex has an edge to itself. The time taken to traverse any edge is time minutes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/second-minimum-time-to-reach-destination/description/)

**Approach :**<br/>

1. **Graph Representation**:

    - Represent the graph using an adjacency list for bidirectional edges.

2. **Breadth-First Search (BFS)**:

    - Use BFS to explore the shortest paths.
    - Use a queue to manage the BFS process.

3. **Tracking Visit Times**:

    - Use an unordered_map to keep track of visit times for each node to ensure we consider up to two distinct visit times per node.
    - This helps in identifying the second minimum time.

4. **Handling Traffic Light Changes**:

    - Adjust the current time based on traffic light intervals. If the current time lands in a red light period, adjust to the end of the red light period before proceeding.

5. **Finding the Second Minimum Path**:

    - Track the first time reaching the destination node.
    - Continue BFS until the second distinct time reaching the destination node is found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 * (E + N)) = O(E + N)` - where `E` is the number of edges and `N` is the number of nodes, as we process each edge a limited number of times.

-   Space-Complexity: `O(N)` - where `N` is the number of nodes, for storing adjacency lists and visit times.