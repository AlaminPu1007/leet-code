# 3105. Longest Strictly Increasing or Strictly Decreasing Subarray

This problem involved about, you are given an array of integers `nums`. Return the length of the longest `subarray` of `nums` which is either strictly increasing or strictly decreasing.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array of integers `nums`.
    - The goal is to find the length of the longest subarray that is either strictly increasing or strictly decreasing.

2. `Algorithm`:

    - Use a single pass through the array to track the lengths of the current increasing and decreasing subarrays.
    - Update the result whenever a longer subarray is found.

3. `Steps`:
    - Initialize `res` to 1 (since the minimum length of a subarray is 1).
    - Use two counters, `incOrder` and `decOrder`, to track the lengths of the current increasing and decreasing subarrays, respectively.
    - Iterate through the array:
        1. If the current element is greater than the previous, increment `incOrder` and reset `decOrder`.
        2. If the current element is less than the previous, increment `decOrder` and reset `incOrder`.
        3. If the current element is equal to the previous, reset both `incOrder` and `decOrder`.
    - Update `res` with the maximum value among `res`, `incOrder`, and `decOrder` at each step.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - `n` is the size of the array.
-   Space-Complexity: `O(1)` - as only a constant amount of extra space is used (variables `res`, `incOrder`, and `decOrder`).
