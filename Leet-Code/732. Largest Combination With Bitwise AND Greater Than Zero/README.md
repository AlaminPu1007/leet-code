# 2275. Largest Combination With Bitwise AND Greater Than Zero

This problem involved about, the bitwise AND of an array `nums` is the bitwise AND of all integers in `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description)

**Approach :**<br/>

1. `Count Set Bits at Each Position`:
    - Create an array `bitCounts` of size 32 (for 32 possible bit positions) to store the count of set bits for each position across all integers in `candidates`.
    - For each integer in `candidates`:
        - For each bit position, check if the bit is set (i.e., `item & 1` is true).
        - If it is set, increment the corresponding count in `bitCounts` and shift the integer right to check the next bit.
        - Update `res` to be the maximum value in `bitCounts`, which tracks the largest combination where a bit position is set across multiple integers.
2. `Return the Maximum Count`:
    - After iterating through all integers, `res` contains the maximum count of integers that share a common set bit.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * 32) = O(n)` - We process each bit of each integer in `candidates`, where `n` is the number of integers.

-   Space-Complexity: `O(1)` - We use a fixed-size array `bitCounts` of 32 elements.
