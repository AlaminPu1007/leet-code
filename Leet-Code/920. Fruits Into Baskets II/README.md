# 3477. Fruits Into Baskets II

This problem involved about, you are given two arrays of integers, fruits and baskets, each of length n, where `fruits[i]` represents the quantity of the ith type of fruit, and `baskets[j]` represents the capacity of the jth basket.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/fruits-into-baskets-ii/description)

**Key Insights :**<br/>

1. `Direct Comparison`: Each fruit is checked against all available baskets.
2. `Basket Marking`: Once a basket is used, it's marked as unavailable (set to 0).
3. `Simple Counting`: Fruits without suitable baskets are counted as unplaced.

**Algorithm Steps :**<br/>

1. `Initialize`:
    - Result counter `res` set to 0
2. `Fruit Processing`:
    - For each fruit, check all baskets
    - If suitable basket found:
        - Mark basket as used
        - Don't count as unplaced
    - Else:
        - Increment unplaced count
3. `Return` the total count of unplaced fruits

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - where n is number of fruits/baskets
-   Space-Complexity: `O(1)` - additional space
