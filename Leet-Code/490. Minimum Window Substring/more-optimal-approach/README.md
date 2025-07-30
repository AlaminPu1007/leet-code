# 76. Minimum Window Substring

This problem involved about, given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-window-substring/description/)

**Key Insights :**<br/>

1. `Frequency Mapping`: First create a frequency map of all characters in `t`.
2. `Sliding Window`: Use two pointers to represent the current window in `s`.
3. `Count Tracking`: Maintain a count of unique characters from `t` that are fully satisfied in the current window.
4. `Window Adjustment`: Expand the window when more characters are needed, and shrink it when all characters are found to find the minimum valid window.

**Algorithm Steps :**<br/>

1. `Initialize Frequency Map`:
    - Create a frequency map of all characters in `t`.
    - Initialize `count` as the number of unique characters in `t`.
2. `Sliding Window`:
    - Expand the right pointer, updating frequencies and `count` when a required character is found.
    - When `count` reaches 0 (all characters found), try to shrink the window from the left:
        - Record the minimum window found
        - Adjust frequencies and `count` when moving the left pointer
3. `Result Extraction`:
    - Return the smallest valid window found, or empty string if none exists.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - where `m` is length of `t` and `n` is length of `s`.
-   Space-Complexity: `O(m)` - to store character frequencies.
