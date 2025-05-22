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

    - Find the largest power of 3 that is less than or equal to `n`.
    - Subtract this power of 3 from `n` and repeat the process with the remaining value.
    - If the remaining value becomes `0`, then `n` can be represented as the sum of distinct powers of 3.
    - If the remaining value becomes negative or cannot be reduced to `0`, return `false`.

3. `Steps`:
    - Initialize `i` to `0` and find the largest power of 3 (`3^i`) that is less than or equal to `n`.
    - Decrement `i` to get the correct largest power.
    - Iterate from the largest power down to `3^0`:
        - If the current power of 3 is less than or equal to `n`, subtract it from `n`.
        - Decrement `i`.
    - If `n` becomes `0`, return `true`; otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log3(n))` - where n is the given integer.
-   Space-Complexity: `O(1)` - As only a few variables are used.
