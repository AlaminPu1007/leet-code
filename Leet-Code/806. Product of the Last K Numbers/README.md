# 1352. Product of the Last K Numbers

This problem involved about, design an algorithm that accepts a stream of integers and retrieves the product of the last k integers of the stream.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/product-of-the-last-k-numbers/description)

**Approach :**<br/>

1. `Using Prefix Products`:

    - Instead of storing all numbers, we store cumulative products.
    - If `num == 0`, any subsequent product involving it will be `0`, so we reset the prefix array.

2. `Handling `0`s`:

    - If a `0` is encountered, it invalidates all previous products.
    - We reset `prefixProducts` to `{1}` and restart tracking from `n = 0`.

3. `Efficient Querying`:
    - We can compute the last `k` numbers' product in `O(1)` using:
    - If `k > n`, it means a `0` was encountered within the last `k` elements, so return `0`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - For n operations, the total time complexity is `O(n)`.
-   Space-Complexity: `O(n)` - The prefixProduct list stores the cumulative product of the numbers added
