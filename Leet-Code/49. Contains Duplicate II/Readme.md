# 219. Contains Duplicate II

Problem link: https://leetcode.com/problems/contains-duplicate-ii/

**Problem :**<br>
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.<br>

**Approach :**<br>

- Loop through entire array, and check each array of element is already present inside our Hash-map table or not
- if it's not present push it inside Has-table
- it it's present, check abs(i - item->second) <= k is less than or equal to k, it its then return true
- Else put element inside Hash map, and so no

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
