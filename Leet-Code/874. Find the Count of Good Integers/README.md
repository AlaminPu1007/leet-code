# 3272. Find the Count of Good Integers

This problem involved about, you are given two positive integers n and k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-count-of-good-integers/description)

**Key Insights :**<br/>

1. `Palindrome Generation`: Only need to generate the first half of the number since palindromes are symmetric
2. `Divisibility Check`: Need to verify if the generated number is divisible by k
3. `Permutation Counting`: For numbers with repeated digits, we must account for duplicate permutations
4. `Leading Zero Prevention`: First digit cannot be zero

**Algorithm Steps :**<br/>

1. `Precompute Factorials`: Calculate factorials up to 10 for permutation counting
2. `Generate Palindromes`: Recursively generate all possible palindromic numbers
3. `Check Divisibility`: Verify if generated palindrome is divisible by k
4. `Count Valid Permutations`:
    - Calculate total permutations of the digits
    - Subtract permutations with leading zeros
5. `Memoization`: Store seen digit patterns to avoid duplicate calculations

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(9 * 10 ^ ((n + 1) / 2) * n)` - for palindrome generation & per number (string conversion).
-   Space-Complexity: `O(10 ^ ((n + 1) / 2))` - in worst case.
