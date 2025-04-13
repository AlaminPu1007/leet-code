# 1415. The k-th Lexicographical String of All Happy Strings of Length n

This problem involved about, a happy string is a string that: consists only of letters of the set `['a', 'b', 'c']`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/)

**Approach :**<br/>

1. Use `backtracking` to generate all valid happy strings.
2. Start with an empty string and recursively append `'a'`, `'b'`, or `'c'`, ensuring that the last character is not repeated.
3. Once a string of length `n` is formed, store it in a result list.
4. If the number of generated strings is at least `k`, return the `k`-th string (1-based index). Otherwise, return an empty string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * 2^n)` - In the backtracking, we explore 3 options for the first character of the string and 2 options for the next character at each of the following steps. This is similar to exploring all nodes in a binary tree with n levels, resulting in a time complexity of `O(2^n)`for generating the strings.
-   Space-Complexity: `O(2^n)` - The result list stores up to `O(2^n)`.
