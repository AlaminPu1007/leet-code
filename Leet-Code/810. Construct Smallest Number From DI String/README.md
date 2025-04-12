# 2375. Construct Smallest Number From DI String

This problem involved about, you are given a 0-indexed string pattern of length n consisting of the characters 'I' meaning increasing and 'D' meaning decreasing.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/construct-smallest-number-from-di-string/description/)

**Approach :**<br/>

1. Use a `stack` to manage numbers while iterating through the `pattern` string.
2. For each index `i` from `0` to `n`:
    - Push `i + 1` onto the stack.
    - If the current character is `'I'` or we are at the end of the pattern, start `popping` elements from the stack and append them to the result.
3. This ensures that the smallest lexicographical order is maintained while satisfying the `'D'` pattern by delaying the popping operation.

**Complexity Analysis :**<br/>

-   Time-Complexity: `o(n)` - we iterate over `n` indices.
-   Space-Complexity: `O(n)` - stack holds at most `O(n)` elements.
