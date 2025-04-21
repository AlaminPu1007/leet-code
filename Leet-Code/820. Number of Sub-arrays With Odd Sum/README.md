# 1524. Number of Sub-arrays With Odd Sum

This problem involved about, given an array of integers arr, return the number of `subarrays` with an odd sum.
Since the answer can be very large, return it modulo 10^9 + 7.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array of integers `arr`.
    - The goal is to count the number of subarrays with an `odd sum`.
    - A subarray is a contiguous part of the array.

2. `Algorithm`:

    - Use a `prefix sum` approach to calculate the sum of subarrays efficiently.
    - Track the number of `even` and `odd` prefix sums encountered so far.
    - If the current prefix sum is `even`, the number of subarrays ending at the current index with an odd sum is equal to the number of `odd prefix sums` encountered so far.
    - If the current prefix sum is `odd`, the number of subarrays ending at the current index with an odd sum is equal to the number of `even prefix sums` encountered so far plus 1 (for the subarray starting from the beginning).

3. `Steps`:
    - Initialize `totalSum` to track the prefix sum.
    - Initialize `oddCount` and `evenCount` to track the number of odd and even prefix sums encountered so far.
    - Initialize `res` to store the result.
    - Iterate through the array:
        - Update `totalSum` by adding the current element.
        - If `totalSum` is even:
            - Add `oddCount` to `res` (since subarrays ending at the current index with an odd sum are formed by subtracting an odd prefix sum from the current even prefix sum).
            - Increment `evenCount`.
        - If `totalSum` is odd:
            - Add `1 + evenCount` to `res` (since subarrays ending at the current index with an odd sum are formed by subtracting an even prefix sum from the current odd prefix sum, plus the subarray starting from the beginning).
            - Increment `oddCount`.
    - Return the result modulo `1e9 + 7`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array
-   Space-Complexity: `O(1)` - as only a few variables are used.
