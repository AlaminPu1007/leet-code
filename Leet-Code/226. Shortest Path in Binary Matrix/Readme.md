## 1091. Shortest Path in Binary Matrix

[Visit Problem](https://leetcode.com/problems/shortest-path-in-binary-matrix/description/)

**Approach :**<br/>

-   we need an BFS algorithm to solved this problem

The given code implements the solution for the problem of finding the shortest path in a binary matrix from the top-left corner to the bottom-right corner. In this matrix, the value of each element can be either 0 or 1, where 0 represents an empty cell and 1 represents an obstacle.<br/>

The solution is implemented using the Breadth-First Search (BFS) algorithm. The idea is to start traversing the matrix from the top-left corner and explore all the possible paths that can be taken to reach the bottom-right corner. We maintain a distance matrix that keeps track of the distance of each cell from the starting point. Initially, all the values in the distance matrix are set to -1 to indicate that no cell has been visited yet.

**Complexity Analysis :**<br/>

-   Time-Complexity: As the time complexities of the above steps are independent of each other, the overall time complexity of the given code is O(n x m x 8 + n x m), which can be simplified to `O(n x m)`. Therefore, the time complexity of the given code is `O(n x m)`.
-   Space-Complexity: As the space complexities of the above steps are independent of each other, the overall space complexity of the given code is `O(n x m)`.
