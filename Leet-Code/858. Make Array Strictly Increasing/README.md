# 1187. Make Array Strictly Increasing

This problem involved about, given two integer arrays arr1 and arr2, return the minimum number of operations (possibly zero) needed to make arr1 strictly increasing.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/make-array-strictly-increasing/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given two arrays `arr1` and `arr2`.
    - The goal is to make `arr1` strictly increasing by performing operations where we can replace elements in `arr1` with elements from `arr2`.
    - We need to find the minimum number of such operations or return `-1` if it's not possible.

2. `Algorithm`:

    - Sort `arr2` to enable efficient binary search for replacement candidates.
    - Use `recursion with memoization` to explore all possible operations:
        - At each index in `arr1`, decide whether to keep the current element (if it maintains the strictly increasing order) or replace it with a suitable element from `arr2`.
        - Use binary search (`upper_bound`) to find the smallest element in `arr2` that is greater than the previous element.
        - Memoize the results to avoid redundant calculations.

3. `Steps`:
    - Sort `arr2`.
    - Initialize a memoization cache (`Cache`) to store results of `subproblems`.
    - Define a recursive function `Solved`:
        1. If the current index exceeds the array bounds, return `0` (no more operations needed).
        2. If the current state is already computed, return the cached result.
        3. If the current element in `arr1` is greater than the previous element, consider keeping it.
        4. Use binary search to find a replacement from `arr2` that maintains the strictly increasing order.
        5. Return the minimum operations required from both choices.
    - The final result is the minimum operations required or `-1` if not possible.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * log(n))` - sorting takes `O(n * log(n))`. where `n` is the size of `arr1` and `m` is the size of `arr2`.
-   Space-Complexity: `O(n * m)` - due to the memoization cache storing results for each state `(idx, prv)`.
