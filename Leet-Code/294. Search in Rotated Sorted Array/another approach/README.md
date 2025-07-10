# 33. Search in Rotated Sorted Array

This problem involved about, there is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot `index k (1 <= k < nums.length)` such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7]` might be rotated at pivot index 3 and become `[4,5,6,7,0,1,2]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/search-in-rotated-sorted-array/description)

**Key Insights :**<br/>

1. `Binary Search Adaptation`: Regular binary search won't work directly due to rotation
2. `Pivot Finding`: First identify the rotation pivot (smallest element)
3. `Two-Phase Search`:
    - Search in the left sorted portion (before pivot)
    - Search in the right sorted portion (after pivot)
4. `Edge Handling`: Account for array rotation and empty/single-element cases

**Algorithm Steps :**<br/>

1. `Edge Cases`:
    - Handle empty array and single-element cases
2. `Find Pivot`:
    - Use modified binary search to find the smallest element's index
3. `Binary Search`:
    - Perform standard binary search on both sorted portions
4. `Result Combination`:
    - Return the valid index from either portion search

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - using binary search
-   Space-Complexity: `O(1)` - additional space
