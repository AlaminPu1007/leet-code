# 3110. Score of a String

This problem involved about, you are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/score-of-a-string/description)

**Approach :**<br/>

1. **Initialization**:
    - Define a class `Solution` with a public method `scoreOfString` which takes a string `s` as an argument.
    - Initialize a variable `res` to store the result.
2. **Iterate through the string**:
    - Loop through the string from the first character to the second-to-last character.
    - For each character at index `i`, calculate the absolute difference between the ASCII values of the character at `i` and the character at `i + 1`.
    - Add this difference to `res`.
3. **Return the result**:
    - After the loop, return the accumulated result `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string.

-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces that will grow with input sizes
