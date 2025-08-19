# 2929. Distribute Candies Among Children II

This problem involved about, you are given two positive integers n and limit.
Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/distribute-candies-among-children-ii/description/)

**Key Insights :**<br/>

1. `Triple Constraints`: The solution must consider all three children's limits simultaneously
2. `Mathematical Counting`: Can be reduced to counting integer solutions with constraints
3. `Efficient Calculation`: Avoid brute-force by using mathematical bounds

**Algorithm Steps :**<br/>

1. `Iterate First Child's Candies`:
    - For each possible allocation to first child (0 to min(limit, n))
2. `Calculate Remaining Constraints`:
    - Skip if remaining candies can't be distributed within limits
    - Compute valid ranges for second and third children
3. `Count Valid Combinations`:
    - For each valid first allocation, count possible (second, third) pairs
4. `Sum All Valid Combinations`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterating over the `min(limit, n)`.
-   Space-Complexity: `O(1)` - only constant amount of spaces are used.
