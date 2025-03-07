# 983. Minimum Cost For Tickets

This problem involved about, you have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-for-tickets/description/?)

**Approach :**<br/>

#### Algorithm

1. Use a `DFS-based approach` to explore all combinations of travel passes.
2. For each day at index `idx`:
    - Calculate the cost of:
        - Buying a 1-day pass and proceeding to the next day.
        - Buying a 7-day pass and skipping the days covered.
        - Buying a 30-day pass and skipping the days covered.
3. Return the minimum cost among the three options.

#### Implementation

1. `DFS Function`:
    - Base case: If `idx` exceeds the size of `days`, return `0` (no more days to process).
    - For each pass:
        - Calculate the next day index not covered by the pass.
        - Recursively determine the minimum cost for the remaining days.
    - Return the minimum cost among all options.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(3 ^ n)` - where `n` is the size of the `days` array.
-   Space-Complexity: `O(n)` - At most, there are `n` recursive calls in the call stack.
