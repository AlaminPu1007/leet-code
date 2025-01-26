# 3097. Shortest Subarray With OR at Least K II

This problem involved about, you are given an array `nums` of non-negative integers and an integer k.
An array is called special if the bitwise OR of all of its elements is at least k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/description/)

**Approach :**<br/>

1. `Sliding Window`:
    - Use two pointers, `l` (left) and `i` (right), to represent a sliding window over the array `nums`.
    - Maintain a bit count array `bits` that tracks the number of occurrences of each bit set to 1 for all numbers currently in the window.
2. `Bitwise Operations`:
    - For each number in `nums`, update the bit count array to reflect the presence of set bits (1s).
    - Calculate the OR of the current window by checking if any bit position has a count greater than 0.
3. `Contract the Window`:

    - Once the OR of the window is greater than or equal to `k`, attempt to shrink the window by moving the left pointer `l` to the right while ensuring that the OR value remains valid (i.e., greater than or equal to `k`).
    - Track the smallest window length found during this process.

4. `Result`:
    - The result is the smallest length of the valid window where the OR is greater than or equal to `k`. If no such window exists, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm processes each element of the array and for each element, checks the bits (up to 32 bits).

-   Space-Complexity: `O(1)` - The `bits` array is fixed in size (32), and no extra space is used.
