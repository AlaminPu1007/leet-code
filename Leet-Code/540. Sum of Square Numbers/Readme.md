# 633. Sum of Square Numbers

This problem involved about, given a non-negative integer c, decide whether there're two integers a and b such that `a2 + b2 = c`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sum-of-square-numbers/description/)

**Approach :**<br/>

1. Use a two-pointer technique to find two numbers whose squares sum up to `c`.
2. Initialize `left` pointer to `0` and `right` pointer to the integer part of the square root of `c`.
3. Iterate while `left` is less than or equal to `right`:

    - Calculate the sum of squares of `left` and `right`.
    - If the sum is less than `c`, increment the `left` pointer to increase the sum.
    - If the sum is greater than `c`, decrement the `right` pointer to decrease the sum.
    - If the sum is equal to `c`, return `true`.

4. If no such pair is found, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(sqrt(c))` - because we are iterating from `0` to `sqrt(c)`.

-   Space-Complexity: `O(1)` - as only a few additional variables are used.
