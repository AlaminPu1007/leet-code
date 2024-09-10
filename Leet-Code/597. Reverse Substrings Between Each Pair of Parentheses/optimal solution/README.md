# 1190. Reverse Substrings Between Each Pair of Parentheses

This problem involved about, you are given a string s that consists of lower case English letters and brackets.
Reverse the strings in each pair of matching parentheses, starting from the innermost one.

## Problem description

For better problem description, please visit [LeetCode](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/)

**Approach :**

The goal is to reverse substrings within each pair of parentheses in a given string. Given a string `s` containing lowercase English characters and parentheses, we need to reverse the characters inside each pair of matching parentheses starting from the innermost one.

**Algorithm :**

1. Initialize an empty stack to keep track of the positions of the opening parentheses.

2. Initialize an empty string `res` to build the resulting string.

3. Initialize an unordered map `pairs` to hold the matching indices of opening and closing parentheses.

4. Iterate through each character in the string `s`:

    - If the character is an opening parenthesis `'('`, push its index onto the stack.

    - If the character is a closing parenthesis `')'`, pop the top element from the stack, which gives the index of the corresponding opening parenthesis. Store these indices in the `pairs` map.

5. Initialize a variable `i` to 0 and `direction` to 1 to iterate through the string.

6. Iterate through the string `s` while `i` is within the bounds of the string:

    - If the character is either an opening or closing parenthesis, update `i` to the index of its matching parenthesis using the `pairs` map and reverse the direction.

    - If the character is a lowercase English letter, append it to `res`.

    - Update `i` by adding `direction` to move forward or backward based on the current direction.

7. Return the resulting string `res`.

**Complexity Analysis :**

-   Time-Complexity: `O(n)` - where `n` is the length of the string. Each character is processed a constant number of times.

-   Space-Complexity: `O(n)` - for the stack, resulting string `res`, and the `pairs` map.