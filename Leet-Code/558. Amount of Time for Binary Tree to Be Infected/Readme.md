## 2385. Amount of Time for Binary Tree to Be Infected

This problem involved about, you are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/description)

**Approach :**<br/>

### Amount of Time

1. Initialization:

    - The `amountOfTime` function takes a binary tree node `root` and an integer `start`.
    - It calculates the amount of time required to traverse the tree starting from the given node.

2. Graph Representation:

    - Convert the given binary tree into a directed graph.
    - Utilize an adjacency list (`adj`) to represent the graph.

3. Algorithm:

    - Create an empty hash map (`adj`) to store the adjacency list for each node.
    - Use a helper function `convertIntoDirectedGraph` to convert the binary tree into a directed graph.
        - Connect each node with its parent, left child, and right child.
    - Initialize a set (`vis`) to keep track of visited nodes and a queue (`q`) for BFS traversal.
    - Enqueue the starting node into the queue and mark it as visited.
    - Perform BFS traversal:
        - For each level, enqueue all the unvisited adjacent nodes and mark them as visited.
    - Count the number of levels traversed and return the result (`res - 1`).

4. Result:
    - The function returns the amount of time required to traverse the tree starting from the given node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n)` - creating directed graph from given tree required `O(n)` time complexity. Later over the graph for each level also required `O(n)` time complexity.
-   Space-Complexity: `O(n) + O(n)` - for storing adjacency list and queue data-structure
