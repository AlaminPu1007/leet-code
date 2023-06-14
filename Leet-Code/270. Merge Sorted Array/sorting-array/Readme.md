## 88. Merge Sorted Array

This problem is involved about, You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/merge-sorted-array/description/)

**Algorithm :**<br/>

-   insert item into `nums1` `i < n`
-   sort the nums1 array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - loop through nums1 array take `O(n)` + the cost of sorting array `O(n*log(n))`, overall time complexity is `O(n*log(n))`
-   Space-Complexity: `O(log(n))` - since we are not using extra space, but in c++ sorting array can take cost `O(log(n))`
