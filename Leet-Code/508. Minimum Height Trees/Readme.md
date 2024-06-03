## 310. Minimum Height Trees
This problem involved about, a tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree.<br/>

# Problem description
For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-height-trees/description/)

**Approach :**<br/>

1. If there is only one node in the graph (`n == 1`), return it as the root of the tree.
2. Initialize an empty vector `res` to store the root(s) of the minimum height tree(s).
3. Create a queue `q` for BFS traversal.
4. Create an adjacency list `adj` to represent the graph and calculate the in-degree of each node.
5. Push nodes with an in-degree of 1 into the queue as leaf nodes.
6. Perform BFS:
   - While the queue is not empty:
     - Dequeue a node from the front of the queue.
     - Add the dequeued node to the `res` vector.
     - Update the in-degree of adjacent nodes and push them into the queue if their in-degree becomes 1.
7. Repeat BFS until the queue is empty, updating the `res` vector at each level.
8. Return the `res` vector containing the root(s) of the minimum height tree(s).


**Complexity Analysis :**<br/>
- Time-Complexity: `O(n)` -  where N is the number of nodes in the graph. We perform a BFS traversal of the graph, which visits each node exactly once.


- Space-Complexity: `O(n)` - The algorithm uses the adjacency list adj and in-degree array inDeg, both of which require `O(n)` space.




