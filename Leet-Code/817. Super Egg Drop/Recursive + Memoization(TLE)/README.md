# 887. Super Egg Drop

This problem involved about, you are given k identical eggs and you have access to a building with n floors labeled from 1 to n.<br/>
You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/super-egg-drop/description/)

**Approach:**<br/>

The problem is solved using a `memoized depth-first search (DFS)` approach, also known as `top-down dynamic programming (DP)`. The idea is to simulate dropping an egg from each floor and recursively compute the minimum number of attempts required for the worst-case scenario. Memoization is used to store intermediate results and avoid redundant calculations.

**Algorithm :**<br/>

1. `Base Cases`:

    - If there are no floors (`f == 0`), no attempts are needed.
    - If there is only one egg (`e == 1`), the worst-case scenario is dropping the egg from every floor starting from the bottom, which takes `f` attempts.
    - If there is only one floor (`f == 1`), only one attempt is needed.

2. `Memoization`:

    - Use a DP table (`dp`) to store results of previously computed `subproblems`.
    - If the result for a given number of eggs `e` and floors `f` is already computed, return the cached value.

3. `Recursive Case`:
    - For each floor `k` (from 1 to `f`), simulate dropping an egg:
        - `Case 1`: If the egg breaks, recursively check the floors below `k` with `e-1` eggs.
        - `Case 2`: If the egg does not break, recursively check the floors above `k` with `e` eggs.
    - Compute the worst-case scenario for each floor `k` and store the minimum number of attempts required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * n^2)` - Due to looping through all n floors for each egg count
-   Space-Complexity: `O(k * n)` - For the memoization table `dp[k][n]`.
