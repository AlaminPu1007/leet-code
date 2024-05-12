## 834. Sum of Distances in Tree

This problem involved about, there is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.<br/>

You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sum-of-distances-in-tree/description)

**Approach :**<br/>

1. Initialize variables `N` as the total number of nodes, `count` as a vector to store the count of nodes in the subtree rooted at each node, and `result_base_node` to store the sum of distances from the root node to all other nodes in the tree.
2. Create an adjacency list `adj` to represent the tree structure.
3. Perform a DFS traversal (`DFSOfBase`) starting from the root node (0th node) to calculate the count of nodes in the subtree rooted at each node and the sum of distances from the root node to all other nodes in the tree.
4. In the DFS traversal (`DFSOfBase`):
    - Update `result_base_node` by adding the depth of the current node (`cur_depth`).
    - Recursively traverse the adjacency list of the current node to calculate the count of nodes in the subtree rooted at each node.
    - Update the `count` vector with the count of nodes in the subtree rooted at the current node.
5. Initialize the result vector `res` with the sum of distances from the root node to all other nodes in the tree (`result_base_node`).
6. Perform a second DFS traversal (`DFS`) starting from the root node (0th node) to calculate the sum of distances for each node in the tree.
7. In the DFS traversal (`DFS`):
    - For each adjacent node of the current node:
        - Calculate the sum of distances for the adjacent node using the formula:
            ```
            res[adj_node] = res[cur_node] - count[adj_node] + (N - count[adj_node])
            ```
    - Recursively traverse the adjacency list of the current node.
8. Return the result vector `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of the algorithm is` O(N)`, where N is the total number of nodes in the tree. This is because we perform two DFS traversals, each of which takes `O(N)` time.

-   Space-Complexity: `O(n)` - The space complexity is `O(N)` due to the space used by the adjacency list and the result vector.
