# 1530. Number of Good Leaf Nodes Pairs

This problem involved about, you are given the root of a binary tree and an integer distance. A pair of two different leaf nodes of a binary tree is said to be good if the length of the shortest path between them is less than or equal to distance.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/description)

### Approach using BFS (Convert tree to adjacency list)

**Approach :**<br/>

1. **Create Adjacency List**:

    - Use a DFS (pre-order traversal) to create an adjacency list representing the binary tree as an undirected graph.
    - Also, collect all leaf nodes during this traversal.

2. **Breadth-First Search (BFS)**:

    - For each leaf node, perform a BFS to find other leaf nodes within the given distance.
    - Count valid pairs during this traversal.

3. **Count Good Pairs**:

    - Use a BFS approach to traverse the graph level-by-level up to the given distance.
    - Count pairs of leaf nodes encountered during this traversal.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - In the worst case, each leaf node may be compared with every other leaf node using BFS, leading to `O(n)` BFS traversals, each taking `O(n)` time.

-   Time-Complexity: `O(n)` - The space complexity is dominated by the space required for the adjacency list and the BFS queue. Both can grow up to `O(n)` in size.

<br/> 
<br/>

### Approach using DFS (Post order traversal technique)

**Approach :**<br/>

1. **Post-Order Traversal Using DFS**:

    - Perform a Depth-First Search (DFS) traversal of the tree in post-order (left, right, root).
    - At each node, calculate the distances to all leaf nodes in its subtree.
    - Combine the results from the left and right subtrees to find good pairs of leaf nodes.

2. **Count Valid Pairs**:
    - For each leaf node pair from the left and right subtrees, check if their combined distance is less than or equal to `distance`.
    - Count such valid pairs.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3)` - Recursion + calculate distance will take `O(n ^ 3)` time complexity.

-   Time-Complexity: `O(n)` - The space complexity is dominated by the recursion stack and the distance vectors stored for each node. Both can grow up to `O(n)` in size.
