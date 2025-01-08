# 2270. Number of Ways to Split Array

This problem involved about, you are given a 0-indexed integer array `nums` of length n.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-ways-to-split-array/description)

**Approach :**<br/>

1. `Precompute Total Sum`:

    - Compute the total sum of the array.

2. `Iterate Through the Array`:

    - For each split index `i` (from `0` to `n-2`):
        - Add `nums[i]` to the running sum (`cur_sum`).
        - Subtract `nums[i]` from the remaining sum (`sum`).
        - Check if the current split satisfies the condition `cur_sum >= sum`.
        - Increment the result counter if the condition is satisfied.

3. `Return the Result`:
    - Return the count of valid splits.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - A single pass through the array is sufficient to compute the result.
-   Space-Complexity: `O(1)` - No additional space is used apart from variables for running totals and counters.
