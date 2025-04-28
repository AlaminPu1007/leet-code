# 309. Best Time to Buy and Sell Stock with Cooldown

This problem involved about, you are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `prices` where `prices[i]` represents the price of a stock on the `i-th` day.
    - The goal is to maximize the profit by buying and selling stocks under the following constraints:
        1. After selling a stock, you cannot buy another stock on the next day (cool-down period).
    - We can hold at most one stock at any time.

2. `Algorithm`:

    - Use dynamic programming with memoization to explore two states for each day:
        1. `Buy state`: You can either buy the stock or skip buying.
        2. `Sell state`: You can either sell the stock or skip selling.
    - Use a DP table `dp[i][isBuy]` to store the maximum profit achievable starting from the `i-th` day, where `isBuy` indicates whether you are in a buy state (`true`) or sell state (`false`).
    - Handle the cooldown period by skipping the next day after selling a stock.

3. `Steps`:
    - Initialize a DP table `dp` of size `(n + 1) x 2` with `-1` to represent un-computed states.
    - Define a recursive function `Solve`:
        1. If `i >= n`, return 0 (no more days left).
        2. If the result for the current state `(i, isBuy)` is already computed, return it.
        3. If in the buy state:
            - Calculate the profit if you buy the stock on the `i-th` day and move to the next day in the sell state.
            - Calculate the profit if you skip buying and move to the next day in the buy state.
            - Store the maximum profit in `dp[i][isBuy]`.
        4. If in the sell state:
            - Calculate the profit if you sell the stock on the `i-th` day and move to the day after the next (cool-down period) in the buy state.
            - Calculate the profit if you skip selling and move to the next day in the sell state.
            - Store the maximum profit in `dp[i][isBuy]`.
    - Return the result of `Solve(0, prices, n, true, dp)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each state `(i, isBuy)` is computed only once and stored in `dp`.
-   Space-Complexity: `O(n + n)` - for the DP table and recursion stack space.
