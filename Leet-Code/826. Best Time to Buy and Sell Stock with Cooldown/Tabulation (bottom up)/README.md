# 309. Best Time to Buy and Sell Stock with Cooldown

This problem involved about, you are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `prices` where `prices[i]` represents the price of a stock on the `i-th` day.
    - The goal is to maximize the profit by buying and selling stocks under the following constraints:
        - After selling a stock, you cannot buy another stock on the next day (cool-down period).
    - We can hold at most one stock at any time.

2. `Algorithm`:

    - Use dynamic programming to compute the maximum profit for each day.
    - Define a DP array `t` where `t[i]` represents the maximum profit achievable up to the `i-th` day.
    - For each day `i`, consider two possibilities:
        - `Cool down`: Do not perform any transaction on day `i`. The profit remains the same as day `i-1`.
        - `Sell on day `i``: If you sell on day `i`, you must have bought on some day `j`(where`0 <= j < i`). The profit is calculated as `prices[i] - prices[j] + t[j-2]` (considering the cool-down period).
    - Update the DP array with the maximum profit for each day.

3. `Steps`:
    - Initialize a DP array `t` of size `n` with `0`.
    - Handle edge cases:
        - If `n == 0` or `n == 1`, return `0` (no profit can be made).
    - Set `t[0] = 0` (no profit on the first day).
    - Set `t[1] = max(prices[1] - prices[0], 0)` (profit on the second day).
    - For each day `i` from `2` to `n-1`:
        - Initialize `t[i]` with `t[i-1]` (cool down).
        - Iterate through all possible buy days `j` (from `0` to `i-1`):
            - Calculate the profit if you buy on day `j` and sell on day `i`, considering the cool-down period (`t[j-2]`).
            - Update `t[i]` with the maximum profit.
    - Return `t[n-1]` (maximum profit up to the last day).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - For each day i, we iterate through all previous days j.
-   Space-Complexity: `O(n)` - The DP array t consumes O(n) space
