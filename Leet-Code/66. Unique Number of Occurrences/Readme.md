# 1207. Unique Number of Occurrences

Problem link: https://leetcode.com/problems/unique-number-of-occurrences/

**Problem :**<br>

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.<br>

**Approach :**<br>

- count each digit frequency by using hash-map
- push each digit frequency value inside new array
- Sorting the new vector
- Checking if repetition found then false else true.

**Complexity :**<br>
Time-Complexity: O(n.log(n))//for sorting<br>
Space-Complexity: O(n)<br>
