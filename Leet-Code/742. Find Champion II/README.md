# 2924. Find Champion II

This problem involved about, there are n teams numbered from 0 to n - 1 in a tournament; each team is also a node in a DAG.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-champion-ii/description/)

**Approach :**<br/>

1. `In-Degree Calculation`:

    - Use an array `inDeg` to count the number of incoming edges for each node.

2. `Validation`:
    - A valid champion is the only node with an in-degree of `0`.
    - If multiple nodes have an in-degree of `0`, return `-1`.
    - If no nodes have an in-degree of `0`, also return `-1`.

**Algorithm :**<br/>

3. `Initialize`:

    - Create an `inDeg` array of size `n` initialized to `0`.

4. `Calculate In-Degree`:

    - Iterate through the given edges and update the `inDeg` array for each destination node.

5. `Identify the Champion`:

    - Traverse the `inDeg` array to find the node with an in-degree of `0`.
    - Use a flag to ensure there is only one such node.

6. `Return the Result`:
    - Return the index of the champion if it exists; otherwise, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E + V)` - where `E` is the number of edges, and `V` is the number of nodes.
-   Space-Complexity: `O(V)` - for storing the inDeg array.
