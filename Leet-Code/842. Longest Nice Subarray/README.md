# 2401. Longest Nice Subarray

This problem involved about, you are given an array `nums` consisting of positive integers.
We call a `subarray` of `nums` nice if the bitwise AND of every pair of elements that are in different positions in the `subarray` is equal to 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-nice-subarray/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `nums` of integers.
    - The goal is to find the length of the longest `nice subarray`, where a nice `subarray` is defined as a `subarray` where the bitwise AND of any two elements is `0`.
    - This means that all elements in the `subarray` must have `non-overlapping bits` in their binary representation.

2. `Algorithm`:

    - Use a `sliding window` approach to maintain a window of elements where the bitwise AND of all elements is `0`.
    - Use a variable `cur_sum` to track the bitwise OR of all elements in the current window.
    - If adding a new element to the window causes a conflict (i.e., `cur_sum & nums[right] != 0`), move the left pointer to the right until the conflict is resolved.
    - Update the result with the maximum window size found.

3. `Steps`:
    - Initialize `left` to `0`, `cur_sum` to `0`, and `res` to `1`.
    - Iterate through the array using the `right` pointer:
        - While the current window has a conflict (`cur_sum & nums[right] != 0`), remove the leftmost element from the window by XORing it with `cur_sum` and incrementing `left`.
        - Add the current element to the window by ORing it with `cur_sum`.
        - Update the result with the maximum window size (`right - left + 1`).
    - Return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(1)` - as only a few variables are used.
