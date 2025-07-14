# 1534. Count Good Triplets

This problem involved about, given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-good-triplets/description)

**Key Insights :**<br/>

1. `Triplet Constraints`: All three conditions must be satisfied simultaneously
2. `Brute Force Check`: For small arrays (n ≤ 100), a triple nested loop is feasible
3. `Absolute Differences`: Need to compute and compare absolute differences between elements

**Algorithm Steps :**<br/>

1. `Initialize Counter`: Start with res = 0
2. `Triple Loop`:
    - Outer loop (i) from 0 to n-3
    - Middle loop (j) from i+1 to n-2
    - Inner loop (k) from j+1 to n-1
3. `Check Conditions`: Verify all three absolute difference conditions
4. `Count Valid Triplets`: Increment res when all conditions are met

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3)` - where n is the array size
-   Space-Complexity: `O(1)` - additional space
