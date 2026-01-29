# 3315. Construct the Minimum Bitwise Array II

This problem involved about, you are given an array `nums` consisting of n prime integers.

You need to construct an array ans of length n, such that, for each index i, the bitwise OR of `ans[i] and ans[i] + 1` is equal to `nums[i]`, i.e. `ans[i] OR (ans[i] + 1) == nums[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/description/)

**Approach :**<br/>

To make a number smaller using bitwise operations:

-   We must `turn a `1`bit into`0``
-   Flipping a higher significant bit reduces the value more

However, we want the `minimum possible decrease`, so we:

-   Find the `lowest significant position` where:
    -   Bit `i` is `0`
    -   Bit `i-1` is `1`
-   Flip bit `(i-1)` from `1 → 0`

This guarantees:

-   The number decreases
-   The decrease is minimal

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - For each number, we check at most 32 bits (constant).
-   Space-Complexity: `O(n)` - Result array stores one value per input element.
