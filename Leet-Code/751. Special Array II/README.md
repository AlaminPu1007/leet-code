# 3152. Special Array II

This problem involved about, an array is considered special if every pair of its adjacent elements contains two numbers with different parity.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/special-array-ii/description/)

**Approach :**<br/>

1. `Precompute Prefix Information`:

    - Create a `prefixSum` array where:

        - `prefixSum[i]` represents the length of the longest prefix ending at index `i` with alternating parities.

    - If `nums[i]` and `nums[i-1]` have the same parity, the prefix sum remains the same; otherwise, it increments by `1`.

2. `Process Queries`:

    - For each query `[start, end]`:
        - Calculate the window size as `end - start + 1`.
        - Check if `prefixSum[end]` is greater than or equal to the window size:
            - If true, the subarray is special; otherwise, it is not.

3. `Return Results`:
    - Store `true` or `false` for each query in the result list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the `nums` array.
-   Space-Complexity:`O(n)` - for the `prefixSum` array.
