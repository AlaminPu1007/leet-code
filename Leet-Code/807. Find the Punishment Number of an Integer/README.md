# 2698. Find the Punishment Number of an Integer

This problem involved about, Given a positive integer n, return the punishment number of n. The punishment number of n is defined as the sum of the squares of all integers i such that: `1 <= i <=n`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description)

**Approach :**<br/>

1. `Backtracking Approach`:

    - Try all possible ways to split `i²` into substrings.
    - Use `memoization` (`dp`) to store previous results.

2. `Recursive Function`:
    - Start from index `0` and a current sum of `0`.
    - Try different substring splits.
    - If we reach the end of the string and sum equals `i`, return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * 2^log10​(n))` - Since we iterate through this process n times, we multiply this time complexity by a factor of n.
-   Space-Complexity: `O(n * log10​(n) + log10​(n))` - The space complexity is determined by the `dp` array and recursion stack.
