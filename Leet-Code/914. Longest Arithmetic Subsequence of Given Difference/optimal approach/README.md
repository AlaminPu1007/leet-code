# 1218. Longest Arithmetic Subsequence of Given Difference

This problem involved about, given an integer array arr and an integer difference, return the length of the longest subsequence in arr which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals difference.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/description/)

**Key Insights :**<br/>

1. `Dynamic Programming with Hash Map`: Track sequence lengths ending at each number
2. `Single Pass Calculation`: Compute sequence lengths in one iteration
3. `Constant Time Lookups`: Use unordered_map for O(1) average case operations

**Algorithm Steps :**<br/>

1. `Initialize`:

    - Result variable to track maximum length
    - Hash map to store sequence lengths ending at each number

2. `Iterate Through Array`:

    - For each number, calculate the previous number in sequence (current - difference)
    - Update current number's sequence length (previous length + 1)
    - Update maximum length if current sequence is longer

3. `Return Result`: The longest sequence length found

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is array size.
-   Space-Complexity: `O(n)` - The dp map of size n is used.
