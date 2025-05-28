# 1964. Find the Longest Valid Obstacle Course at Each Position

This problem involved about, you want to build some obstacle courses. You are given a `0-indexed` integer array obstacles of length n, where `obstacles[i]` describes the height of the ith obstacle.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `obstacles`, where each element represents the height of an obstacle.
    - The goal is to find, for each position `i`, the length of the longest non-decreasing subsequence ending at that position.

2. `Algorithm`:

    - Use a `greedy approach with binary search` to efficiently compute the length of the longest non-decreasing subsequence ending at each position.
    - Maintain a temporary array `temp` to store the smallest possible tail values for all increasing subsequences of different lengths.
    - For each element in `obstacles`, use binary search to find the position where the element can be placed in `temp` to maintain the sorted order.
    - If the element is greater than all elements in `temp`, append it to `temp`.
    - Otherwise, replace the first element in `temp` that is greater than the current element.
    - The length of the longest non-decreasing subsequence ending at the current position is the index where the element is placed in `temp` plus `1`.

3. `Steps`:
    - Initialize an empty array `temp` to store the smallest tail values of increasing subsequences.
    - Initialize a result array `res` to store the length of the longest non-decreasing subsequence ending at each position.
    - Iterate through the array `obstacles`:
        1. Use binary search (`upper_bound`) to find the position where the current element can be placed in `temp`.
        2. If the position is at the end of `temp`, append the current element to `temp`.
        3. Otherwise, replace the element at the found position in `temp` with the current element.
        4. Store the length of the subsequence (`idx + 1`) in the result array `res`.
    - Return the result array `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where `n` is the size of the array.For each element, binary search takes `O(log n)` time.
-   Space-Complexity: `O(n)` - due to the `temp` and `res` arrays.
