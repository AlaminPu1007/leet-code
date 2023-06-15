## 88. Merge Sorted Array

This problem is involved about, You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/merge-sorted-array/description/)

**Algorithm :**<br/>

We can start with two pointers i and j, initialized to m-1 and n-1, respectively. We will also have another pointer k initialized to m+n-1, which will be used to keep track of the position in nums1 where we will be placing the larger element. Then we can start iterating from the end of the arrays i and j, and compare the elements at these positions. We will place the larger element in nums1 at position k, and decrement the corresponding pointer i or j accordingly. We will continue doing this until we have iterated through all the elements in nums2. If there are still elements left in nums1, we don't need to do anything because they are already in their correct place.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m) or O(n)` - We are iterating through both arrays once, so the time complexity is O(m+n).
-   Space-Complexity: `O(1)` - We are not using any extra space, so the space complexity is O(1).
