# 887. Super Egg Drop

This problem involved about, you are given k identical eggs and you have access to a building with n floors labeled from 1 to n.<br/>
You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/super-egg-drop/description/)

**Approach:**<br/>

The problem is solved using a recursive approach with depth-first search (DFS). The idea is to simulate dropping an egg from each floor and recursively compute the minimum number of attempts required for the worst-case scenario.

**Algorithm :**<br/>

1. `Base Cases`:

    - If there are no eggs (`e == 0`) or no floors (`f == 0`), no attempts are needed.
    - If there is only one egg (`e == 1`), the worst-case scenario is dropping the egg from every floor starting from the bottom, which takes `f` attempts.
    - If there is only one floor (`f == 1`), only one attempt is needed.

2. `Recursive Case`:
    - For each floor `k` (from 1 to `f`), simulate dropping an egg:
        - `Case 1`: If the egg breaks, recursively check the floors below `k` with `e-1` eggs.
        - `Case 2`: If the egg does not break, recursively check the floors above `k` with `e` eggs.
    - Compute the worst-case scenario for each floor `k` and store the minimum number of attempts required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2^f)` - an exponential number of function calls, leading to `O(2^f)` time complexity in the worst case.
-   Space-Complexity: `O(f)` - The recursive function uses stack space.
