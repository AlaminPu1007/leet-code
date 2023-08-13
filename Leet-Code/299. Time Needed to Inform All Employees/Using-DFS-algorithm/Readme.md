## 1376. Time Needed to Inform All Employees ( Depth-First Search (DFS))

This problem is involved about, a company has n employees with a unique ID for each employee from 0 to n - 1. Return the number of minutes needed to inform all the employees about the urgent news.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/time-needed-to-inform-all-employees/description/)

**Algorithm :**<br/>

-   Create an adjacency list `adjList`, the i'th index here would store the adjacent nodes to the employee with ID `i`
-   Iterate over the employees from 0 to N - 1, and for each employee i, store an edge manager[i] -> i if manager[i] isn't -1
-   Start the DFS with node headID and time as 0 for each node as curr, Update the maximum time we have seen, maxTime, by comparing it with time. iterate over the adjacent nodes of curr, and for each adjacent node, perform DFS with time as time + informTime[curr]
-   When the DFS is finished, return maxTime

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We first iterate over the employees to create the adjacency list; then, we perform the DFS, where we iterate over each node once to find when they get the information from `headID`
-   Space-Complexity: `O(n)`- The size of the adjacency list is N, and there will be only N−1 edges in the tree. There will be some stack space needed for DFS. The maximum active stack calls would equal the number of nodes for a skewed tree. Hence the total space complexity would be `O(N)`.
