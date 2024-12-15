# 2463. Minimum Total Distance Traveled

This problem involved about, there are some robots and factories on the X-axis. You are given an integer array robot where robot[i] is the position of the ith robot. You are also given a 2D integer array factory where factory[j] = [positionj, limitj] indicates that positionj is the position of the jth factory and that the jth factory can repair at most limitj robots.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-total-distance-traveled/description/)

**Approach :**<br/>

1. `Sort Robots and Factories by Position`:

    - Sorting simplifies finding the optimal matching by reducing the search space for minimal distances.

2. `Expand Factories by Capacity`:
    - For each factory, add `count` instances of its position to a new `factories` array. This allows for straightforward matching with robots.
3. `Dynamic Programming with Depth-First Search (DFS)`:

    - Define a recursive function `DFS(i, j)` to determine the minimum distance when assigning robots starting from index `i` and factories starting from index `j`.
    - `Choices`:
        - `Pick` the current factory for the robot and move to the next robot and factory.
        - `Skip` the current factory and consider the next one for the same robot.
    - `Base Cases`:
        - If all robots are assigned, return `0`.
        - If no factories are left to assign, return a large number (`1e12`).

4. `Memoization`:
    - Use a `dp` array to store the results of `subproblems` to avoid redundant calculations, where `dp[i][j]` represents the minimum distance for matching robots from `i` and factories from `j`.

**Complexity Analysis :**<br/>
- Time-Complexity: `O(n * m)` - where `n` is the number of robots and `m` is the expanded size of factories.
- Space-Complexity: `O(n * m)` -  for the `dp` table.


