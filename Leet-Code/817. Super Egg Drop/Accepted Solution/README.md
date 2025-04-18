# 887. Super Egg Drop

This problem involved about, you are given k identical eggs and you have access to a building with n floors labeled from 1 to n.<br/>
You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/super-egg-drop/description/)

**Thoughts Process :**<br/>

1. `Problem Analysis`:

    - We need to find the minimum number of attempts required to determine the critical floor in the worst-case scenario.
    - The problem involves balancing between the number of eggs and the number of floors to minimize the attempts.

2. `Key Observations`:

    - If there is only `1 egg`, we must perform a linear search (drop from each floor sequentially).
    - If there is only `1 floor`, only 1 attempt is needed.
    - If there are `0 floors`, no attempts are needed.

3. `Dynamic Programming Approach`:

    - Use a DP table to store the results of `subproblems` to avoid redundant computations.
    - Define `dp[e][f]` as the minimum number of attempts needed for `e` eggs and `f` floors.

4. `Recursive with Memoization`:
    - Use a recursive function to explore all possible floors and eggs.
    - Use binary search to optimize the search for the critical floor.

**Approach :**<br/>

1. `Base Cases`:

    - If `f == 0`, return `0` (no floors, no attempts needed).
    - If `e == 1`, return `f` (linear search required).
    - If `f == 1`, return `1` (only one floor, one attempt needed).

2. `Recursive Case`:

    - For each floor `mid`, calculate the worst-case attempts:
        - If the egg breaks: `DFS(e - 1, mid - 1, dp)`.
        - If the egg doesn't break: `DFS(e, f - mid, dp)`.
    - Use binary search to find the optimal `mid` floor to minimize the worst-case attempts.

3. `Memoization`:
    - Store the result of each subproblem in the DP table to avoid redundant computations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * n * log(n))` - where k is the number of eggs and n is the number of floors and `log(n)` for binary search.
-   Space-Complexity: `O(n * k)` - due to the DP table used for memoization.
