## 324. Wiggle Sort II

This problem is involved about, given an integer array `nums`, reorder it such that `nums[0] < nums[1] > nums[2] < nums[3]`

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/wiggle-sort-ii/description/)

**Approach :**<br/>

-   insert all elements of array in max-heap
-   put the top large values in odd positions of array
-   And remaining values to the even position of array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log * n)` - Since n is the length of the input array nums, and insert item into queue has `O(log*n)`
-   Space-Complexity: `O(n)`- we are using extra priority_queue data structure.
