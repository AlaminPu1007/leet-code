# 2425. Bitwise XOR of All Pairings

This problem involved about, you are given two 0-indexed arrays, `nums1` and `nums2`, consisting of non-negative integers. There exists another array, `nums3`, which contains the bitwise XOR of all pairings of integers between `nums1` and `nums2` (every integer in `nums1` is paired with every integer in `nums2` exactly once).

## Problem description

For better problem description please visit [LeetCode Page](https://leetcode.com/problems/bitwise-xor-of-all-pairings/description)

**Approach :**<br/>

1. `Check Array Sizes`:

    - Let `n` and `m` be the sizes of `nums1` and `nums2`, respectively.
    - If both `n` and `m` are even, the XOR of all pairs is `0` because all contributions cancel out.
    - Otherwise, compute the XOR contributions based on the parity of `n` and `m`:
        1. If `n` is odd, include all elements of `nums2` in the result.
        2. If `m` is odd, include all elements of `nums1` in the result.
        3. If both are odd, include elements from both arrays in the result.

2. `Iterate and Compute XOR`:

    - Use simple loops to XOR elements from `nums1` and `nums2` based on the identified conditions.

3. `Return the Result`:
    - Return the computed XOR result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - Each loop to compute XOR contributions runs in `O(n)` for `nums1` or `O(m)` for `nums2`.
-   Space-Complexity: `O(1)` - The approach uses a constant amount of extra space.
