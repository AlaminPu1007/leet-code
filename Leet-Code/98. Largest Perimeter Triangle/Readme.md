## 976. Largest Perimeter Triangle

[Problem link](https://leetcode.com/problems/largest-perimeter-triangle/)

**Problem :**<br>
Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, `return 0`.

**Approach:**

- sort array
- loop through i = len - 3 to 0
- if nums[i] + nums[i + 1] > nums[i + 2] return summation of it
- else return 0

**Complexity :**<br>

- Time-Complexity: `O(n*log(n))`
- Space-Complexity: `O(1)`
