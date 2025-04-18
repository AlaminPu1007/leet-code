# 887. Super Egg Drop

This problem involved about, you are given k identical eggs and you have access to a building with n floors labeled from 1 to n.<br/>
You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/super-egg-drop/description/)

**Approach :**<br/>

We use a `dynamic programming` (DP) approach to solve this problem efficiently. The idea is to maintain a DP table, `dp[i][j]`, where:

-   `i` represents the number of eggs.
-   `j` represents the number of floors.
-   `dp[i][j]` represents the minimum number of attempts needed to find the critical floor with `i` eggs and `j` floors.

**Base Cases :**<br/>

1. If we have `1 egg`, the only strategy is to drop the egg from each floor starting from the first, one by one. This results in `dp[1][j] = j` for all `j` floors.
2. If we have `1 floor`, only `1 attempt` is required for any number of eggs, i.e., `dp[i][1] = 1` for all `i` eggs.

**Recursive Case :**<br/>

For `i` eggs and `j` floors, we try dropping an egg from each floor `x` (1 to `j`). The two scenarios are:

1. If the egg breaks, we need to find the critical floor from the `x-1` floors below (using `i-1` eggs).
2. If the egg doesn't break, we need to find the critical floor from the `j-x` floors above (using `i` eggs).

The result for each `dp[i][j]` is calculated as:

-   `dp[i][j] = 1 + min(max(dp[i-1][x-1], dp[i][j-x]))` for x in `range(1, j)`. The `+1` accounts for the current drop.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * n * log n)` - where k is the number of eggs and n is the number of floors.
-   Space-Complexity: `O(n * k)` - for dp table.
