## 462. Minimum Moves to Equal Array Elements II

This problem involved about, given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/)

**Approach with dp :**<br/>

1. Sort the given array `nums` in non-decreasing order to facilitate finding the median.
2. Calculate the median of the sorted array, which is the middle element if the array has an odd length or the average of the two middle elements if the length is even.
3. Traverse through each element in the sorted array and calculate the absolute difference between the element and the median.
4. Sum up all the absolute differences to obtain the total number of moves required to make all elements in the array equal to the median.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))`- Sorting the array takes `O(n * log(n))` time using an efficient sorting algorithm.

-   Space-Complexity: `O(n)` - sorting required extras n spaces
