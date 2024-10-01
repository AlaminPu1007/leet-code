# 2192. All Ancestors of a Node in a Directed Acyclic Graph

This problem involved about, you are given a positive integer n representing the number of nodes of a Directed Acyclic Graph (DAG). The nodes are numbered from 0 to n - 1 (inclusive).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/description/)

**Approach :**<br/>

1. `Reverse the Graph :`

    - Reverse the direction of each edge in the graph to make it easier to find ancestors. This way, for each node `v`, the adjacency list will contain all nodes `u` such that there is an edge from `u` to `v`.

2. `Depth-First Search (DFS) :`

    - Use DFS to traverse the graph and find all ancestors of each node. Use a set to keep track of visited nodes to avoid cycles and redundant processing.

3. `Collect Results :`
    - For each node, collect all ancestors found during the DFS and store them in the result list.

**Algorithm :**<br/>

1. `Initialization :`

    - Initialize an adjacency list `adjList` of size `n` to store the reversed graph.
    - Initialize a result vector `ancestorsList` of size `n` to store the list of ancestors for each node.

2. `Reverse the Graph :`

    - Iterate over the `edges` to reverse the direction of each edge and update the adjacency list.

3. `Find Ancestors for Each Node :`

    - For each node from `0` to `n-1`, perform a DFS to find all ancestors:
        - Initialize a set `vis` to keep track of visited nodes during the DFS.
        - Call the DFS helper function `findAllAncestors` to find all ancestors of the current node.
        - Collect all nodes from `vis` (excluding the current node itself) and add them to the result list for the current node.

4. `DFS Helper Function :`

    - The `findAllAncestors` function performs a DFS starting from a given node, marking nodes as visited and recursively visiting adjacent nodes.

5. `Return Result :`
    - Return the `ancestorsList` containing the list of ancestors for each node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 + (n + m))` - Initializing and populating the adjacency list requires` O(n+m)` time. The algorithm calls the the DFS method a total of n times. The depth-first search has a worst-case time complexity of` O(n+m)`. Thus, finding the ancestors take a total of `O(n^2 + (n + m))`.

-   Time-Complexity: `O(n + m)` - he adjacency list takes` O(n + m)` space, while the ancestors list and the visited set each require `O(n)` space. The recursion call stack can go as deep as `O(n)` in the worst case. Thus, the total space complexity of the algorithm is `O(n + m)` + `3 * O(n)`, which simplifies to `O(n + m)`.
