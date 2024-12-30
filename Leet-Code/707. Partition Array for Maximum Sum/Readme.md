## 1043. Partition Array for Maximum Sum

This problem involved about, given an integer array arr, partition the array into (contiguous) subarrays of length at most k. After partitioning, each subarray has their values changed to become the maximum value of that subarray. <br/>

Return the largest sum of the given array after partitioning. Test cases are generated so that the answer fits in a 32-bit integer.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/partition-array-for-maximum-sum/description/)

**Approach :**<br/>

1. Initialize a cache array to store computed results.
2. Define a recursive function `DFS` that takes the starting index `start`, array size `n`, partition length `k`, and the cache array.
3. Base Case:
    - If `start` is greater than or equal to `n`, return 0.
    - If the result for the current `start` index is already computed (cached), return the cached result.
4. Initialize variables `ans` and `cur_max` to 0.
5. Iterate over a window of elements from `start` to `min(n, start + k)`.
    - Update `cur_max` with the maximum element in the current window.
    - Calculate the sum of the window and recursively call `DFS` for the next subarray.
    - Update `ans` with the maximum sum.
6. Cache the result for the current `start` index and return the maximum sum.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k)` - The time complexity is `O(n*k)`, where `n` is the size of the array and `k` is the partition length. The function explores all possible `subarrays`, and memoization ensures reusability of computed results.

-   Space-Complexity: `O(n)` - The space complexity is `O(n)` due to the cache array used for memoization. The recursion stack also contributes to the space complexity, but it is bounded by the recursion depth.
