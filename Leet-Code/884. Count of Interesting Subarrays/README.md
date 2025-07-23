# 2845. Count of Interesting Subarrays

This problem involved about, you are given a 0-indexed integer array `nums`, an integer modulo, and an integer k.
Your task is to find the count of `subarrays` that are interesting.

## Problem description

For better problem description, please visit [LeetCode](https://leetcode.com/problems/count-of-interesting-subarrays/description)

**Key Insights :**<br/>

1. `Prefix Sum with Modulo`: Maintain a running count of elements satisfying the condition, tracking this count modulo `modulo`.
2. `Hash Map for Frequency`: Use a hash map to store the frequency of each prefix sum modulo `modulo` encountered.
3. `Modulo Arithmetic`: The key observation is that if `(prefix[j] - prefix[i]) % modulo == k`, then `subarray` `[i+1, j]` is interesting.

**Algorithm Steps :**<br/>

1. `Initialize Variables`:

    - `prefix` to track the running count of valid elements
    - `cnt` hash map to store prefix sums modulo `modulo` frequencies
    - `res` to accumulate the result count

2. `Process Array`:

    - For each element, update `prefix` if it satisfies `nums[i] % modulo == k`
    - Calculate the required complementary prefix sum using modulo arithmetic
    - Update result with the count of such complementary prefixes from the hash map
    - Update hash map with current prefix sum modulo `modulo`

3. `Return Result`: The accumulated count of interesting `subarrays`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the array size
-   Space-Complexity: `O(n)` - O(min(n, modulo)) in worst case (since modulo bounds unique prefix sums)
