# 2161. Partition Array According to Given Pivot

This problem involved about, you are given a 0-indexed integer array `nums` and an integer pivot. Rearrange `nums` such that the following conditions are satisfied: <br/>

-   Every element less than pivot appears before every element greater than pivot.
-   Every element equal to pivot appears in between the elements less than and greater than pivot.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/partition-array-according-to-given-pivot/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `nums` and a pivot value.
    - The goal is to rearrange the array such that:
        - All elements less than the pivot come before the pivot.
        - All elements greater than the pivot come after the pivot.
        - The relative order of elements less than or greater than the pivot should be preserved.

2. `Algorithm`:

    - Use two pointers, `less` and `greater`, to track the positions where elements less than the pivot and elements greater than the pivot should be placed.
    - Iterate through the array from the beginning and the end simultaneously:
        - If an element is less than the pivot, place it at the `less` pointer and increment `less`.
        - If an element is greater than the pivot, place it at the `greater` pointer and decrement `greater`.
    - Fill the remaining positions between `less` and `greater` with the pivot.

3. `Steps`: - Initialize a result array `res` of size `n`. - Initialize `less` to `0` and `greater` to `n - 1`. - Iterate through the array: - For each element less than the pivot, place it at the `less` pointer and increment `less`. - For each element greater than the pivot, place it at the `greater` pointer and decrement `greater`. - Fill the remaining positions between `less` and `greater` with the pivot. - Return the result array.
   **Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(n)` - for resultant array.
