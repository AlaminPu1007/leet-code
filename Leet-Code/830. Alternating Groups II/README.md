# 3208. Alternating Groups II

This problem involved about, there is a circle of red and blue tiles. You are given an array of integers colors and an integer k. The color of tile i is represented by `colors[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/alternating-groups-ii/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `colors` representing the colors of elements in a circular arrangement.
    - We need to count the number of subarrays of size `k` where adjacent elements have alternating colors.
    - The array is circular, meaning the first and last elements are considered adjacent.

2. `Algorithm`:

    - Use a sliding window approach to maintain a window of size `k`.
    - Track the left pointer (`l`) of the window and iterate through the array.
    - If two adjacent elements have the same color, move the left pointer to the current position.
    - If the window size reaches `k`, check if it is a valid alternating subarray and increment the result.
    - Handle the circular nature of the array by using modulo operations.

3. `Steps`:
    - Initialize `l` (left pointer) and `res` (result) to `0`.
    - Iterate through the array from `1` to `n + k - 1` (to handle the circular nature):
        1. If the current element and the previous element have the same color, move the left pointer to the current position.
        2. Calculate the window size as `(i - l + 1)`.
        3. If the window size exceeds `k`, move the left pointer to the right.
        4. If the window size equals `k`, increment the result.
    - Return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(1)` - as only a few variables are used.
