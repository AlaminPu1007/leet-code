## 1685. Sum of Absolute Differences in a Sorted Array

This problem involved about, you are given an integer array `nums` sorted in non-decreasing order.
Build and return an integer array result with the same length as `nums` such that `result[i]` is equal to the summation of absolute differences between `nums[i]` and all the other elements in the array.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description)

**Approach :**<br/>

1. Initialize 'preFixSum' as a vector to store prefix sums of 'nums'.
2. Calculate prefix sums in 'preFixSum' from 'nums' to get cumulative sums at each index.
3. Iterate through 'nums':
    - Calculate left sum as the sum of elements before the current index and the element at the index.
    - Calculate right sum as the sum of elements after the current index.
    - Compute absolute differences for left and right sums based on the current element's position.
    - Calculate the sum of left and right absolute differences and store it in 'res'.
4. Return 'res', containing the absolute differences for each element in 'nums'.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) = O(n)` - Where 'n' is the size of the input array 'nums'. It involves two passes through the array: one for calculating prefix sums and another for computing absolute differences.
-   Space-Complexity: `O(n) + O(n) = O(n)` - Due to the additional space used by the 'preFixSum' vector to store prefix sums, scaling linearly with the input size 'n'.
