# 2127. Maximum Employees to Be Invited to a Meeting

This problem involved about, a company is organizing a meeting and has a list of n employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting/description/)

**Approach :**<br/>

1. `Calculate In-Degrees`:

    - Compute the in-degree for each node using the `favorite` array.

2. `Topological Sorting`:

    - Use a queue to process nodes with in-degree 0.
    - For each node processed, reduce the in-degree of its adjacent node.
    - Calculate the depth of chains as they are processed.

3. `Cycle Detection`:

    - For each node still having a non-zero in-degree, detect cycles.
    - While traversing cycles, mark nodes as visited (by setting in-degree to 0).

4. `Result Calculation`:
    - For cycles of length 2, include the chain depths of both nodes.
    - For larger cycles, directly use the cycle length.
    - Return the maximum of these two results.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Topological sorting and cycle detection each take `O(n)`, as every node is processed once.
-   Space-Complexity: `O(n)` - Space required for the `inDeg`, `depth`, and other auxiliary structures like the queue.
