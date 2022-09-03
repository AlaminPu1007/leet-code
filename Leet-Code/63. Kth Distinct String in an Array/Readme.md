# 2053. Kth Distinct String in an Array

Problem link: https://leetcode.com/problems/kth-distinct-string-in-an-array/

**Problem :**<br>
A distinct string is a string that is present only once in an array.<br>

Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".<br>

Note that the strings are considered in the order in which they appear in the array.<br>

**Approach :**<br>

- First count each string frequency using Hash-Map
- Then, check which string is unique, and increase counter by 1.
- if counter is equal to k value, then return arr[i]

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
