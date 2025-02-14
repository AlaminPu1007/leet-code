# 2981. Find Longest Special Substring That Occurs Thrice I

This problem involved about, you are given a string s that consists of lowercase English letters.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/description/)

**Approach :**<br/>

1. `Frequency Tracking for Each Character`:

    - Use a `topFreq` array to store the top three longest contiguous appearances of each character.
    - `topFreq[i]` is an array of size 3 that tracks the three largest window lengths for the character corresponding to `i = s[i] - 'a'`.

2. `Sliding Window`:

    - Iterate through the string while maintaining a running window length `windowLen` for contiguous characters.
    - If the current character matches the last seen character, increment the `windowLen`; otherwise, reset it to 1.
    - Update the character's `topFreq` array using a helper function that ensures only the top three lengths are kept.

3. `Calculate Result`:

    - For each character, find the minimum value among the top three recorded lengths in `topFreq`.
    - Return the maximum of these minimum values across all characters.

4. `Edge Cases`:
    - Strings where no character appears at least three times return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string.
-   Space-Complexity: `O(1)` - for the `topFreq` array of fixed size.
