# 1726. Tuple with Same Product

This problem involved about, given an array `nums` of distinct positive integers, return the number of tuples `(a, b, c, d)` such that `a * b = c * d where a, b, c, and d` are elements of `nums`, and `a != b != c != d`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/tuple-with-same-product/description)

**Approach :**<br/>

1. `Pair Multiplication & Frequency Counting:`

    - Iterate through all pairs `(i, j)` in `nums` and compute their product.
    - Use a hashmap `productCount` to store the frequency of each product.
    - Use another hashmap `productPairs` to count the number of valid pairs that share the same product.

2. `Calculate Valid Tuples:`
    - If a product appears in multiple pairs, count the number of ways to form valid tuples.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - where `n` is the size of the array.
-   Space-Complexity: `O(n ^ 2)` - in the worst case, where all pairs have unique products.
