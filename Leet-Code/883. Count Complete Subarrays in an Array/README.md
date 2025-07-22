# 2799. Count Complete Subarrays in an Array

This problem involved about, you are given an array `nums` consisting of positive integers.
We call a `subarray` of an array complete if the following condition is satisfied:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-complete-subarrays-in-an-array/description)

**Key Insights :**<br/>

1. `Sliding Window Technique`: Use a sliding window to maintain a subarray containing all distinct elements.
2. `Hash Set for Distinct Elements`: First identify all distinct elements in the array to know what must be included in complete `subarrays`.
3. `Hash Map for Frequency Tracking`: Track element frequencies within the current window to determine when it contains all distinct elements.

**Algorithm Steps :**<br/>

1. `Identify Distinct Elements`:
    - Use a hash set to find all distinct elements in the array (`totalDistinct`).
2. `Sliding Window Initialization`:

    - Initialize left pointer (`l = 0`) and result counter (`res = 0`).
    - Use a hash map to track frequencies of elements in the current window.

3. `Expand Window`:

    - For each element at index `i`, add it to the hash map and increment its count.

4. `Shrink Window`:

    - While the window contains all distinct elements:
        - Add all valid `subarrays` ending at current index to the result.
        - Move the left pointer right, decrementing counts and removing elements if their count reaches zero.

5. `Return Result`: The accumulated count of complete `subarrays`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - for set construction, for the main loop.
-   Space-Complexity: `O(n)` - where n is the number of distinct elements.
