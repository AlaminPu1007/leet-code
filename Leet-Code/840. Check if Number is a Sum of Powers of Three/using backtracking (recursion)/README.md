# 1780. Check if Number is a Sum of Powers of Three

This problem involved about, given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, `return false`. An integer y is a power of three if there exists an integer x such that `y == 3x`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an integer `n`.
    - The goal is to determine if `n` can be represented as the sum of `distinct powers of 3`.
    - A power of 3 is a number of the form `3^k`, where `k` is a non-negative integer.

2. `Algorithm`:

    - Use a `recursive backtracking` approach to explore all possible combinations of distinct powers of 3.
    - Start with the smallest power of 3 (`3^0 = 1`) and recursively check if including or excluding it leads to a valid sum.
    - If the sum equals `n`, return `true`.
    - If the sum exceeds `n` or the current power of 3 exceeds `n`, backtrack.

3. `Steps`:
    - Define a recursive function `Solved`:
        - If the current sum equals `n`, return `true`.
        - If the current sum exceeds `n` or the current power of 3 exceeds `n`, return `false`.
        - Recursively check if including the current power of 3 in the sum leads to a valid solution.
        - If not, recursively check if excluding the current power of 3 leads to a valid solution.
    - Call the recursive function with initial parameters `i = 0`, `sum = 0`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 ^ log3(n)) => O(n)` -
-   Space-Complexity: `O(log3(n))` - The space complexity is primarily dominated by the recursion stack.
