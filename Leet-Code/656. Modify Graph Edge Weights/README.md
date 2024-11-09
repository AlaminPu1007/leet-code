# 2699. Modify Graph Edge Weights

This problem involved about, you are given an undirected weighted connected graph containing n nodes labeled from 0 to n - 1, and an integer array edges where edges[i] = [ai, bi, wi] indicates that there is an edge between nodes ai and bi with weight wi.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/modify-graph-edge-weights/description)

**Approach :**<br/>

1. `Adjacency List Creation`:

    - The graph is represented using an adjacency list. The adjacency list is initialized for each node using the edges provided. If the edge weight is not `-1`, it is added to the adjacency list.

2. `Dijkstra's Algorithm`:

    - Dijkstra's algorithm is employed to calculate the minimum distance from the source node to all other nodes. It uses a priority queue (min-heap) to always expand the least-cost node first.

3. `Edge Modification`:

    - Edges with weight `-1` are modified as follows:
        - If the current shortest distance already equals the `target`, set the edge weight to a large value (close to infinity) to ensure the path remains unchanged.
        - If the current shortest distance is less than the `target`, set the edge weight to `1` initially and adjust to match the `target` exactly.

4. `Recalculating Shortest Paths`:
    - After modifying an edge, the algorithm recalculates the shortest path. If the modified graph achieves the `target` distance, the modification is successful.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E * (V + E) * log(V))` - Dijkstra's algorithm operates with a time complexity of `O((V + E) * log(V))` when using a priority queue (min-heap). This is because each vertex and edge is processed at most once, and each priority queue operation (insertion and extraction) takes `O(log(V))` time.
-   Space-Complexity: `O(V+E)` - The adjacency list representation of the graph requires `O(V+E)` space. Each vertex has a list of its adjacent vertices and their corresponding edge weights.
