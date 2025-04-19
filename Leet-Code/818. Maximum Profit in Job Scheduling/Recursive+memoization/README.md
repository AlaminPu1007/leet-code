# 1235. Maximum Profit in Job Scheduling

This problem involved about, we have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of `profit[i]`.
You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given three arrays: `startTime`, `endTime`, and `profit`, representing the start time, end time, and profit of `n` jobs.
    - The goal is to schedule jobs in such a way that no two jobs overlap, and the total profit is maximized.

2. `Algorithm`:

    - Combine the three arrays into a single 2D array `arr` where each row contains `[startTime, endTime, profit]`.
    - Sort the `arr` based on the start time of the jobs.
    - Use dynamic programming with memoization to explore two choices for each job:
        1. `Pick the job`: Add its profit and recursively solve for the next valid job that doesn't overlap.
        2. `Skip the job`: Move to the next job without adding its profit.
    - Use binary search to efficiently find the next valid job that doesn't overlap with the current job.

3. `Steps`:
    - Initialize a 2D array `arr` to store the jobs and sort it by start time.
    - Initialize a DP array `dp` to store the results of `subproblems`.
    - Define a recursive function `Solved`:
        1. If the current index `idx` exceeds `n`, return 0.
        2. If the result for the current index is already computed (`dp[idx] != -1`), return it.
        3. Use binary search to find the next valid job that doesn't overlap with the current job.
        4. Calculate the maximum profit by either picking or skipping the current job.
        5. Store the result in `dp[idx]` and return it.
    - Return the result of `Solved(0, n, arr, dp)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting takes `O(n * log(n))`, and each recursive call with binary search takes `log(n)`.
-   Space-Complexity: `O(n)` - The DP array and the sorted 2D array consume `O(n)` space.
