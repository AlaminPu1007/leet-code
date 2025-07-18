# 1027. Longest Arithmetic Subsequence

This problem involved about, given an array `nums` of integers, return the length of the longest arithmetic subsequence in `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-arithmetic-subsequence/description/)

**Key Insights :**<br/>

1. `Dynamic Programming`: The problem can be solved using dynamic programming by tracking sequences ending at each index with different common differences.
2. `Difference Normalization`: To handle negative differences, we normalize them by adding 500 (since the maximum possible difference is 500 based on problem constraints).
3. `DP State Update`: For each pair of indices (i, j), we update the DP table to store the maximum sequence length for each observed difference.

**Algorithm Steps :**<br/>

1. `Initialize DP Table`: Create a 2D DP array of size n × 1001 (to accommodate differences from -500 to 500).
2. `Nested Loop`:
    - Outer loop iterates through each element as the end of potential sequences (from index 1 to n-1).
    - Inner loop checks all previous elements (from index 0 to i-1) to calculate differences.
3. `Update DP State`: For each difference found, update the DP table with the maximum sequence length.
4. `Track Maximum`: Keep track of the maximum sequence length encountered.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - where n is the number of elements.
-   Space-Complexity: `O(n)` - since 1001 is a constant.
