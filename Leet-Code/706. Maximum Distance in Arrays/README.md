# 624. Maximum Distance in Arrays

This problem involved about, you are given m arrays, where each array is sorted in ascending order. <br/>

You can pick up two integers from two different arrays (each array picks one) and calculate the distance. We define the distance between two integers a and b to be their absolute difference |a - b|. <br/>

Return the maximum distance.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-distance-in-arrays/description/)

**Approach :**<br/>

1. `Initial Setup`:

    - Start by initializing `minValue` and `maxValue` with the first and last elements of the first array, respectively.
    - Initialize the result variable `res` to track the maximum distance.

2. `Iterate Through the Arrays`:

    - For each subsequent array, update the result by calculating the maximum of:
        1. The difference between the current array's maximum element and the global minimum (`current_max - minValue`).
        2. The difference between the current array's minimum element and the global maximum (`current_min - maxValue`).
    - Update `minValue` and `maxValue` with the current array's minimum and maximum values.

3. `Return the Maximum Distance`:

    - After iterating through all arrays, the result will contain the maximum distance between any two elements from different arrays.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of arrays. The algorithm iterates through each array exactly once.
-   Space-Complexity: `O(1)` - The space used is constant, as only a few variables are required.