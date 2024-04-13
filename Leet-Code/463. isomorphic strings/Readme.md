## 205. Isomorphic Strings

This problem involved about, given two strings s and t, determine if they are isomorphic.<br/>

Two strings s and t are isomorphic if the characters in s can be replaced to get t. <br/>

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/isomorphic-strings/description/)

**Approach :**<br/>

1. Initialize two unordered maps `Map1` and `Map2` to store the mappings of characters from string `s` to string `t` and vice versa.
2. Check if the lengths of strings `s` and `t` are equal. If not, return false as they cannot be isomorphic.
3. Iterate through the characters of both strings simultaneously using a loop variable `i`.
4. For each character at index `i`, check if it is already mapped in `Map1` and `Map2`. If it is, verify if the mapping is correct. If not, return false.
5. If the mappings are valid, update the mappings in both `Map1` and `Map2`.
6. After processing all characters, return true indicating that the strings are isomorphic.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array and performing the operation can required `O(n)` time complexity
-   Space-Complexity: `O(26) => O(1)` - we are using only a constant amount of space
