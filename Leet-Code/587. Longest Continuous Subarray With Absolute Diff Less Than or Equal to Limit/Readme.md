# 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit

This problem involved about, given an array of integers `nums` and an integer limit, return the size of the longest non-empty `subarray` such that the absolute difference between any two elements of this `subarray` is less than or equal to limit.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/description)

**Approach :**<br/>

1. **Sliding Window with Heaps**: Use a sliding window approach combined with two heaps to maintain the maximum and minimum values within the current window.
2. **Max and Min Heaps**:
    - `maxHeap`: A max-heap to track the maximum value within the current window.
    - `minHeap`: A min-heap to track the minimum value within the current window.
3. **Expand and Contract the Window**:
    - Expand the window by adding the current element to both heaps.
    - Contract the window if the difference between the maximum and minimum values exceeds the given limit by updating the `left` pointer and removing invalid elements from the heaps.
4. **Track the Result**: Update the result with the length of the current valid window.

<br/>
<br/>

**Algorithm :**<br/>

1. Initialize `maxHeap` and `minHeap` as priority queues.
2. Initialize `left` pointer to 0 and `res` to 0 to store the result.
3. Iterate through the array `nums`:
    - Push the current element and its index to both `maxHeap` and `minHeap`.
    - While the difference between the maximum and minimum values in the heaps exceeds `limit`:
        - Update `left` to `min(maxHeap.top().second, minHeap.top().second) + 1`.
        - Remove elements from `maxHeap` and `minHeap` that are no longer within the window defined by `left`.
    - Update `res` with the maximum length of the valid window.
4. Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Each element is pushed and popped from the heaps at most once: `O(n log n)`, where `n` is the number of elements in `nums`.

-   Space-Complexity: `O(n)` - for the heaps and auxiliary storage.