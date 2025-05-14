# 1358. Number of Substrings Containing All Three Characters

This problem involved about, given a string s consisting only of characters a, b and c.
Return the number of substrings containing at least one occurrence of all these characters a, b and c.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description)

**Approach :**<br/>

1. `Use a sliding window approach` with a hash map (`unordered_map`) to count occurrences of 'a', 'b', and 'c'.
2. Expand the right boundary of the window until all three characters are included.
3. Once all three characters are in the window, `shift the left pointer (`l`)` while still maintaining all three characters in the window.
4. `Count valid substrings:`
    - Since `s[i...n]` is a valid substring when the window is valid, `add (n - i) to the result` for each step.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We expand and shrink the window at most once per character, leading to O(N) time complexity.
-   Space-Complexity: `O(1)` - No additional space are used.
