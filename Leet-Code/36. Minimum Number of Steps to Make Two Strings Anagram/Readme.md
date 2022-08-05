# 1347. Minimum Number of Steps to Make Two Strings Anagram

Problem link: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

**Problem :**<br>
You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.<br>

Return the minimum number of steps to make t an anagram of s.<br>

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.<br>

**Approach :**<br>

- count first staring each character frequency
- then, loop through second string and if(freq[t[i] - 'a'] == 0) result++, else freq[t[i] - 'a']--<br>
- return result
