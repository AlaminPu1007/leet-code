# 887. Super Egg Drop

This problem involved about, you are given k identical eggs and you have access to a building with n floors labeled from 1 to n.<br/>
You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/super-egg-drop/description/)

**Approach:**<br/>

We solve this problem using `Top-Down Dynamic Programming (Memoization) with Depth-First Search (DFS)`.

**Algorithm :**<br/>

1. `Base Cases:`

    - If there are `no floors` (`f == 0`), no trials are needed → `return 0`
    - If there is `only one egg` (`e == 1`), we must try all floors `linearly` → `return f`
    - If there is `only one floor` (`f == 1`), only `one attempt` is needed → `return 1`

2. `Recursive Breakdown:`

    - We try `dropping an egg` from floor `k` (from `1` to `f`).
    - Two possible outcomes:
        - `Egg breaks` → We must check the floors `below `k`` (`DFS(e - 1, k - 1, dp)`)
        - `Egg does not break` → We must check the floors `above `k`` (`DFS(e, f - k, dp)`)
    - The worst-case scenario among these two is taken using `max()`, and we add `1` for the current attempt.

3. `Memoization (Top-Down DP):`
    - Since the same subproblems get computed multiple times, we store the results in a `dp` table (`dp[e][f]`).
    - If `dp[e][f]` is already computed (`!= -1`), return the cached value.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * n^2)` - The function iterates over all floors `(1 to f)` for each `k` eggs
-   Space-Complexity: `O(k * n)` - Due to the memoization table `(dp[e][f])`, we require additional space.
