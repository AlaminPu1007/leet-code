# 1671. Minimum Number of Removals to Make Mountain Array

This problem involved about, you may recall that an array arr is a mountain array if and only if:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/description/)

**Approach :**<br/>

1. `Calculate Longest Increasing and Decreasing Subsequences`:

    - For each element `nums[i]`, calculate:
        - `lcs[i]`: the length of the longest increasing subsequence ending at `i`.
        - `lds[i]`: the length of the longest decreasing subsequence starting at `i`.
    - We need `lcs[i] > 1` and `lds[i] > 1` to ensure that `nums[i]` can be the peak of the mountain.

2. `Dynamic Programming for LIS and LDS`:

    - `Longest Increasing Subsequence (LIS)`:
        - For each element, find all previous elements smaller than it and update `lcs[i]`.
    - `Longest Decreasing Subsequence (LDS)`:
        - For each element, find all following elements smaller than it and update `lds[i]`.

3. `Calculate Minimum Removals`:
    - For each valid peak element, calculate `n - lcs[i] - lds[i] + 1`, representing the minimum elements to remove to form a mountain.
    - Track the minimum removal count across all potential peaks.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - as we iterate through each element to build `lcs` and `lds`.

-   Space-Complexity: `O(n^2)` - for storing `lcs`, `lds`, and result arrays.
