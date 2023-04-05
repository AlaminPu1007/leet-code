## 797. All Paths From Source to Target

[Visit Problem](https://leetcode.com/problems/all-paths-from-source-to-target/description/)

**Approach :**<br/>

-   We need an Dfs algorithm to traverse till last element
-   DFS(depth-first-search) will call it self until last node from starting node

The provided code represents an algorithm that finds all possible paths from node 0 to node N-1 in a given directed acyclic graph (DAG). The algorithm uses depth-first search (DFS) to traverse the graph and generate all possible paths.<br/><br/>

The algorithm works by starting at node 0 and traversing the adjacency list of that node. For each node in the adjacency list, the algorithm recursively calls the DFS method with the next node in the adjacency list. The algorithm continues this process until it reaches the target node N-1. Once the target node is reached, the algorithm adds the current path to a list of all possible paths.<br/>

EX: <br/>

        0 -> 1 -> 2
        | | |
        v v v
        3 -> 4 -> 5
        | |
        v v
        6

<br/>
List of adjacency list of node (node -> indicated each item index) -> [[1, 3], [2, 4], [5], [4], [5], [6], []]

**Complexity Analysis :**<br/>

-   Time-Complexity :`O(2^N * N)` // The time complexity of the algorithm is O(2^N _ N), where N is the number of nodes in the graph. This is because in the worst case scenario, each node in the graph can have edges leading to all other nodes, so the algorithm will have to generate and check all possible paths from the starting node to the target node. Each path can have at most N nodes, so the time complexity is O(2^N _ N).

-   Space-Complexity: `O(n * 2 ^ n)`, The space complexity of the algorithm is O(N _ 2^N), which is the space required to store all possible paths from the starting node to the target node. The maximum number of paths that can be generated is 2^N, and each path can have at most N nodes. Therefore, the space complexity is O(N _ 2^N).
