# 1749. Maximum Absolute Sum of Any Subarray

This problem involved about, you are given an integer array `nums`. The absolute sum of a `subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr)`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array of integers `nums`.
    - The goal is to find the `maximum absolute sum` of any subarray (contiguous part of the array).
    - The absolute sum of a subarray is the absolute value of its sum.

2. `Algorithm`:

    - Use a `prefix sum` approach to calculate the sum of subarrays efficiently.
    - Track the `maximum prefix sum` (`max_sum`) and `minimum prefix sum` (`min_sum`) encountered so far.
    - For each element in the array:
        1. Update the current prefix sum (`cur_sum`).
        2. Calculate the absolute difference between the current prefix sum and the maximum/minimum prefix sum.
        3. Update the result (`res`) with the maximum absolute difference found so far.
        4. Update `max_sum` and `min_sum` based on the current prefix sum.

3. `Steps`:
    - Initialize `res`, `cur_sum`, `max_sum`, and `min_sum` to `0`.
    - Iterate through the array:
        1. Update `cur_sum` by adding the current element.
        2. Update `res` with the maximum of:
            - The current `res`.
            - The absolute difference between `cur_sum` and `max_sum`.
            - The absolute difference between `cur_sum` and `min_sum`.
        3. Update `max_sum` with the maximum of `max_sum` and `cur_sum`.
        4. Update `min_sum` with the minimum of `min_sum` and `cur_sum`.
    - Return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(1)` - as only a few variables are used.
