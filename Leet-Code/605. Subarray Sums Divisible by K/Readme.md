# 974. Subarray Sums Divisible by K

This problem involved about, given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/subarray-sums-divisible-by-k/description/)

**Approach :**<br/>

1. **Initialization**:

    - Calculate the size `n` of the `nums` array.
    - Create an unordered map `reminderCount` to count the occurrences of each remainder when the prefix sum is divided by `k`.
    - Initialize the map with `reminderCount[0] = 1` to handle cases where the prefix sum itself is divisible by `k`.

2. **Iterate through the array**:

    - Maintain a running sum `sum` of the elements in the array.
    - For each element in the array, update the running sum.
    - Calculate the remainder `rem` when the running sum is divided by `k`.
        - To handle negative remainders, ensure that `rem` is always positive by adding `k` if `rem` is negative.
    - If the remainder `rem` is already in the `reminderCount` map, it means there are subarrays that sum up to a multiple of `k` between the previous occurrence and the current index.
    - Increment the count of subarrays by the count of the current remainder in the `reminderCount` map.
    - Update the `reminderCount` map with the current remainder.

3. **Return the result**:

    - Return the count of subarrays whose sums are divisible by `k`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterating through the array takes `O(n)` time.

-   Space-Complexity: `O(min(n, k))` - In the worst case, the hash map can contain at most `min(n, k)` unique remainders, where `n` is the size of the array.