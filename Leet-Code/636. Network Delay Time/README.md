# 743. Network Delay Time

This problem involved about, You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges `times[i] = (ui, vi, wi)`, where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/network-delay-time/description/)

**Approach :**<br/>

1. **Graph Representation**:

    - Use an adjacency list to represent the directed edges and their travel times.

2. **Dijkstra's Algorithm**:

    - Use a priority queue to implement Dijkstra's algorithm for finding the shortest path.
    - Initialize the distance vector with infinity, except for the starting node `k` which is initialized to 0.

3. **Priority Queue**:

    - Use a min-heap (priority queue) to process nodes based on the shortest accumulated time.
    - For each node, update the travel time to its neighbors if a shorter path is found.

4. **Distance Calculation**:

-   After processing all nodes, determine the maximum time from the distance vector. If the maximum time is infinity, it means some nodes are unreachable.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E * log(V))` - where `E` is the number of edges and `V` is the number of nodes, due to the priority queue operations.

-   Space-Complexity: `O(V + E)` - for storing the adjacency list and the priority queue.