# 1444. Number of Ways of Cutting a Pizza

This problem involved about, given a rectangular pizza represented as a rows x cols matrix containing the following characters: 'A' (an apple) and '.' (empty cell) and given the integer k. You have to cut the pizza into k pieces using k-1 cuts.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-ways-of-cutting-a-pizza/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a 2D grid `pizza` representing a pizza, where each cell either contains an apple (`'A'`) or is empty (`'.'`).
    - We need to cut the pizza into `k` pieces such that each piece contains at least one apple.
    - The cuts can be made either horizontally or vertically.
    - The goal is to count the number of ways to cut the pizza while satisfying the above conditions.

2. `Algorithm`:

    - Use a `prefix sum` approach to efficiently count the number of apples in any subrectangle of the pizza.
    - Use `dynamic programming with memoization` to explore all possible ways to cut the pizza:
        1. For each possible cut (horizontal or vertical), ensure that the top/left piece contains at least one apple.
        2. Recursively compute the number of ways to cut the remaining pizza into `k-1` pieces.
    - Use a 3D DP table `dp[row][col][k]` to store the number of ways to cut the pizza starting from `(row, col)` into `k` pieces.

3. `Steps`:
    - Compute the prefix sum array `prefixApplesSum` to count the number of apples in any subrectangle.
    - Define a recursive function `Solved`:
        1. If the number of apples in the current subrectangle is less than `k`, return `0`.
        2. If `k == 1`, return `1` if the current subrectangle contains at least one apple.
        3. If the result for the current state is already computed, return it.
        4. Iterate over all possible horizontal and vertical cuts:
            - Ensure that the top/left piece contains at least one apple.
            - Recursively compute the number of ways to cut the remaining pizza into `k-1` pieces.
        5. Store the result in the DP table and return it.
    - Call the recursive function with the initial state `(0, 0, k)`.

**Complexity Analysis :**<br/>

-   Time-Complexity : `O(n * m * k * (n + m))` - where `n` is the number of rows, `m` is the number of columns, and `k` is the number of pieces.
-   Space-Complexity: `O(n * m * k)` - due to the 3D DP table.
