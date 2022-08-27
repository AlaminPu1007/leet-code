# 448. Find All Numbers Disappeared in an Array

Problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

**Problem :**<br>
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.<br>

**Approach :**<br>
First we have loop through array, and put each digit frequency at their position inside our freq-array<br>
Then loop through again, this time loop will be start from 1 to n, and each iteration check which digit frequency is less than or equal to 0, and push it to the new array. so on..

**Complexity :**<br>
Time-Complexity :O(n)<br>
Space-Complexity :O(n)<br>
