# 2825. Make String a Subsequence Using Cyclic Increments

This problem involved about, you are given two 0-indexed strings str1 and str2.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/)

**Approach :**<br/>

1. `Two-Pointer Technique`:

    - Use pointers `i` and `j` to traverse `str1` and `str2` respectively.
    - Start with both pointers at 0.

2. `Matching Characters`:

    - For each character in `str1`:
        - If the character matches the current character in `str2` (based on the matching rules), move the pointer `j` to the next character in `str2`.

3. `End Condition`:

    - If `j` reaches the length of `str2`, return `true` (all characters in `str2` are matched in order).
    - If the traversal of `str1` completes without matching all characters of `str2`, return `false`.

4. `Edge Case`:
    - If the length of `str1` is less than `str2`, return `false` immediately.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - Each character in both strings is processed at most once
-   Space-Complexity: `O(1)` - Only a few variables are used for pointers and loop control.
