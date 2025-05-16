# 790. Domino and Tromino Tiling

This problem involved about, you have two types of tiles: a 2 x 1 domino shape and a `tromino` shape. You may rotate these shapes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/domino-and-tromino-tiling/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an integer `n` representing the size of a 2 x `n` board.
    - The goal is to count the number of ways to tile the board using 2 x 1 dominoes and L-shaped `trominoes`.
    - Each tile must cover exactly 2 squares, and the entire board must be covered without overlaps or gaps.

2. `Algorithm`:

    - Use dynamic programming with memoization to solve the problem.
    - The recurrence relation for the number of ways to tile a 2 x `n` board is:
        - `f(n) = 2 * f(n-1) + f(n-3)`
    - Handle base cases:
        - `f(1) = 1` (only one way to tile a 2 x 1 board).
        - `f(2) = 2` (two ways to tile a 2 x 2 board).
        - `f(3) = 5` (five ways to tile a 2 x 3 board).
    - Use a DP array `dp` to store the results of `subproblems` and avoid redundant calculations.

3. `Steps`:
    - Initialize a DP array `dp` of size `n + 1` with `-1` to represent `uncomputed` states.
    - Define a recursive function `Solve`:
        - Handle the base cases for `n = 1`, `n = 2`, and `n = 3`.
        - If the result for `n` is already computed (`dp[n] != -1`), return it.
        - For `n > 3`, use the recurrence relation `f(n) = 2 * f(n-1) + f(n-3)`.
        - Store the result in `dp[n]` and return it modulo `1e9 + 7`.
    - Call the `Solve` function with the input `n` and return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - each `n` value is calculated at most once.
-   Space-Complexity: `O(n)` - due to recursion stack and memoization array.
