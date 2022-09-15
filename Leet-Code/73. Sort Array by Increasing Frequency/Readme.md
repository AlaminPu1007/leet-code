# 1636. Sort Array by Increasing Frequency

Problem link: https://leetcode.com/problems/sort-array-by-increasing-frequency/

**Problem :**<br>
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.<br>

Return the sorted array.<br>

**Approach :**<br>

- make an key,value pairs with their frequency using Hash-map
- put copy of hash-map value inside vector(using pair method)
- sort vector according value wise(which frequency is less, will come first)
- finally loop through vector, and put each digit inside new vector array till their frequency is not going to be zero, so on
- finally return vector

**Complexity :**<br>
Time-Complexity : O(n.m)//push each item until their frequency is going to be zero. (m is each digit frequency)<br>
Space-Complexity :O(n)<br>
