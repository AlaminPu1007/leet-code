# 1200. Minimum Absolute Difference

This problem involved about, given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-absolute-difference/description/)

**Approach :**<br/>

1. Sort the array
2. Compare adjacent elements
3. Track the minimum absolute difference
4. Store all pairs having that minimum difference

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting required `O(n * log(n))`.
-   Space-Complexity: `O(n * 2)` - for output or result array.
