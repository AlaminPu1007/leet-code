# 3163. String Compression III

This problem involved about, given a string word, compress it using the following algorithm:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/string-compression-iii/description/)

**Approach :**<br/>

1. `Initialize` an empty result string `res` to store the compressed form of `word`.
2. `Iterate` through each character of the input string `word`:
    - For each character, count consecutive occurrences until a different character is found or a count of 9 is reached.
    - Append the count (as a string) followed by the character to the `res` string.
3. `Return` the resulting `res` string as the compressed version of `word`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We traverse the string once, where `n` is the length of `word`.

-   Space-Complexity: `O(n)` - We store the compressed result in `res`, which in the worst case can be as long as the input if no compression occurs.
