# 2419. Longest Subarray With Maximum Bitwise AND

This problem involved about, you are given an integer array nums of size n.
Consider a non-empty subarray from nums that has the maximum possible bitwise AND.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/description)

**Approach :**<br/>

-   First, identify the maximum element in the array using the `max_element` function.
-   Traverse through the array and count the consecutive occurrences of the maximum element.
-   Keep track of the longest such streak using a variable `res` to store the result and a variable `count` to count consecutive occurrences of the maximum element.
-   Return the longest streak of the maximum element, which is stored in `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of elements in the array. The array is traversed once to find the maximum element, and once more to find the longest subarray.
-   Space-Complexity: `O(1)` - as we are using only a few variables to store the results and counters.
