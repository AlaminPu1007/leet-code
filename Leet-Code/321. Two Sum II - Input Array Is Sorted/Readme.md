## 167. Two Sum II - Input Array Is Sorted

This problem involved about, given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 < numbers.length.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)

**Approach :**<br/>

-   To solved this problem we need two pointer approach
-   The idea behind of two pointer approach is:
    1. if sum of 2 numbers is greater than to target then we need to decrement `right` pointer
    2. Other wise increment `left` pointer

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array and apply two pointer approach, that may have `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces, that are not dependent on the size of the input vector.
