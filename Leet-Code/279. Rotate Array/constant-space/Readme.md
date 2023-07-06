## 189. Rotate Array

This problem is involved about, given an integer array nums, rotate the array to the right by k steps, where k is non-negative

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/rotate-array/description/)

**Algorithm :**<br/>

The algorithm used to rotate the array is as follows:<br/>

-   Get the length of the `nums` array and calculate the effective number of rotations by taking the modulus of k with the length: `k %= len`.
-   Reverse the first portion of the array from the beginning up to the index `(len - k - 1)` using the reverse function: `reverse(nums.begin(), nums.begin() + (len - k))`.
-   Reverse the second portion of the array from the index `(len - k)` up to the end using the reverse function: `reverse(nums.begin() + (len - k), nums.end())`.
-   Reverse the entire array using the reverse function to obtain the final rotated array: `reverse(nums.begin(), nums.end())`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of this algorithm is `O(n)`, where `n` is the number of elements in the nums array. This is because we perform three reverse operations, each taking `O(n)` time.
-   Space-Complexity: `O(1)` - since we are performing the rotations in-place, without using any additional data structures
