# 719. Find K-th Smallest Pair Distance

This problem involved about, the distance of a pair of integers a and b is defined as the absolute difference between a and b.<br/>

Given an integer array `nums` and an integer k, return the kth smallest distance among all the pairs `nums[i] and nums[j] where 0 <= i < j < nums.length`. <br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/)

**Approach :**<br/>

1. `Frequency Array for Distance`:

    - Calculate the maximum value in `nums` to create a frequency array `disArr` where each index represents a possible distance between pairs.
    - Initialize `disArr` with zeroes.

2. `Generate All Possible Pairs`:

    - Iterate through all possible pairs in the array `nums`.
    - Calculate the absolute difference for each pair and increment the corresponding index in `disArr`.

3. `Determine the k-th Smallest Distance`:
    - Traverse the `disArr` from index `0` upwards. For each distance, decrement `k` by the frequency of that distance.
    - When `k` becomes zero or negative, the current index represents the k-th smallest distance.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 + d)` - where n is the number of elements in nums and d is the maximum difference between elements. The nested loop generates all pairs, and the traversal of disArr takes d time.
-   Space-Complexity: `O(n)` - for the distance frequency array, where `n` is the maximum difference between elements in nums.
