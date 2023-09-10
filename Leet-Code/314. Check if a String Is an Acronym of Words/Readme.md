## 2828. Check if a String Is an Acronym of Words

This problem involved about, given an array of strings words and a string s, determine if s is an acronym of words.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/)

**Approach :**<br/>

-   For base case, we need to cheeck both `words` & `s` has the same size of length
-   loop through words and put each word first character in `res`
-   return `res == s`

**Complexity analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array, that's require `O(n)` times
-   Space-Complexity: `O(n)` - we are using an extra spaces to store `res`
