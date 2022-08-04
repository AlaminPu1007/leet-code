# 137. Single Number II

Problem link: https://leetcode.com/problems/single-number-ii/

**Problem :**<br>
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.<br>

You must implement a solution with a linear runtime complexity and use only constant extra space.<br>

**Approach :**<br>
First approach : <br>

- make an key value pairs with hash table
- then check which value is 1, and return its key

Second approach :<br>

loop through for i = 0 to len - 2 <br>
if num[i] == num[i + 1] <br>
flag := true <br>

else <br>
if(!flag) <br>
return num[i] <br>
else <br>
flag = false <br>

**Complexity :**

- Time complexity : O(n)
- Space complexity: O(1)
