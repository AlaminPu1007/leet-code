# 87. Scramble String

This problem involved about, given two strings `s1` and `s2`, determine if `s2` is a scrambled version of `s1`. A scrambled string is formed by splitting the original string into two non-empty substrings at any index and then swapping the two substrings.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/scramble-string/description)

**Approach :**<br/>

The problem can be solved using a recursive approach with memoization to optimize performance. The idea is to check all possible ways to split the strings and recursively check if the resulting substrings are scrambled versions of each other.

**Algorithm :**<br/>

1. `Base Cases`:

    - If `s1` and `s2` are of different lengths, return `false`.
    - If `s1` and `s2` are the same, return `true`.

2. `Recursive Case`:
    - For each possible split point `i` (from 1 to `n-1` where `n` is the length of `s1`):
        - `Swap Case`: Check if the first `i` characters of `s1` match the last `i` characters of `s2` and the remaining characters of `s1` match the first `n-i` characters of `s2`.
        - `No Swap Case`: Check if the first `i` characters of `s1` match the first `i` characters of `s2` and the remaining characters of `s1` match the remaining characters of `s2`.
    - If either case returns `true`, then `s2` is a scrambled version of `s1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2^ n)` - The number of unique `subproblems` is `O(n^2)` since we store results for `(s1, s2)` pairs. Each subproblem requires `O(n)` work for substring extraction. So, the total complexity is `O(2^n)`.
-   Space-Complexity: `O(n ^ 2)` - Recursion stack space & Substring storage overhead `O(n ^ 2)`.
