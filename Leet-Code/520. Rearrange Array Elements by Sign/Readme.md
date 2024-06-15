## 2149. Rearrange Array Elements by Sign

This problem involved about, you are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers. You should rearrange the elements of nums such that the modified array follows the given conditions:

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/rearrange-array-elements-by-sign/description)

**Approach :**<br/>

1. Initialize two indices: `positiveIndex` starting at 0 and `negativeIndex` starting at 1.
2. Create a new vector `ans` of the same size as the input array `nums`.
3. Iterate through each element in the array.
4. If the current element is positive, assign it to the `positiveIndex` in the `ans` vector and increment `positiveIndex` by 2.
5. If the current element is negative, assign it to the `negativeIndex` in the `ans` vector and increment `negativeIndex` by 2.
6. Return the rearranged array `ans`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterate over the array ans making rearrange the array can required `O(n)` time complexity
-   Space-Complexity: `O(n)` - we are using an extra space to hold resultant array
