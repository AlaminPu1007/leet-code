# 87. Scramble String

This problem involved about, given two strings `s1` and `s2`, determine if `s2` is a scrambled version of `s1`. A scrambled string is formed by splitting the original string into two non-empty substrings at any index and then swapping the two substrings.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/scramble-string/description)

**Approach :**<br/>

The problem is solved using a recursive approach with memoization to optimize performance. The idea is to check all possible ways to split the strings and recursively check if the resulting substrings are scrambled versions of each other. Memoization is used to store intermediate results and avoid redundant calculations.

**Algorithm :**<br/>

1. `Base Cases`:

    - If `s1` and `s2` are of different lengths, return `false`.
    - If `s1` and `s2` are the same, return `true`.

2. `Memoization`:

    - Use a hash map (`cache`) to store results of previously computed `subproblems`.
    - Create a unique key by concatenating `s1` and `s2` with a delimiter (e.g., `_`).
    - If the key exists in the cache, return the stored result.

3. `Recursive Case`:
    - For each possible split point `i` (from 1 to `n-1` where `n` is the length of `s1`):
        - `Swap Case`: Check if the first `i` characters of `s1` match the last `i` characters of `s2` and the remaining characters of `s1` match the first `n-i` characters of `s2`.
        - `No Swap Case`: Check if the first `i` characters of `s1` match the first `i` characters of `s2` and the remaining characters of `s1` match the remaining characters of `s2`.
    - If either case returns `true`, store the result in the cache and return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3)` - Since there are O(n^2) unique `subproblems`, and each subproblem takes `O(n)` time,

-   Space-Complexity: `O(n ^ 2)` - The total remains O(n²) since memoization dominates.
