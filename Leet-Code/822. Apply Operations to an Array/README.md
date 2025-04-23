# 2460. Apply Operations to an Array

This problem involved about, you are given a 0-indexed array `nums` of size n consisting of non-negative integers.
You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of `nums`:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/apply-operations-to-an-array/description)

**Approach :**<br/>

1. `First pass`: Iterate through `nums`, and for each `equal adjacent pair`, update the first element (`nums[i] *= 2`) and set the second element to `0`.
2. `Second pass`: Shift all `non-zero elements` to the left while keeping their relative order and fill the remaining positions with `0`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` -  since we iterate once to merge numbers
-   Space-Complexity : `O(1)` - we are not using any kind of extra spaces.
