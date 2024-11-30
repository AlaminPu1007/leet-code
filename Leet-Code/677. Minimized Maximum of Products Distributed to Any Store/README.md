# 2064. Minimized Maximum of Products Distributed to Any Store

This problem involved about, you are given an integer n indicating there are n specialty retail stores. There are m product types of varying amounts, which are given as a 0-indexed integer array quantities, where `quantities[i]` represents the number of products of the ith product type.

## Problem description

For better problem description,please visit [LeetCode Page](https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/description/)

**Approach :**<br/>

1. `Binary Search Setup`:
    - Set the search range with `low = 1` (minimum possible quantity per store) and `high = max(quantities)` (maximum possible quantity if all of a product type goes to a single store).
2. `Binary Search Execution`:
    - In each iteration of the binary search:
        - Calculate `mid`, which represents a candidate maximum quantity per store.
        - Use `is_valid_distribution(mid, n, quantities)` to check if it’s feasible to distribute the products such that no store receives more than `mid` units of any product.
        - If the distribution is valid, adjust `high` to `mid - 1` to check if there’s a smaller feasible maximum quantity.
        - If it’s invalid, adjust `low` to `mid + 1` to allow higher quantities per store.
3. `Distribution Validity Check`:
    - The `is_valid_distribution` function determines if it's possible to distribute all products with a maximum limit of `x` units per store:
        - For each product type, calculate the required number of stores to hold `x` units or less. This is done with `(quantity + x - 1) / x`, which is equivalent to `ceil(quantity / x)`.
        - Sum the store requirements across all products and return true if the total stores required is less than or equal to `n`.
4. `Return Result`:
    - The smallest valid `mid` found during the search will be the minimized maximum quantity per store.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - where `n` is the number of product types. The binary search runs in `O(log(maxQuantity))`, and for each candidate `mid`, checking the validity takes `O(n)`.

-   Space-Complexity: `O(1)` - as only a few extra variables are used for binary search and checking distribution validity.
