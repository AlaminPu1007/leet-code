# 1695. Maximum Erasure Value

This problem involved about, you are given an array of positive integers `nums` and want to erase a `subarray` containing unique elements. The score you get by erasing the sub`array is equal to the sum of its elements.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-erasure-value/description/)

**Key Insights :**<br/>

1. `Sliding Window Technique`: We can maintain a window of unique elements while expanding and shrinking as needed.
2. `Hash Map Tracking`: Use a hash map to track the frequency of elements in the current window.
3. `Sum Maintenance`: Keep a running sum of the current window and update the maximum sum when we find a valid window.

**Algorithm Steps :**<br/>

1. `Initialize`:
    - Left pointer `l` to track window start
    - Running sum `sum` to track current window sum
    - Hash map `Map` to track element frequencies
    - Result variable `res` to store maximum sum found
2. `Expand Window`:
    - For each element, add to running sum
    - Check if element already exists in current window
3. `Shrink Window`:
    - If duplicate found, move left pointer forward
    - Subtract elements from sum as they leave the window
    - Update frequency map
4. `Update Result`:
    - After ensuring window has all unique elements, update maximum sum
5. `Return` the maximum sum found

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - each element processed at most twice - once when added, once when removed.
-   Space-Complexity: `O(k)` - where `k` is number of unique elements.
