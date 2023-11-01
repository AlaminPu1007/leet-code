## 3. Longest Substring Without Repeating Characters

This problem involved about, Given a string s, find the length of the longest `substring` without repeating characters.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

**Approach :**<br/>

1. Initialize a frequency array frq of size 26 to track character frequencies and set left to 0.
2. Initialize res to 0 to store the length of the longest substring.
3. Initialize an empty set st to store characters in the current window.
4. Iterate through the input string s from left to right (represented by index i).
5. For each character s[i]:
    - While s[i] is already in the set st, remove characters from the left end of the window (left) and update the set until the character is no longer in the set.
    - Update the set st with the current character s[i].
    - Calculate the length of the current substring (i - left + 1) and update res with the maximum length seen so far.
6. Return res as the length of the longest substring without repeating characters.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n )` - iterate over the string, has `O(n)` time complexity, in unordered_set, the insertion has constant time complexity in average case & deletion also has constant time complexity

-   Space-Complexity: `O(n)` - We are using an additional set data-structure
