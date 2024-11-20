# 2914. Minimum Number of Changes to Make Binary String Beautiful

This problem involved about, you are given a 0-indexed binary string s having an even length.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/)

**Approach :**<br/>

1. `Initialize` the result counter `res` to 0, which keeps track of the number of changes required.
2. `Iterate` through each character in the string `s`:
    - Track the starting index of the current character sequence with `left`.
    - If the current character `s[i]` is different from `s[left]`, check if `i` is an odd index. If it is, increment `res` by 1 because this character needs to match the alternating pattern.
    - Update `left` to `i` to start tracking a new sequence.
3. `Return` `res` as the total minimum changes needed to make the string alternate.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We traverse the string once, where `n` is the length of `s`.
-   Space-Complexity: `O(1)` - we are not using an extra spaces that will increase with input size.
