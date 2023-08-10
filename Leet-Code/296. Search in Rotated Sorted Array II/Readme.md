## 81. Search in Rotated Sorted Array II

This problem involved about, given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/)

**Approach :**<br/>

-   Initialization: Initialize two pointers, left and right, to the beginning and end of the array respectively.
-   Binary Search Loop: Perform a binary search by iterating while left is less than or equal to right.
-   Calculate Midpoint: Calculate the midpoint of the current search range as (left + right) >> 1. The shift by 1 bit to the right is equivalent to dividing by 2.
-   Check Midpoint Value: If nums[mid] is equal to the target, return true as the target value has been found.

-   Handling Duplicates: If nums[left], nums[mid], and nums[right] are all equal, this means that the current range has duplicates at both ends. In this case, increment left and decrement right to exclude these duplicates from consideration.
-   Check Sorted Portions:
    1. Check if the left portion of the array is sorted (nums[left] <= nums[mid]):
        - If the target value is within the range [nums[left], nums[mid]], update right to mid - 1.
        - Otherwise, update left to mid + 1.
    2. If the left portion is not sorted, then the right portion must be sorted:
        - If the target value is within the range [nums[mid], nums[right]], update left to mid + 1.
        - Otherwise, update right to mid - 1.
-   Return False: If the binary search loop completes without finding the target value (left exceeds right), return false.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))`
-   Space-Complexity: `O(1)`
