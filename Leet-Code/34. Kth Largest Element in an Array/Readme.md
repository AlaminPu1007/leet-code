# 215. Kth Largest Element in an Array

Problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/

**Problem :**<br>
Given an integer array nums and an integer k, return the kth largest element in the array.<br>

Note that it is the kth largest element in the sorted order, not the kth distinct element.<br>

You must solve it in O(n) time complexity.<br>

**Approach :**<br>

-   sort array of element by greater value
-   then return nums[k-1]

**Complexity :**<br>
Time complexity : O(n log n) <br>
Space complexity : O(n)<br>

## APPROACH-2

## 215. Kth Largest Element in an Array

This problem involved about, given an integer array nums and an integer k, return the kth largest element in the array.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)

**Approach :**<br/>

-   we initialize an hash-map to store each item with key-value pairs to hold their frequency.
-   Iterate over the array an make key-value pairs
-   now iterate hash-map as a reverse order, and decrement `k` value by `item->value`
-   return `if(k <= 0)` to `key` of map

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array, that require `O(n)` times. insertion of hash-map has `O(1)` times
-   Space-Complexity: `O(n)` - we are using an extra spaces to hold key-value pairs of root array
