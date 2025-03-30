# 1752. Check if Array Is Sorted and Rotated

This problem involved about, given an array `nums`, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description)

**Approach :**<br/>

1. `Tracking Sorted Segments`

    - Iterate through the array (considering it circular) for `2 * n` elements.
    - Maintain a `count` of increasing elements.
    - If `count` reaches `n`, the array is sorted in some rotation.

2. `Handling Edge Cases`
    - If `n == 1`, return `true` since a single-element array is always sorted.
    - The loop extends `2 * n` to handle the circular property of the array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - since we traverse the array once.
-   Space-Complexity: `O(1)` - as no extra space is used.
