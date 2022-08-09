# 392. Is Subsequence

Problem link: https://leetcode.com/problems/is-subsequence/

**Problem :**<br>
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.<br>

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of <br><br>the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a <br>subsequence of "abcde" while "aec" is not).<br>

**Approach :**

```
for i = 0 to s[j] != '\0' and t[i] != '\0'
if s[j] == t[i] we increase j by 1

and then check j == s.length(), if it's return true
els return false

```

**Complexity :**<br>
Time-Complexity : O(n)<br>
Space-Complexity : O(1)<br>
