## 1122. Relative Sort Array

[Problem-link](https://leetcode.com/problems/relative-sort-array/)

**Problem Description :**<br>
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.<br>

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.<br>

**Approach :**<br>

- Make an key-value pairs by using hash-map
- loop through second array, and push map-value inside original `array1` until map-value is became `0`, so on.
- loop through Map, and push remain element inside original array.
- `return original array`

**Complexity :**<br>

- Time-Complexity: `O(n*m)` //where `n` is original array-length and `m` is map-value length
- Space-Complexity: `O(n)` // we are using an extra hash-map to make an key-value pairs
