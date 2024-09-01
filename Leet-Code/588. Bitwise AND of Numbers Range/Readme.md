# 201. Bitwise AND of Numbers Range

This problem involved about, given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/bitwise-and-of-numbers-range/description)

**Approach :**<br/>

1. We right shift both left and right until they become equal. This removes the differing lower bits.
2. Keep track of how many times we shift the numbers.
3. Once left and right are equal, left shift left by the number of shifts performed to get the final result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` -because we are effectively finding the common prefix bits, which is determined by the number of bits in the larger of the two numbers.
-   Space-Complexity: `O(1)` - as we are using a constant amount of extra space.