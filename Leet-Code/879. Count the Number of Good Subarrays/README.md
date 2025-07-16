# 2537. Count the Number of Good Subarrays

This problem involved about, given an integer array `nums` and an integer k, return the number of good `subarrays` of `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-number-of-good-subarrays/description)

**Key Insights :**<br/>

1. `Sliding Window Technique`: Use a sliding window to maintain a `subarray` with at least `k` good pairs.
2. `Hash Map for Frequency Tracking`: Track the frequency of each number to efficiently calculate the number of good pairs.
3. `Incremental Pair Counting`: For each new element, update the pair count based on how many times we've seen it before.

**Algorithm Steps:**<br/>

1. `Initialize Variables`:

    - `left` pointer for the window start
    - `countPairs` to track current good pairs
    - `res` to accumulate the result
    - Hash map to store element frequencies

2. `Expand Window`:

    - For each new element, update `countPairs` by adding its previous occurrences
    - Increment its count in the hash map

3. `Shrink Window`:

    - While `countPairs` ≥ `k`:
        - Add all valid `subarrays` ending at current index to `res`
        - Decrement frequency of `nums[left]`
        - Reduce `countPairs` by the updated frequency
        - Move `left` pointer right

4. `Return Result`: The accumulated count of good `subarrays`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the array size.
-   Space-Complexity: `O(n)` - we are using an extra hash-map.
