# 2338. Count the Number of Ideal Arrays

This problem involved about, you are given two integers n and maxValue, which are used to describe an ideal array.
A 0-indexed integer array arr of length n is considered ideal if the following conditions hold:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-number-of-ideal-arrays/description)

**Key Insights :**<br/>

1. `Divisibility Property`: Each element must divide its successor (a[i] divides a[i+1])
2. `Dynamic Programming`: Use DP to count valid sequences by building up from smaller values
3. `Combinatorics`: Use combinations to count different ways to extend sequences
4. `Memoization`: Cache intermediate results to avoid redundant computations

**Algorithm Steps :**<br/>

1. `Initialization`:
    - Create DP table to store counts of sequences ending with each value
    - Create memoization table for combination calculations
2. `Sequence Generation`:
    - For each starting value from 1 to maxValue
    - Recursively generate sequences by multiplying current value
3. `Combination Counting`:
    - Use combinatorics to count ways to fill remaining positions
4. `Result Calculation`:

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + maxValue * log(maxValue))` - each value processed once per its multiples.
-   Space-Complexity: `O(n + maxValue)` - dp table + combination table.
