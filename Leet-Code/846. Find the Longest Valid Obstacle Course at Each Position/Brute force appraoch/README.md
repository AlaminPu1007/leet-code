# 1964. Find the Longest Valid Obstacle Course at Each Position

This problem involved about, you want to build some obstacle courses. You are given a 0-indexed integer array obstacles of length n, where obstacles[i] describes the height of the ith obstacle.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `obstacles`, where each element represents the height of an obstacle.
    - The goal is to find, for each position `i`, the length of the longest non-decreasing subsequence ending at that position.

2. `Algorithm`:

    - Use a `dynamic programming` approach to compute the length of the longest non-decreasing subsequence ending at each position.
    - Initialize a result array `res` with `1` for each position, as the minimum length of a subsequence is `1`.
    - For each position `i`, iterate through all previous positions `j`:
        1. If `obstacles[j] <= obstacles[i]`, update `res[i]` to be the maximum of its current value and `res[j] + 1`.
    - Return the result array `res`.

3. `Steps`:
    - Initialize a result array `res` of size `n` with `1`.
    - Iterate through the array from the second element:
        1. For each element, iterate through all previous elements:
            - If the previous element is less than or equal to the current element, update the result for the current position.
    - Return the result array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - where `n` is the size of the array.
-   Space-Complexity: `O(n)` - due to the result array `res`.
