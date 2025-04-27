# 2218. Maximum Value of K Coins From Piles

This problem involved about, there are n piles of coins on a table. Each pile consists of a positive number of coins of assorted denominations.
In one move, you can choose any coin on top of any pile, remove it, and add it to your wallet.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given `n` piles of coins, where each pile contains a certain number of coins.
    - We can pick at most `k` coins in total, but we can only pick coins from the top of each pile.
    - The goal is to maximize the total value of the coins picked.

2. `Algorithm`:

    - Use `dynamic programming with memoization` to explore all possible ways to pick coins from the piles.
    - Define a DP table `dp[i][k]` where:
        1. `i` represents the current pile index.
        2. `k` represents the remaining number of coins that can be picked.
    - For each pile, explore all possible ways to pick coins (from `0` to the minimum of `k` and the size of the pile).
    - Recursively compute the maximum value by either skipping the current pile or picking coins from it.

3. `Steps`:
    - Initialize a DP table `dp` of size `(n + 1) x (k + 1)` with `-1` to represent uncomputed states.
    - Define a recursive function `Solved`:
        1. If all piles are processed (`i == n`), return `0`.
        2. If the result for the current state `(i, k)` is already computed, return it.
        3. Initialize `res` with the result of skipping the current pile.
        4. Iterate through the current pile and pick coins:
            - Add the value of the picked coins to `curSum`.
            - Recursively compute the maximum value for the remaining piles and coins.
            - Update `res` with the maximum value.
        5. Store the result in the DP table and return it.
    - Call the recursive function with the initial state `(0, k)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k * m)` - where `n` is the number of piles, `k` is the total number of coins to pick, and `m` is the maximum size of any pile.
-   Space-Complexity: `O(n * k)` - due to the DP table.
