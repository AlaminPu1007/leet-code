# 983. Minimum Cost For Tickets

This problem involved about, you have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-for-tickets/description/?)

**Approach :**<br/>

#### Algorithm

1. Use a `DFS-based approach` to explore all possible options for buying passes.
2. Use a `memoization table (`dp`)` to store intermediate results and avoid redundant calculations.
3. For each travel day at index `idx`:
    - Calculate the cost of:
        1. Buying a 1-day pass.
        2. Buying a 7-day pass and skipping covered days.
        3. Buying a 30-day pass and skipping covered days.
    - Recursively determine the minimum cost for the remaining days.
4. Return the minimum cost among all possible pass combinations.

#### Implementation

1. `DFS Function`:

    - If `idx` exceeds the size of `days`, return `0` (base case).
    - If `dp[idx]` is not `-1`, return its value (memoized result).
    - Compute costs for the 1-day, 7-day, and 30-day passes and recursively call DFS to calculate the remaining costs.
    - Store the minimum cost in `dp[idx]` and return it.

2. `Time and Space Optimization`:
    - Use memoization to reduce the number of redundant computations.
    - Maintain a fixed-size `dp` array to minimize memory overhead.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - where `n` is the size of the `days` array.
-   Space-Complexity: `O(n)` - Space used for the `dp` array
