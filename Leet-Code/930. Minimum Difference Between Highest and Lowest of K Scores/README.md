# 1984. Minimum Difference Between Highest and Lowest of K Scores

This problem involved about, you are given a 0-indexed integer array `nums`, where `nums[i]` represents the score of the ith student. You are also given an integer `k`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores)

**Approach :**<br/>

If the array is **sorted**, then:

-   Any group of `k` elements with the minimum difference will be `contiguous` in the sorted array.
-   This allows us to use a `sliding window` of size `k`.

For every window of size `k`, compute:

-   `difference = nums[i + k - 1] - nums[i]`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array.
-   Space-Complexity: `O(1)` - No extra space used apart from sorting (in-place)
