## 2444. Count Subarrays With Fixed Bounds

This problem involved about, you are given an integer array nums and two integers minK and maxK. <br/>

A fixed-bound subarray of nums is a subarray that satisfies the following conditions: <br/>

The minimum value in the subarray is equal to minK. <br/>
The maximum value in the subarray is equal to maxK. <br/>
Return the number of fixed-bound subarrays. <br/>

A subarray is a contiguous part of an array.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/)

**Approach :**<br/>

1. Initialize variables `n` as the size of the input array `nums`, `res` as the count of valid subarrays, `positionOfMinK` and `positionOfMaxK` to store the positions of `minK` and `maxK`, and `positionOfCulpritIndex` to store the position of the culprit index.
2. Iterate through the array using the index `i`.
3. If the current element equals `minK`, update `positionOfMinK` with the current index `i`.
4. If the current element equals `maxK`, update `positionOfMaxK` with the current index `i`.
5. If the current element is greater than `maxK` and the element at the index `i` is less than `nums[i]`, update `positionOfCulpritIndex` with the current index `i`.
6. Calculate the number of valid subarrays within the range `(minK, maxK)` using the positions of `positionOfMinK`, `positionOfMaxK`, and `positionOfCulpritIndex`. Add this count to `res`.
7. Return the final count `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the size of the input array `nums`. The algorithm involves iterating through the array once.
-   Space-Complexity: `O(1)` - as the algorithm uses only constant extra space.
