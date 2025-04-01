# 1800. Maximum Ascending Subarray Sum

This problem involved about, given an array of positive integers `nums`, return the maximum possible sum of an ascending `subarray` in `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-ascending-subarray-sum/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array of integers `nums`.
    - The goal is to find the maximum sum of a strictly increasing `subarray`.

2. `Algorithm`:

    - Use a single pass through the array to track the sum of the current increasing `subarray`.
    - Update the result whenever a larger sum is found.

3. `Steps`:
    - Initialize `res` and `count` with the first element of the array.
    - Iterate through the array starting from the second element:
        - If the current element is greater than the previous, add it to `count` (extend the current increasing `subarray`).
        - Otherwise, reset `count` to the current element (start a new increasing `subarray`).
    - Update `res` with the maximum value between `res` and `count` at each step.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the array once.
-   Space-Complexity: `O(1)` - Only a few variables are used, and no additional data structures are required.
