## 2966. Divide Array Into Arrays With Max Difference

This problem involved about, you are given an integer array nums of size n and a positive integer k. <br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/)

**Approach :**<br/>

1. Sort the input array `nums` in ascending order.
2. Iterate through the sorted array in steps of 3, ensuring that each subarray has a size of 3.
3. Check if the difference between the maximum and minimum elements in the current subarray is greater than `k`. If yes, return an empty vector (indicating no valid partition).
4. Create a vector `list` containing the elements of the current subarray and add it to the result vector `res`.
5. Continue the iteration until all elements are processed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array dominates the time complexity.
-   Space-Complexity: `O(n)` -for resulting array
