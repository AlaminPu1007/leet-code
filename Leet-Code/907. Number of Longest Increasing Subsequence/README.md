# 673. Number of Longest Increasing Subsequence

This problem involved about, given an integer array `nums`, return the number of longest increasing subsequences.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/)

**Key Insights :**<br/>

1. `Dynamic Programming`: Use DP to track both length and count of LIS ending at each position
2. `Nested Comparison`: For each element, compare with all previous elements to build LIS
3. `Dual Tracking`: Maintain both length and count of LIS at each position

**Algorithm Steps :**<br/>

1. `Initialization`:

    - `dp` array to store LIS lengths (initialized to 1)
    - `count` array to store LIS counts (initialized to 1)

2. `DP Array Population`:

    - For each element, compare with all previous elements
    - Update LIS length and count when a longer sequence is found
    - Accumulate counts when sequences of equal length are found

3. `Result Calculation`:
    - Find maximum LIS length
    - Sum counts of all sequences with this maximum length

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - we are using and nested loop to fill dp array.
-   Space-Complexity: `O(n)` - each for length and count.
