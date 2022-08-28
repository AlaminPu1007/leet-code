# 383. Ransom Note

Problem link: https://leetcode.com/problems/ransom-note/

**Problem :**<br>
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.<br>

Each letter in magazine can only be used once in ransomNote.<br>

**Approach :**<br>
First loop through "magazine"-string and count each character frequency.<br>
Then, Loop through "ransomNote" - string, and check which character is not present in our freq array, and return false
Other wise return true<br>

**Complexity :**<br>
Time-Complexity :O(n)<br>
Space-Complexity :O(n)<br>
