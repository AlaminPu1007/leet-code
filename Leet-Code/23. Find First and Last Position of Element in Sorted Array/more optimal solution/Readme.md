## 34. Find First and Last Position of Element in Sorted Array

This problem involved about, Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return `[-1, -1]`.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/)

**Approach :**<br/>

1. Define a private helper method BSAlgorithm that performs binary search. This method takes an additional boolean parameter isSearchForLeftMostValue, which indicates whether we are searching for the leftmost or rightmost occurrence of the target.

2. Initialize the variable i to -1. This variable will be used to store the index of the target if found.

3. Initialize two pointers, left and right, to the start and end of the nums vector, respectively.

4. Perform a while loop while left is less than or equal to right.

5. Calculate the middle index mid as the average of left and right.

6. Check if the value at index mid in nums is equal to the target:

    - If they are equal, update i to mid and adjust the left or right pointer based on whether we are searching for the leftmost or rightmost occurrence.
    - If the target is less than arr[mid], update the right pointer to mid - 1.
    - If the target is greater than arr[mid], update the left pointer to mid + 1.

7. Repeat the binary search until left is no longer less than or equal to right.

8. Return the value of i, which will be the leftmost or rightmost occurrence of the target, depending on the value of isSearchForLeftMostValue.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - we are using an binary search algorithm, that has `O(log(n))` time complexity
-   Space-Complexity: `O(1)` - we are not using any kind of additional spaces
