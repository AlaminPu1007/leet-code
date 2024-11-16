# 1829. Maximum XOR for Each Query

This problem involved about, you are given a sorted array `nums` of n non-negative integers and an integer maximumBit. You want to perform the following query n times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-xor-for-each-query/description)

**Approach :**<br/>

1. `Calculate Mask Bit`: We need to maximize the XOR result with a number that has up to `maximumBit` bits. We can achieve the maximum XOR with `maskBit = (1 << maximumBit) - 1`, which represents a number where all `maximumBit` bits are `1` (e.g., for `maximumBit = 3`, `maskBit = 111` in binary).

2. `Calculate Cumulative XOR (xorSum)`:

    - Initialize `xorSum` as `0`.
    - Iterate through `nums` to compute the XOR of all elements, storing the cumulative result in `xorSum`.

3. `Construct Result Array `res` in Reverse`:

    - For each position `i` from the end of `nums`:
        - Calculate the maximum XOR value possible with `xorSum` by using `xorSum ^ maskBit`.
        - Remove the last element from `xorSum` by XORing `xorSum` with `nums[i]`.
        - Add the computed value to `res`.

4. return res.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of `nums`, since we loop over `nums` twice.
-   Space-Complexity: `O(n)` - as we store results in the output vector `res`.
