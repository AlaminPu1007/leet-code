# 3133. Minimum Array End

This problem involved about, you are given two integers n and x. You have to construct an array of positive integers `nums` of size n where for every `0 <= i < n - 1`, `nums[i + 1]` is greater than `nums[i]`, and the result of the bitwise AND operation between all elements of `nums` is `x`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-array-end/description)

**Approach :**<br/>

1. `Initialize `res``: Start with `res = x`.
2. `Iterate `n - 1` Times`:
    - For each iteration, update `res` using the formula `(res + 1) | x`. This formula works as follows:
        - `(res + 1)` increments `res` by `1`.
        - `| x` applies a bitwise OR with `x`, ensuring that any set bits in `x` are present in `res`.
3. `Return `res``: The value of `res`after`n - 1` transformations gives the minimum possible ending value based on the transformation rules.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - since we iterate `n - 1` times.
-   Space-Complexity: `O(1)` - as we only use a fixed amount of space for the result variable.
