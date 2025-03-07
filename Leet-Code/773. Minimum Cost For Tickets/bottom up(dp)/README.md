# 983. Minimum Cost For Tickets

This problem involved about, you have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-for-tickets/description/?)

**Approach :**<br/>

#### Algorithm

1. `Preprocessing`:

    - Identify the maximum day (`last_days`) in the `days` array, as we only need to compute costs up to this day.
    - Use a hash set (`st`) to quickly check if a given day is a travel day.

2. `DP Array`:

    - Use a `dp` array where `dp[i]` represents the minimum cost to cover travel up to day `i`.
    - Initialize `dp[0] = 0` (no cost for day `0`).

3. `Iterative Calculation`:

    - For each day `i` from `1` to `last_days`:
        1. If `i` is not a travel day, `dp[i] = dp[i - 1]` (cost remains unchanged).
        2. Otherwise:
            - Calculate the cost for:
                1. A 1-day pass (`costs[0] + dp[i - 1]`).
                2. A 7-day pass (`costs[1] + dp[max(i - 7, 0)]`).
                3. A 30-day pass (`costs[2] + dp[max(i - 30, 0)]`).
            - Take the minimum of the three values.
    - Store the result in `dp[i]`.

4. `Final Result`:
    - Return `dp[last_days]`, which holds the minimum cost to cover all travel days.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the `days` array.
-   Space-Complexity: `O(n)` - Space used for the `dp` array
