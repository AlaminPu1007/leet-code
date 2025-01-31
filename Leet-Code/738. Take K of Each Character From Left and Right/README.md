# 2516. Take K of Each Character From Left and Right

This problem involved about, you are given a string s consisting of the characters 'a', 'b', and 'c' and a non-negative integer k. Each minute, you may take either the leftmost character of s, or the rightmost character of s.

## Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/description/)

**Approach :**<br/>

1. `Count Total Occurrences`:

    - Count the total number of occurrences of `'a'`, `'b'`, and `'c'` in the string.
    - If any character occurs fewer than `k` times, return `-1`.

2. `Sliding Window for Longest Valid Substring`:

    - Use a sliding window to find the longest contiguous substring where removing this substring leaves at least `k` occurrences of each character.
    - Keep track of the counts of characters in the window using an array `window`.

3. `Shrink the Window`:

    - If removing the window results in fewer than `k` occurrences of any character, move the left boundary of the window to shrink its size.

4. `Result`:
    - The length of the prefix and suffix combined is `n - maxWindow`, where `maxWindow` is the size of the largest valid window.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Sliding window involves a single traversal of the string, O(n).

-   Space-Complexity: `O(1)` - Fixed-size arrays (`count` and `window`) are used to track character counts.
