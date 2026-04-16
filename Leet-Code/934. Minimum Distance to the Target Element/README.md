# 1848. Minimum Distance to the Target Element

This problem involved about, given an integer array `nums (0-indexed)` and two integers target and start, find an index i such that `nums[i] == target and abs(i - start)` is minimized. Note that `abs(x)` is the absolute value of `x`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-distance-to-the-target-element/description/)

**Approach :**<br/>

1. Initialize a variable `res` with a large value (`INT_MAX`)
2. Traverse the array:
    - If `nums[i] == target`:
        - Compute distance: `abs(i - start)`
        - Update the minimum result
3. Return the minimum distance found

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterate over the `nums` array.
-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will grow by input size.
