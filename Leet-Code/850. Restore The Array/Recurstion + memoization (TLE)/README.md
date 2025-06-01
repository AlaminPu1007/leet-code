# 1416. Restore The Array

This problem involved about, a program was supposed to print an array of integers. The program forgot to print whitespaces and the array is printed as a string of digits s and all we know is that all integers in the array were in the range [1, k] and there are no leading zeros in the array.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/restore-the-array/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a string `s` consisting of digits and an integer `k`.
    - The goal is to count the number of ways to split the string into substrings such that each substring represents a number less than or equal to `k`.
    - Leading zeros are not allowed in any substring.

2. `Algorithm`:

    - Use `recursion` to explore all possible ways to split the string.
    - For each index `i`, iterate through the string and form numbers starting at `i`.
    - If the number exceeds `k`, stop further exploration.
    - If the number is valid, recursively compute the number of ways to split the remaining substring.
    - Sum the results for all valid splits.

3. `Steps`:
    - Define a recursive function `Solved`:
        - If the current index `i` exceeds the string length, return `1` (valid split).
        - If the current character is `'0'`, return `0` (invalid split due to leading zero).
        - Initialize `ans` to `0`.
        - Iterate through the string starting at `i`:
            - Form the substring `numStr` from `i` to `j`.
            - If the integer value of `numStr` exceeds `k`, break the loop.
            - Recursively compute the number of ways to split the remaining substring and add it to `ans`.
        - Return `ans`.
    - Call the recursive function with the initial index `0`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^3)` - The overall time complexity is `O(n^3)`.
-   Space-Complexity: O(n)` - due to the DP array and the recursion stack.
