# 409. Longest Palindrome

This problem involved about, given a string s which consists of lowercase or uppercase letters, return the length of the longest
palindrome that can be built with those letters.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-palindrome/description/)

**Approach :**<br/>

1. **Initialization**:

   - Initialize `res` to 0 to store the length of the longest palindrome.
   - Create an unordered set `st` to track characters that appear an odd number of times.

2. **Iterate through String**:

   - For each character in the string `s`:
     - If the character is already in the set, remove it and increment `res` by 2 (indicating a pair of characters).
     - If the character is not in the set, insert it.

3. **Handle Odd Character**:

   - After processing all characters, if the set is not empty (indicating some characters appear an odd number of times), increment `res` by 1 to account for one odd character in the center of the palindrome.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - where `n` is the length of the string `s`. This is because each character is processed once and operations on an unordered set (insertion, deletion, lookup) have an average time complexity of `O(1)`.

- Time-Complexity: `O(n)` - since the size of the set is bounded by the number of possible characters (a constant number, typically 128 or 256 for ASCII characters).