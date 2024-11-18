# 1395. Count Number of Teams

This problem involved about, there are n soldiers standing in a line. Each soldier is assigned a unique rating value.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-teams/description/)

**Approach :**<br/>

1. **Recursive Approach with Memoization**:

    - Use a recursive approach to count the number of valid teams for both increasing and decreasing orders.
    - Use a cache to store the results of subproblems to avoid redundant computations.

2. **Recursive Function**:

    - For each element in the array, start a recursive search to find valid teams.
    - Use a helper function `validatedTeam` which takes the current index, a boolean indicating if we are searching for increasing or decreasing order, the count of elements in the current team, the ratings array, and a cache.
    - Base cases:
        1. If the `start_idx` exceeds the array size, return 0.
        2. If the count of elements in the team reaches 3, return 1.
    - Use memoization to store results of `subproblems` to avoid repeated calculations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - We iterate over the `rating` then from recursive method we check valid subsequence.

-   Space-Complexity: `O(n)` - We are using an extra cache hash-map, if we avoid recursive spaces.