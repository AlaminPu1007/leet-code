# 1751. Maximum Number of Events That Can Be Attended II

This problem involved about, you are given an array of events where `events[i] = [startDayi, endDayi, valuei]`. The ith event starts at `startDayi` and ends at `endDayi`, and if you attend this event, you will receive a value of `valuei`. You are also given an integer k which represents the maximum number of events you can attend.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/description/)

**Key Insights :**<br/>

1. `Sorting`: Sorting events by start time helps in efficiently finding non-overlapping events
2. `Dynamic Programming`: Use memoization to store computed results and avoid redundant calculations
3. `Binary Search`: Can be used to optimize finding the next non-overlapping event (though not implemented in this solution)

**Algorithm Steps :**<br/>

1. `Sort Events`: Sort the events by their start time
2. `Recursive DP with Memoization`:
    - For each event, decide whether to take it or skip it
    - If taking an event, find the next non-overlapping event
    - Store results in a DP table to avoid recomputation
3. `Base Cases`:
    - Return 0 if no more events can be selected (i >= n) or no more selections allowed (k <= 0)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting array required `O(n * log(n))`, memoization can take `O(n * k)`. time complexity
-   Space-Complexity: `O(n * k)` - for db table, recursion stack can take `O(n)`.
