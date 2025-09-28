# 410. Split Array Largest Sum

This problem involved about, given an integer array `nums` and an integer k, split `nums` into k non-empty `subarrays` such that the largest sum of any `subarray` is minimized.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/split-array-largest-sum/description/)

**Key Insights :**<br/>

1. `Binary Search Applicability`: The solution space is monotonic - if a sum `x` is valid (can split array into `k` subarrays with max sum ≤ `x`), then all sums > `x` are also valid.
2. `Search Boundaries`:
    - Minimum possible largest sum is the maximum element in the array (when `k = n`)
    - Maximum possible largest sum is the total sum of the array (when `k = 1`)
3. `Validation Function`: For a given candidate sum, we can check if it's possible to split the array into `k` subarrays where no subarray sum exceeds the candidate.

**Algorithm Steps :**<br/>

1. `Initialize Search Boundaries`:
    - `low` = maximum element in array
    - `high` = total sum of array
2. `Binary Search`:
    - Calculate `mid` candidate sum
    - Use `isValid()` to check if `mid` is a feasible solution
    - Adjust search boundaries based on validation result
3. `Validation Function (`isValid`)`:
    - Count how many subarrays are needed to keep all subarray sums ≤ candidate
    - Return true if count ≤ `k`, false otherwise

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - `O(n)` for each binary search iteration. performing binary-search is required `O(log(n))`.
-   Space-Complexity: `O(1)` - additional space used.
