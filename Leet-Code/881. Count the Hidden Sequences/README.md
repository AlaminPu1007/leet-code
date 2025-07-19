# 2145. Count the Hidden Sequences

This problem involved about, you are given a 0-indexed array of n integers differences, which describes the differences between each pair of consecutive integers of a hidden sequence of length (n + 1). More formally, call the hidden sequence hidden, then we have that `differences[i] = hidden[i + 1] - hidden[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-hidden-sequences/description/)

**Key Insights :**<br/>

1. `Prefix Sum Tracking`: The hidden array can be reconstructed using prefix sums of the differences array.
2. `Range Constraints`: The minimum and maximum values of these prefix sums determine the valid starting values.
3. `Feasibility Check`: If the spread between min and max prefix sums exceeds (upper - lower), no valid arrays exist.

**Algorithm Steps :**<br/>

1. `Initialize Trackers`: Keep track of current prefix sum (`cur`), maximum (`x`), and minimum (`y`) prefix sums.
2. `Process Differences`:
    - Update current prefix sum with each difference
    - Track the running maximum and minimum prefix sums
    - Early return if spread exceeds allowed range
3. `Calculate Valid Arrays`:
    - The number of valid starting points is `(upper - lower) - (max_prefix - min_prefix) + 1`
    - Return 0 if no valid starting points exist

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the length of differences array.
-   Space-Complexity: `O(1)` - additional space for tracking values.
