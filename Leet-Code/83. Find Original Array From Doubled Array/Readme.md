# 2007. Find Original Array From Doubled Array

Problem link: https://leetcode.com/problems/find-original-array-from-doubled-array/

**Problem :**<br>
An integer array original is transformed into a doubled array changed by appending twice the value of every element in original, and then randomly shuffling the resulting array.<br>

Given an array changed, return original if changed is a doubled array. If changed is not a doubled array, return an empty array. The elements in original may be returned in any order.<br>

**Approach :**<br>

- sort array
- Make an key-value pairs with Hash-Map
- avoid Map[changed[i]] == 0 and Map[changed[i] \* 2] == 0, and push element inside new vector array
- return new array

**Complexity :**<br>

- Time-Complexity :O(n.log(n))
- Space-Complexity :O(n)
