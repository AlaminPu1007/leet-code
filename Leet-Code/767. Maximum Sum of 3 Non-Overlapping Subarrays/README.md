# 689. Maximum Sum of 3 Non-Overlapping Subarrays

This problem involved about, given an integer array nums and an integer k, find three non-overlapping subarrays of length k with maximum sum and return them.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/description)

**Approach :**<br/>

1. `Precompute Subarray Sums`:

    - Use a sliding window to calculate the sum of all subarrays of size `k` in `nums`.
    - Store these sums in an array `sums`.

2. `Dynamic Programming`:

    - Define `dp(idx, rem)` as the maximum sum achievable starting from index `idx` with `rem` subarrays left to pick.

3. `Reconstruct Solution`:

    - Use DFS to backtrack and identify the indices of the `subarrays` that contribute to the maximum sum.

4. `Edge Cases`:
    - Handle cases where `nums` has fewer elements than `3 * k`.
    - Handle cases where multiple valid answers exist and the lexicographically smallest one must be chosen.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The DP computation and DFS reconstruction also take `O(n)`.
-   Space-Complexity: `O(n)` - Memoization table requires.
