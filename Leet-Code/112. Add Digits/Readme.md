## 258. Add Digits

[Get-Problem](https://leetcode.com/problems/add-digits/)

**Explanation of Problem :**<br>
Given an integer num, repeatedly add all its digits until the result has only one digit, and `return it`.

**Approach :**<br>

- if num == 0, `return 0`
- if num % 9 == 0, `return 9`
- else `return num % 9`

**Complexity :**<br>

- Time-Complexity: `O(1)`
- Space-Complexity: `O(1)`
