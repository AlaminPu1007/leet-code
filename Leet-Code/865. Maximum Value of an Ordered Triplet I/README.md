# 2873. Maximum Value of an Ordered Triplet I

This problem involved about, you are given a 0-indexed integer array `nums`.
Return the maximum value over all triplets of indices `(i, j, k)` such that `i < j < k`. If all such triplets have a negative value, return 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/)

**Key Insights :**<br/>

1. `Triplet Structure`: The expression `(nums[i] - nums[j]) * nums[k]` suggests we need to maximize both `(nums[i] - nums[j])` and `nums[k]`.
2. `Optimal Elements`: For each `j`, the best `i` would be the maximum element to the left of `j`, and the best `k` would be the maximum element to the right of `j`.
3. `Efficient Calculation`: We can precompute prefix maximums (for `i`) and suffix maximums (for `k`) to avoid nested loops.

**Algorithm Steps :**<br/>

1. `Prefix Maximum Array`: Compute an array where each element at index `i` is the maximum value from the start up to `i`.
2. `Suffix Maximum Array`: Compute an array where each element at index `i` is the maximum value from `i` to the end.
3. `Calculate Triplet Values`: For each `j`, use the prefix and suffix arrays to get the best `i` and `k`, then compute the triplet value.
4. `Return Maximum Value`: Track the maximum triplet value encountered during the iteration.

**Complexity Analysis :**<br/>

-   Time-Complexity: `o(n ^ 2)` - We are using nested loop.
-   Space-Complexity: `O(1)` - No additional space are used only constant amount of spaces are used.
