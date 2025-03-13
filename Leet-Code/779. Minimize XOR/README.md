# 2429. Minimize XOR

This problem involved about, given two positive integers num1 and num2, find the positive integer x such that:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimize-xor/description/)

**Approach :**<br/>

1. `Count the Number of Set Bits in `num2``:

    - Use a helper function `countNoOfBits` to count the number of bits set to `1` in `num2`. This determines how many bits need to be set in `res`.

2. `Set Significant Bits of `num1``:

    - Traverse the bits of `num1` from the most significant bit (31st bit) to the least significant bit (0th bit).
    - For each bit that is set in `num1`, set the corresponding bit in `res` and decrement the count of remaining bits to set.

3. `Set Remaining Bits in `res``:

    - Traverse the bits from the least significant bit (0th bit) to the most significant bit (31st bit).
    - For each unset bit in `num1`, set the corresponding bit in `res` until the required number of bits in `res` are set.

4. `Return the Result`:
    - Return the value of `res` after satisfying the above constraints.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n)) + O(32)` - constant time, as the bit width is fixed to 32. Count no of set bits can have `O(log(n))` time complexity.
-   Space-Complexity: `O(1)` - No additional data structures are used apart from a few integer variables.
