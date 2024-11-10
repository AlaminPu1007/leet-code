# 2486. Append Characters to String to Make Subsequence

This problem involved about, you are given two strings s and t consisting of only lowercase English letters. <br/>

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/)

**Approach :**<br/>

1. **Initialization**:

   - Initialize two pointers `i` and `j` to zero. Pointer `i` will iterate through string `s` and pointer `j` will iterate through string `t`.

2. **Iterate through Strings**:

   - While both pointers are within the bounds of their respective strings:
     - If the characters at `s[i]` and `t[j]` are equal, move the pointer `j` to the next character in `t`.
     - Always move the pointer `i` to the next character in `s`.

3. **Calculate Remaining Characters**:

   - After the loop, the pointer `j` indicates how many characters of `t` have been matched in `s`.
   - The difference between the length of `t` and `j` gives the number of characters that need to be appended to `s` to make `t` a subsequence.

**Complexity Analysis :**<br/>

- Time-Complexity:`O(n + m)` - where `n` is the length of `s` and `m` is the length of `t`. This is because each character in `s` and `t` is visited at most once.

- Space-Complexity: `O(1)` - since only a few integer variables are used for counting and pointer manipulation.