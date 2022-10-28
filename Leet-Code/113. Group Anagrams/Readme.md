## 49. Group Anagrams

[Problem-link](https://leetcode.com/problems/group-anagrams/)

**Problem Description :**<br>
Given an array of strings strs, group the anagrams together. You can return the answer in any order.<br>

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.<br>

**Approach :**<br>

- Make an key-value pairs by using unordered_map, sort each string by using counting sort.
- Loop through Map, and push each group of string inside new result vector_pairs array, so on.

**Complexity :**:<br>

- Time-Complexity: `O(n*m)`
  // [Get-some-info-of-unordered_map-complexity](https://stackoverflow.com/questions/19610457/c-stdunordered-map-complexity)
- Space-Complexity: `O(n)`
