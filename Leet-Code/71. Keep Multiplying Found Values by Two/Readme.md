# 2154. Keep Multiplying Found Values by Two

Problem link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/

**Problem :**<br>
You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.<br>

You then do the following steps:<br>

If original is found in nums, multiply it by two (i.e., set original = 2 \* original).
Otherwise, stop the process.<br>
Repeat this process with the new number as long as you keep finding the number.
Return the final value of original.<br>

**Approach :**<br>

- Make an key value pairs with Hash-table
- loop through array, and find original value is already present in hash-table or not.
- if it's present, then multiply it's value by 2 and so on
- if it's not, then return original value

**Complexity :**<br>
Time-Complexity : O(n)<br>
Space-Complexity :O(n)<br>
