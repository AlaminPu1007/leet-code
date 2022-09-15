# 2357. Make Array Zero by Subtracting Equal Amounts

Problem link: https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

**Problem :**<br>
You are given a non-negative integer array nums. In one operation, you must:<br>

- Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
- Subtract x from every positive element in nums.
  Return the minimum number of operations to make every element in nums equal to 0.<br>

**Approach :**<br>
To solve this issue we need Hash-map, and put each unique digit with value 1, except 0<br>
Then return map size<br>

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
