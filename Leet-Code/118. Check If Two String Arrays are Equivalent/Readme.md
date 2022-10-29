## 1662. Check If Two String Arrays are Equivalent

[Problem-link](https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/)

**Problem :**<br>
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.<br>

A string is represented by an array if the array elements concatenated in order forms the string.<br>

**Approach :**<br>

The idea of behind this solution is, loop thorough string array, and put each string+1 item inside it's '0' index<br>
Then return string_array1 == string_array2<br>

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`
