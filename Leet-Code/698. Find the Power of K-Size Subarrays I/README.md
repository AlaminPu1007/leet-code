# 3254. Find the Power of K-Size Subarrays I

This problem involved about, you are given an array of integers `nums` of length n and a positive integer `k`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/description/)

**Approach :**<br/>

1. `Two Pointers Sliding Window`:

    - Use a sliding window of size `k` to scan through the array.
    - Maintain a count of consecutive elements within the current window.

2. `Consecutive Count`:

    - Increment `consecutive_count` when a consecutive relationship (e.g., `nums[i] == nums[i - 1] + 1`) is detected.
    - Decrement `consecutive_count` when the window slides out of range and the leftmost element is removed.

3. `Check Valid Subarray`:
    - When the window reaches size `k`:
        - If the count of consecutive elements equals `k`, append the last element of the `subarray` (`nums[i]`) to the result.
        - Otherwise, append `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - as the array is traversed once with a sliding window.
-   Space-Complexity: `O(1)` - excluding the result array.
