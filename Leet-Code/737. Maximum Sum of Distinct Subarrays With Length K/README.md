# 2461. Maximum Sum of Distinct Subarrays With Length K

This problem involved about, you are given an integer array `nums` and an integer k. Find the maximum `subarray` sum of all the `subarrays` of `nums` that meet the following conditions

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/)

**Approach :**<br/>

1. `Use a Sliding Window`:

    - Maintain a window of size up to `k` to calculate the sum of elements.
    - Ensure the elements in the current window are unique using a hash map (`Count`).

2. `HashMap to Track Frequency`:

    - Keep track of the frequency of each element within the window using `Count`.
    - If an element's frequency becomes `0` after being removed, erase it from the hash map.

3. `Adjust Window Size`:

    - If the current window size exceeds `k`, shrink the window by moving the left pointer (`l`) and updating the sum and `Count`.

4. `Check for Valid Subarray`:
    - Only update the result (`res`) when the window contains exactly `k` unique elements (i.e., `Count.size() == k`).

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` -
-   Space-Complexity: `O(n)` -
