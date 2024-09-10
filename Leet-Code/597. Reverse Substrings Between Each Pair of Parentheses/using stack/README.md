# 1190. Reverse Substrings Between Each Pair of Parentheses

This problem involved about, you are given a string s that consists of lower case English letters and brackets.<br/>
Reverse the strings in each pair of matching parentheses, starting from the innermost one.

## Problem description

For better problem description, please visit [LeetCode](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/)

**Approach :**<br/>

The goal is to reverse substrings within each pair of parentheses in a given string. Given a string `s` containing lowercase English characters and parentheses, we need to reverse the characters inside each pair of matching parentheses starting from the innermost one.

**Algorithm :**<br/>

1. Initialize an empty stack to keep track of the positions of the opening parentheses.

2. Initialize an empty string `res` to build the resulting string.

3. Iterate through each character `ch` in the string `s`:

    - If `ch` is an opening parenthesis `'('`, push the current size of `res` onto the stack.
    - If `ch` is a closing parenthesis `')'`, pop the top element from the stack, which gives the position of the corresponding opening parenthesis. Reverse the substring in `res` from this position to the end.
    - If `ch` is a lowercase English letter, append it to `res`.

4. Return the resulting string `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k)` - where `n` is the length of the string and `k` is the total length of the substrings that get reversed. The operations inside the loop take linear time, and the reversal operation is also linear in the length of the substring.

-   Space-Complexity: `O(n)` - for the stack and the resulting string `res`.