# 1574. Shortest Subarray to be Removed to Make Array Sorted

This problem involved about, given an integer array arr, remove a `subarray` (can be empty) from arr such that the remaining elements in arr are non-decreasing.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/)

**Approach :**<br/>

1. `Identify Valid Prefix and Suffix`:

    - We scan from the start to find the longest prefix that is already sorted in increasing order.
    - Similarly, we scan from the end to find the longest suffix that is sorted in increasing order.

2. `Calculate the Shortest Subarray to Remove`:

    - Initialize `res` as the length of the suffix that starts from the end and is in sorted order. This ensures a baseline of removing the subarray before this suffix, which leaves the sorted suffix intact.
    - Calculate `postfix_len` as the length of the valid sorted prefix from the start, and update `res` as the minimum between `res` and `postfix_len`.

3. `Check the Middle for Overlapping Subarrays`:
    - For the elements in the middle, find overlaps where the prefix merges into the suffix, keeping the order intact.
    - Adjust the `l` and `r` pointers to identify potential merging points.
    - Update `res` with the minimum length of an invalid subarray that lies between the prefix and suffix to remove, thus making the overall array sorted.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - as we only traverse the array a few times.
-   Space-Complexity: `O()` - no extra space is used.
