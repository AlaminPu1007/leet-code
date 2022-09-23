# 1221. Split a String in Balanced Strings

Problem link: https://leetcode.com/problems/split-a-string-in-balanced-strings/

**Problem :**<br>
Balanced strings are those that have an equal quantity of 'L' and 'R' characters.<br>

Given a balanced string s, split it into some number of substrings such that:<br>

Each substring is balanced.<br>
Return the maximum number of balanced strings you can obtain.<br>

**Approach :**<br>

- count number of 'L' is present and 'R' is present
- check L_count == R_count, then increment count by 1 and so on
- return count

**Complexity :**<br>

- Time-Complexity: O(n)
- Space-Complexity: O(1)
