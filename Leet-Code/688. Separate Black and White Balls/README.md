# 2938. Separate Black and White Balls

This problem involved about, there are n balls on a table, each ball has a color black or white.<br/>
You are given a 0-indexed binary string s of length n, where 1 and 0 represent black and white balls, respectively.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/separate-black-and-white-balls/description/)

**Approach :**<br/>

This problem can be solved by counting how many `'1'` characters are out of place in relation to the `'0'` characters:

-   As we traverse the string from left to right:
    1. For each `'1'` encountered, we increment a counter `count` to keep track of how many `'1'` characters we've seen so far.
    2. For each `'0'` encountered, we know that this `'0'` is out of place with respect to all previous `'1'` characters, and thus we add `count` to the result `res`.

**Algorithm :**<br/>

1. Initialize two variables:
    - `count` to track how many `'1'` characters we've seen so far.
    - `res` to store the total number of steps (or swaps) required.
2. Traverse the string:
    - If the character is `'1'`, increment `count`.
    - If the character is `'0'`, add `count` to the result `res`.
3. Return `res` after traversing the string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string. We are simply iterating over the string once.

-   Space-Complexity: `O(1)` - as we only use two variables (`count` and `res`) to store intermediate results.