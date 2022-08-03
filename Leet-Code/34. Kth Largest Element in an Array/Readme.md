# 215. Kth Largest Element in an Array

Problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/

**Problem :**<br>
Given an integer array nums and an integer k, return the kth largest element in the array.<br>

Note that it is the kth largest element in the sorted order, not the kth distinct element.<br>

You must solve it in O(n) time complexity.<br>

**Approach :**<br>

- sort array of element by greater value
- then return nums[k-1]

**Complexity :**<br>
Time complexity : O(n log n) <br>
Space complexity : O(n)<br>
