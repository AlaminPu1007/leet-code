# 2780. Minimum Index of a Valid Split

This problem involved about, An element x of an integer array arr of length m is dominant if more than half the elements of arr have a value of x.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-index-of-a-valid-split/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `nums` of integers.
    - The goal is to find the smallest index `i` where the dominant element (appears more than half the time) in both the left subarray `nums[0..i]` and the right subarray `nums[i+1..n-1]` is the same.
    - If no such index exists, return `-1`.

2. `Algorithm`:

    - Use two hash maps, `leftCount` and `rightCount`, to track the frequency of elements in the left and right subarrays.
    - Initialize `rightCount` with the frequency of all elements in `nums`.
    - Iterate through the array:
        - Move the current element from `rightCount` to `leftCount`.
        - Check if the current element is the dominant element in both the left and right subarrays.
        - If it is, return the current index `i`.
    - If no such index is found, return `-1`.

3. `Steps`:
    - Initialize `rightCount` with the frequency of all elements in `nums`.
    - Iterate through the array:
        - Update `leftCount` and `rightCount` for the current element.
        - Calculate the lengths of the left and right subarrays.
        - Check if the current element is dominant in both subarrays.
        - Return the index if the condition is met.
    - Return `-1` if no valid index is found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(n)` - due to the hash maps storing frequency counts.
