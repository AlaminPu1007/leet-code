# 2657. Find the Prefix Common Array of Two Arrays

This problem involved about, you are given two 0-indexed integer permutations A and B of length n

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/)

**Approach :**<br/>

1. `Initialization`:

    - Use two hash sets `st1` and `st2` to store elements from `A` and `B` up to the current index `i`.

2. `Iterate Through the Arrays`:

    - For each index `i` from `0` to `n-1`:
        - Add `A[i]` to `st1` and `B[i]` to `st2`.
        - Iterate over the smaller of the two sets (optimization opportunity) and count how many elements are common.

3. `Store Results`:

    - Append the count of common elements for each prefix to the result vector `res`.

4. `Return the Result`:
    - Return the `res` vector containing the prefix common counts.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - Using two nested loops. Outer loop: Runs for `n` indices. Inner loop: Iterates over the elements of `st1` (or potentially `st2`).
-   Space-Complexity: `O(n)` - We are using an result array ans set data structure.
