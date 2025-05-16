# 790. Domino and Tromino Tiling

This problem involved about, you have two types of tiles: a 2 x 1 domino shape and a `tromino` shape. You may rotate these shapes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/domino-and-tromino-tiling/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an integer `n` representing the size of a 2 x `n` board.
    - The goal is to count the number of ways to tile the board using 2 x 1 dominoes and L-shaped trominoes.
    - Each tile must cover exactly 2 squares, and the entire board must be covered without overlaps or gaps.

2. `Algorithm`:

    - Use dynamic programming to solve the problem.
    - The recurrence relation for the number of ways to tile a 2 x `n` board is:
        - `f(n) = 2 * f(n-1) + f(n-3)`
    - Handle base cases:
        - `f(1) = 1` (only one way to tile a 2 x 1 board).
        - `f(2) = 2` (two ways to tile a 2 x 2 board).
        - `f(3) = 5` (five ways to tile a 2 x 3 board).
    - Use recursion with memoization to compute the result.

3. `Steps`:
    - Define a recursive function `Solve`:
        - Handle the base cases for `n = 1`, `n = 2`, and `n = 3`.
        - For `n > 3`, use the recurrence relation `f(n) = 2 * f(n-1) + f(n-3)`.
        - Return the result modulo `1e9 + 7` to handle large numbers.
    - Call the `Solve` function with the input `n`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 ^ n)` - `recursive without memoization`, leading to an `exponential` complexity.
-   Space-Complexity: `O(n)` - recursive stack in the worst case
