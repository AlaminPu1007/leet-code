# 2220. Minimum Bit Flips to Convert Number

This problem involved about, a bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/)

**Approach :**<br/>

1. `Binary Comparison:`

    - Compare the bits of `start` and `goal` from the least significant bit (LSB) to the most significant bit (MSB).
    - For each bit, check if the bits differ. If they do, it means a bit flip is needed.

2. `Bitwise Operations:`

    - Use bitwise AND (`&`) to check the LSB of both `start` and `goal`.
    - Shift both numbers to the right by 1 bit using the right shift operator (`>>`).
    - Repeat this process until both numbers are reduced to 0.

3. `Count Bit Flips:`

    - For every bit that differs between `start` and `goal`, increment a counter.

4. `Return the Result:`
    - Once all bits are processed, return the count of bit flips.

**Algorithm :**<br/>

1. Initialize a variable `count` to 0 to keep track of the number of bit flips.
2. While either `start` or `goal` is greater than 0:
    - Check if the least significant bit (LSB) of `start` is different from the LSB of `goal` using the bitwise AND operation.
    - If the bits are different, increment the `count`.
    - Right shift both `start` and `goal` by 1 to move to the next bit.
3. Return the `count` after all bits have been processed.

**Complexity Analysis :**<br/>

-   Time-Complexity : `O(log(n))` - The number of iterations is proportional to the number of bits in the larger of the two numbers (`start` and `goal`).
-   Space-Complexity : `O(1)` - Only a constant amount of space is used for variables such as `count`, and no additional data structures are required.