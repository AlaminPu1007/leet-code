## 1376. Time Needed to Inform All Employees (Breadth-First Search (BFS))

This problem is involved about, a company has n employees with a unique ID for each employee from 0 to n - 1. Return the number of minutes needed to inform all the employees about the urgent news.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/time-needed-to-inform-all-employees/description/)

**Algorithm :**<br/>

-   Create an adjacency list `adjList`, the i'th index here would store the adjacent nodes to the employee with ID `i`
-   Iterate over the employees from 0 to N - 1, and for each employee i, store an edge manager[i] -> i if manager[i] isn't -1
-   Initialize a queue q of pairs of integers. The first integer is the ID of an employee, and the second integer is the time at which this employee gets the information
-   Insert the first entry into the queue as (headID, 0)
-   Keep extracting pairs from the queue until it's empty. For each pair, update the maxTime first and then push each subordinate of the current employee with the additional time required to inform the subordinates via informTime
-   Return maxTime when the BFS is finished

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We first iterate over the employees to create the adjacency list; then, we perform the BFS, where we iterate over each node once to find when they get the information from `headID`
-   Space-Complexity: `O(n)`- The size of the adjacency list is `n`, and there will be only `n−1` edges in the tree. Also, the size of the queue could be at max `O(N)`. Hence the total space complexity would be `O(N)`.
