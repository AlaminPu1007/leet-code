# 567. Permutation in String

This problem involved about, given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/permutation-in-string/description/)

**Approach :**<br/>

#### Step 1: Use a Sliding Window

-   If the length of `s1` is greater than `s2`, return `false` immediately since `s1` cannot be a substring.
-   Use two frequency arrays:
    1. `freq1`: Frequency of characters in `s1`.
    2. `freq2`: Frequency of characters in the current window of length `n` (length of `s1`) in `s2`.

#### Step 2: Initialize Frequencies

-   Count the frequencies of characters in `s1` and the first window of size `n` in `s2`.

#### Step 3: Use a Matches Variable

-   Use a variable `matches` to track how many characters have matching frequencies in both `s1` and `s2` windows.
-   If all 26 characters match, it means a permutation of `s1` is found in `s2`.

#### Step 4: Sliding Window Over `s2`

-   Move the sliding window from left to right, updating the frequency of characters entering and exiting the window.
-   If after any movement, the `matches` count is equal to 26 (i.e., all characters match), return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(26 + (n))` - Building the initial frequency array
-   Space-Complexity: `O(26) => O(1)` - as the size of the frequency arrays is constant (26 characters).
