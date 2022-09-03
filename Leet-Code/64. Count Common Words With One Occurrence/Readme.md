# 2085. Count Common Words With One Occurrence

Problem link: https://leetcode.com/problems/count-common-words-with-one-occurrence/
**Problem :**<br>
Given two string arrays words1 and words2, return the number of strings that appear exactly once in each of the two arrays.<br>

**Approach :**<br>

- Approach - 1 <br>
  We need two hash map table to store each array of string with their frequency.<br>
  Then loop through first hash map and check both of two Hash-map value are same or not.<br>
  if it's true increment count by one, and so on.<br>

- Approach - 2 <br>
  we solve this problem by using one hash-map<br>
  Loop through first array of string and increase each string value by using ++<br>
  Then, loop through second array of string and decrease each string value by using --<br>
  Then,again loop through first array,and check which value(specific words) is equal to 0<br>
  count them and finally return count.<br>

  **Complexity :**<br>

  - Approach - 1 <br>
    Time-Complexity: O(n)<br>
    Space-Complexity: O(n)<br>

  - Approach - 2<br>
    Time-Complexity: O(n)<br>
    Space-Complexity: O(n)<br>
