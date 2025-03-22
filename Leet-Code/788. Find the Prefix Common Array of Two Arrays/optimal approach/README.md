# 2657. Find the Prefix Common Array of Two Arrays

This problem involved about, you are given two 0-indexed integer permutations A and B of length n

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/)

**Approach :**<br/>

1. `Initialization`:

    - Use a frequency array `freq` of size `n+1` (assuming the elements of `A` and `B` are in the range `1` to `n`).
    - Initialize a counter `count` to track the total number of elements that have appeared in both prefixes.

2. `Iterate Through the Arrays`:

    - For each index `i`:
        - Increment the frequency of `A[i]` and `B[i]`.
        - If the frequency of any element becomes `2`, it indicates the element is common in both prefixes. Increment `count` for each such occurrence.
        - Store the value of `count` at index `i` in the result array `res`.

3. `Return the Result`:
    - Return the array `res` containing the prefix common counts.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterates over `n` indices.
-   Space-Complexity: `O(n)` - Frequency array `freq` requires.
