# 1218. Longest Arithmetic Subsequence of Given Difference

This problem involved about, given an integer array arr and an integer difference, return the length of the longest subsequence in arr which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals difference.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/description/)

**Key Insights :**<br/>

1. `Dynamic Programming`: The solution can be built by considering each element as the start of a potential subsequence
2. `Memoization`: Store results of subproblems to avoid redundant calculations
3. `Difference Matching`: For each element, look ahead for elements that maintain the required difference

**Algorithm Steps :**<br/>

1. `Initialization`:

    - Create a DP array initialized to -1 (uncomputed states)
    - Initialize result counter

2. `Recursive DP Function`:

    - For each starting index, find all valid next elements
    - Recursively compute the longest sequence from each valid next element
    - Memoize results to avoid recomputation

3. `Result Calculation`:
    - Track the maximum sequence length found
    - Return the final result

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - The outer loop in longestSubsequence runs n times, and for each i, the recursive Solve(i) function may iterate through the remaining n - i elements in the worst case. Even with memoization preventing repeated computations, each call to Solve includes a loop, leading to overall quadratic time complexity.
-   Space-Complexity: `O(n)` - The dp array of size n+1 is used for memoization, and the maximum depth of the recursion stack can be O(n) in the worst case.
