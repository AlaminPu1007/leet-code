# 1514. Path with Maximum Probability

This problem involved about, you are given an undirected weighted graph of n nodes (0-indexed), represented by an edge list where `edges[i] = [a, b]` is an undirected edge connecting the nodes a and b with a probability of success of traversing that edge `succProb[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/path-with-maximum-probability/description/)

**Approach :**<br/>

1. **Graph Representation**:

    - Represent the graph using an adjacency list, where each edge is associated with a success probability.

2. **Dijkstra-like Algorithm**:

    - Use a priority queue to implement a modified Dijkstra algorithm to find the path with the maximum probability.
    - Instead of minimizing the distance, maximize the probability.

3. **Probability Tracking**:

    - Maintain a distance (probability) vector to track the maximum probability to reach each node.
    - Initialize the start node probability to 1 (100%).

4. **Priority Queue**:

    - Use a max-heap (priority queue) to process nodes based on the highest probability first.
    - For each node, update the probability of reaching its neighbors if a higher probability path is found.

5. **Early Termination**:

    - If the end node is reached, return the probability immediately to avoid unnecessary computations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E * log(V))` - where `E` is the number of edges and `V` is the number of nodes, due to the priority queue operations.

-   Time-Complexity: `O(V + E)`, for storing the adjacency list and the priority queue.