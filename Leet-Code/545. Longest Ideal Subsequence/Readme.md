## 2370. Longest Ideal Subsequence

This problem involved about, You are given a string s consisting of lowercase letters and an integer k.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/snakes-and-ladders/description/)

**Approach :**<br/>

1. Initialize variables `n` as the size of the string `s` and `res` as 1 (minimum length of the subsequence).
2. Initialize an array `t` of size 26 (representing the 26 lowercase English letters) with all elements initialized to 0.
3. Iterate through each character `s[i]` of the string:
    - Calculate the left boundary as `max(0, s[i] - k)` and the right boundary as `min(25, s[i] + k)` to avoid boundary violations.
    - Initialize a variable `longest` to store the length of the longest subsequence within the boundaries.
    - Iterate through the characters within the boundaries and update `longest` with the maximum length of subsequences.
    - Update the length of the longest subsequence ending at `s[i]` in the array `t`.
    - Update `res` with the maximum length of any subsequence encountered so far.
4. Return `res` as the result, which represents the length of the longest ideal string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of the algorithm is O(n), where n is the length of the input string `s`.

-   Space-Complexity: `O(n)` - The space complexity is O(1) because the space used by the array `t` is constant (26 elements).
