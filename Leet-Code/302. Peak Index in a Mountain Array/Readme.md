## 852. Peak Index in a Mountain Array

This problem involved about, given a mountain array arr, return the index i such that `arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/peak-index-in-a-mountain-array/description/)

**Approach 1:**<br/>

-   loop through array until `arr[i] < arr[i+1]`
-   return i

**Approach 2:**<br/>

-   [Learn Binary Search Algorithm](https://www.geeksforgeeks.org/binary-search/)

**Complexity Analysis 1:**<br/>

-   Time-Complexity: `O(n)` - we iterate over this array, that will cost of `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces except constant spaces

**Complexity Analysis 2:**<br/>

-   Time-Complexity: `O(log(n))` - We perform `O(log(n))` iterations using the binary search algorithm as the problem set is divided into half in each iteration.
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces except constant spaces
