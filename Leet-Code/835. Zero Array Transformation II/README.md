# 3356. Zero Array Transformation II

This problem involved about, you are given an integer array `nums` of length n and a 2D array queries where `queries[i] = [li, ri, vali]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/zero-array-transformation-ii/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `nums` and a list of queries `queries`, where each query is of the form `[start, end, value]`.
    - The goal is to find the `minimum number of queries` to apply such that the resulting array becomes a `zero array` (all elements are zero).
    - Each query adds `value` to all elements in the range `[start, end]`.

2. `Algorithm`:

    - Use `binary search` to determine the minimum number of queries required.
    - For each candidate number of queries `k`, check if applying the first `k` queries can make the array a zero array.
    - Use a `difference array` to efficiently apply the range updates from the queries.
    - If applying `k` queries can make the array a zero array, try a smaller `k`; otherwise, try a larger `k`.

3. `Steps`:
    - Initialize `left` to `0` and `right` to the total number of queries.
    - Perform binary search on the number of queries:
        1. For each midpoint `mid`, check if applying the first `mid` queries can make the array a zero array using the `canFormZeroArray` function.
        2. If it can, update `right` to `mid - 1`.
        3. If it cannot, update `left` to `mid + 1`.
    - Return the smallest `k` that satisfies the condition.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - where `n` is the size of `nums` and `m` is the number of queries.
-   Space-Complexity: `O(n)` - due to the difference array.
