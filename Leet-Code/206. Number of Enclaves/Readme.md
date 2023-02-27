## 1020. Number of Enclaves

[Visit Problem](https://leetcode.com/problems/number-of-enclaves/description/)

**Intuition: :**<br>
The land cells present in the boundary cannot be counted in the answer as we will walk off the boundary of the grid. Also, land cells connected to the boundary land cell can never be the answer. <br/>

The intuition is that we need to figure out the boundary land cells, go through their connected land cells and mark them as visited. The sum of all the remaining land cells will be the answer.

**Approach :**<br>

We can follow either of the traversal techniques as long as we are starting with a boundary element and marking all those 1s connected to it. We will be solving it using BFS traversal, but you can apply DFS traversal as well, we have applied DFS traversal to solve a similar problem in the previous article. <br/>

Breadth First Search, BFS is a traversal technique where we visit the nodes level-wise, i.e., it visits the same level nodes simultaneously, and then moves to the next level. <br/>

**Initial configuration :**<br/>

-   Queue: Define a queue and insert the coordinates of the cell <row, column> which are in the boundary and are marked as 1. The boundary cells will always have row i = 0 or row i = n-1 or col j = 0 or col j = m-1.
-   Visited array: an array initialized to 0 indicating unvisited cells, apart from the ones in the boundary which are already in the queue ds.

**The algorithm steps are as follows: :**<br/>

-   For BFS traversal, we need a queue data structure and a visited array. Create a corresponding visited array.
-   Push the coordinates of boundary nodes in the queue and mark them as visited.
-   Start the BFS traversal, pop out an element from the queue every time and travel to all its unvisited neighboring land cells in the 4 directions. For every unvisited node, push it {row, col} into the Q and mark it as visited to avoid multiple traversals in the future.
-   Repeat the steps until the queue becomes empty. When all the boundaries are traversed and corresponding sets of 1s are marked as visited, use a counter variable to count the number of remaining unvisited land cells.
-   Return the value of the counter as it indicates the number of land cells that cannot cross the boundary.

Consider the following illustration to understand how BFS traverses the matrix and finds the number of land cells in the grid for which we cannot walk off the boundary of the grid in any number of moves.<br/>

![CHESS!](./flow.gif)<br/>

**Complexity Analysis :**<br>

-   Time Complexity: `O(NxMx4) ~ O(N x M)`, For the worst case, assuming all the pieces as land, the BFS function will be called for (N x M) nodes and for every node, we are traversing for 4 neighbors, so it will take `O(N x M x 4)` time.

-   Space Complexity ~ `O(N x M), O(N x M)` for the visited array, and queue space takes up `N x M` locations at max.

**References :**<br/>

-   [Learn from article](https://takeuforward.org/graph/number-of-enclaves/)
-   [Learn from video](https://www.youtube.com/watch?v=rxKcepXQgU4&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=15)
