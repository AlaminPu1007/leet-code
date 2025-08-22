# 2016. Maximum Difference Between Increasing Elements

This problem involved about, given a 0-indexed integer array nums of size n, find the maximum difference between `nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-difference-between-increasing-elements/description)

**Key Insights :**<br/>

1. `Single Pass Solution`: Track the minimum element encountered so far
2. `Greedy Comparison`: For each element, compare with the current minimum
3. `Early Termination`: No need for nested loops - optimal difference can be found in one pass

**Algorithm Steps :**<br/>

1. `Initialize`:

    - Set result to -1 (default if no valid pair found)
    - Track minimum element as first array element

2. `Iterate Through Array`:

    - For each subsequent element:
        - If larger than current minimum, update result with potential new maximum
        - Otherwise, update current minimum

3. `Return Result`: The maximum difference found or -1 if none

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is array size.
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces that will grow with input size.
