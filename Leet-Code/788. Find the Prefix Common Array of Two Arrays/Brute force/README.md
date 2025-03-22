# 2657. Find the Prefix Common Array of Two Arrays

This problem involved about, you are given two 0-indexed integer permutations A and B of length n

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/)

**Approach :**<br/>

1. `Initialization`:

    - Determine the size `n` of the arrays `A` and `B`.
    - Initialize an empty result vector `res` to store the prefix common counts.

2. `Nested Loops`:

    - For each index `i` from `0` to `n-1`:
        - Iterate over the prefix `A[0...i]` and for each element, check if it matches any element in `B[0...i]` using another nested loop.
        - If a match is found, increase the count for the current prefix and ensure duplicates are not overcounted by breaking the inner loop.

3. `Store Results`:

    - Append the count of common elements for each prefix to the result vector.

4. `Return the Result`:
    - Return the `res` vector containing prefix common counts for all indices.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3)` - Using three nested loops.
-   Space-Complexity: `O(n)` - We are using an result array for output.
