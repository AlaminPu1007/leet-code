# 3223. Minimum Length of String After Operations

This problem involved about, you are given a string s. You can perform the following process on s any number of times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-length-of-string-after-operations/description)

**Approach :**<br/>

1. `Input Analysis`:

    - The string `s` is given, with a length `n`.
    - The string consists of lowercase English letters (`a` to `z`).

2. `Frequency Calculation`:

    - Create a frequency array `freq` of size 26 (for each lowercase letter).
    - Iterate through the string and update the frequency of each character.

3. `Determine Minimum Length`:

    1. Traverse the frequency array.
    2. For each character:
        - If the frequency is `0`, skip it (no contribution to the result).
        - If the frequency is `even`, add `2` to the result (indicating that the frequency can contribute without leaving a remainder).
        - If the frequency is `odd`, add `1` to the result (indicating the remainder of `1` after pairing the characters).

4. `Return the Result`:
    - After evaluating all characters, return the calculated `res` as the minimum length.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterating through the string to update the frequency array takes `O(n)`, where `n` is the length of the string.
-   Space-Complexity: `O(1)` - A fixed-size array of length 26 is used to store character frequencies. This consumes `O(1)` space.
