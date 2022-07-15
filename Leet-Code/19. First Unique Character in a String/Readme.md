# 387. First Unique Character in a String

Problem link : https://leetcode.com/problems/first-unique-character-in-a-string/

**Problem :**<br>
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.<br>

**Approach :**<br>
First we need to count each character frequency, with const number of freq[26] array.<br>

Then, check which character frequency is 1, and return this character position.<br>
