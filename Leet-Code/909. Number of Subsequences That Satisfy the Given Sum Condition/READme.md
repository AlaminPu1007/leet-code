# 1498. Number of Subsequences That Satisfy the Given Sum Condition

This problem involved about, you are given an array of integers `nums` and an integer target.
Return the number of non-empty subsequences of `nums` such that the sum of the minimum and maximum element on it is less or equal to target

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description)

**Key Insights :**<br/>

1. `Sorting`: Sorting the array helps in efficiently finding valid min-max pairs
2. `Two Pointers`: Use two pointers to find valid ranges where min + max ≤ target
3. `Precomputed Powers`: Calculate powers of 2 in advance to count subsequences quickly
4. `Modulo Operation`: Handle large numbers using modulo arithmetic

**Algorithm Steps :**<br/>

1. `Sort the Array`: Arrange elements in non-decreasing order
2. `Precompute Powers of 2`: Store 2^i % MOD for all possible subsequence lengths
3. `Two Pointer Technique`:
    - Initialize left and right pointers
    - Adjust right pointer to find valid max elements for each min
    - Count valid subsequences using precomputed powers
4. `Result Calculation`: Sum valid subsequences while applying modulo

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting array required `O(n * log(n))` time complexity.
-   Space-Complexity: `O(n)` - we are using and extra preCompute additional array.
