# 2022. Convert 1D Array Into 2D Array

This problem involved about, you are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with m rows and n columns using all the elements from original.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/convert-1d-array-into-2d-array/description)

**Approach :**<br/>

1. `Check Validity`:

    - If the size of `original` does not match `m * n`, return an empty array since it's not possible to construct the desired 2D array.

2. `Construct 2D Array `:
    - Iterate over the range from `0` to `m`, where `m` is the number of rows.
    - For each row, extract `n` elements from `original` starting at the correct index and append them to the current row.
    - Add the constructed row to the result array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m * n)` - The time complexity is linear with respect to the total number of elements in the 2D array, which is `m * n`. This is because we iterate over each element once to place it in the correct position in the 2D array.

-   Space-Complexity: `O(m * n)` - The space complexity is also linear, as we are creating a new 2D array with m \* n elements.