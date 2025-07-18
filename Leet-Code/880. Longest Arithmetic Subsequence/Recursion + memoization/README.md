# 1027. Longest Arithmetic Subsequence

This problem involved about, given an array `nums` of integers, return the length of the longest arithmetic subsequence in `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-arithmetic-subsequence/description/)

**Key Insights :**<br/>

1. `Dynamic Programming`: The problem can be solved using dynamic programming by tracking sequences ending at each index with different common differences.
2. `State Representation`: For each index `i`, we need to consider all possible differences with previous elements `j` (where `j < i`).
3. `Memoization`: Cache results of subproblems to avoid redundant computations.

**Algorithm Steps :**<br/>

1. `Initialize DP Table`: Use a hash map to store the maximum sequence length ending at each index for each possible difference.
2. `Nested Loop`:
    - Outer loop iterates through each element as the end of potential sequences.
    - Inner loop checks all previous elements to calculate differences.
3. `Update DP State`: For each difference found, update the DP table with the maximum sequence length.
4. `Track Maximum`: Keep track of the maximum sequence length encountered.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - We iterate over all pairs and use memoization to avoid repeated work.
-   Space-Complexity: `O(n ^ 2)` - Memoization stores results for each (index, difference) combination.
