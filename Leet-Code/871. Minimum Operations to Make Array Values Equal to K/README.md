# 3375. Minimum Operations to Make Array Values Equal to K

This problem involved about, you are given an integer array `nums` and an integer k.
An integer h is called valid if all values in the array that are strictly greater than h are identical.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/)

**Key Insights :**<br/>

1. `Element Filtering`: We need to remove all elements greater than `k`.
2. `Operation Counting`: Each removal operation counts as one step.
3. `Edge Cases`: If any element is less than `k`, it's impossible to make all elements ≤ `k` by removal alone.

**Algorithm Steps :**<br/>

1. `Check for Impossible Cases`: If any element is less than `k`, return -1 immediately.
2. `Count Elements to Remove`: Count how many elements are greater than `k`.
3. `Return Result`: The count of elements > `k` is the minimum operations needed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of elements
-   Space-Complexity: `O(n)` - The space complexity of using a hash map is `O(n)`.
