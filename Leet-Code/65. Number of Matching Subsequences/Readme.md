# 792. Number of Matching Subsequences

Problem link: https://leetcode.com/problems/number-of-matching-subsequences/

**Problem :**<br>
Given a string s and an array of strings words, return the number of words[i] that is a subsequence of s.<br>

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.<br>

- For example, "ace" is a subsequence of "abcde".<br>

**Approach :**<br>

- first count each words frequency by using Hash-Map
- Loop through Has-Map, and again run a nested loop inside of it, find root string to Hash-map each word matching character.
- if matching character size is equal to word size, then count += words frequency, so on
- return count

**Complexity :**<br>
Time-Complexity: O(n^2)<br>
Space-Complexity: O(n)<br>
