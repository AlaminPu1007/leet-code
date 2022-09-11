# 1331. Rank Transform of an Array

Problem link: https://leetcode.com/problems/rank-transform-of-an-array/

**Problem :**<br>
Given an array of integers arr, replace each element with its rank.<br>

The rank represents how large the element is. The rank has the following rules:<br>

- Rank is an integer starting from 1.
- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
- Rank should be as small as possible.

**Approach :**<br>

- Make copy of an array, and sort them
- loop through array, and push each unique element inside of hash-map, and give them a rank by increasing j++
- Then, loop through original array, and push each item value, inside new vector, ans so on

**Complexity :**<br>
Time-Complexity: O(n.log(n))<br>
Space-Complexity: O(log(n))<br>
