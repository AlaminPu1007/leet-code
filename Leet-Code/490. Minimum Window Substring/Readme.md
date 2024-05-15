## 76. Minimum Window Substring

This problem involved about, given two strings s and t of lengths m and n respectively, return the minimum window
substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "". <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-window-substring/description/)

**Approach :**<br/>

1. Initialize variables `resLen` to store the result indices, `left` to track the left boundary of the window, and `res` to store the minimum window length.
2. Create hash-maps `countT` and `window` to store character counts for `t` and the current window, respectively.
3. Iterate through string `s` using the right pointer `r`.
    - Update the `window` hash-map with the current character `c`.
    - If `c` is in `t` and the count in `window` matches the count in `countT`, increment `have`.
    - Check if `have` equals the total distinct characters in `t` (`need`).
    - If `have` equals `need`, update the result if the current window length is smaller than the current minimum.
4. Move the left pointer `left` to shrink the window until `have` is less than `need`.
5. Repeat steps 3-4 until the right pointer reaches the end of the string.
6. Return the minimum window substring using the result indices.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of string `s`. Both the left and right pointers traverse the string once.

-   Space-Complexity: `O(k)` - where `k` is the number of distinct characters in string `t`. The hash-maps `countT` and `window` store at most `k` characters.
