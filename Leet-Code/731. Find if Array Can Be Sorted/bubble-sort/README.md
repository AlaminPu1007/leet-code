## 3011. Find if Array Can Be Sorted

This problem involved about, you are given a 0-indexed array of positive integers nums.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-if-array-can-be-sorted/description/)

**Approach :**<br/>

1. `Bubble Sort with Constraints`:
    - Iterate over each element in the array, performing a modified bubble sort.
    - If two adjacent elements `nums[j]` and `nums[j + 1]` are out of order (i.e., `nums[j] > nums[j + 1]`):
        - Check if they have the same number of set bits.
        - If they do, swap them and continue.
        - If they don't, sorting is impossible under the given constraints, so return `false`.
2. `CountBits Helper Function`:
    - A helper function `CountBits` calculates the number of set bits (1s) in the binary representation of a given number using bitwise operations.
3. If the loop completes without returning `false`, the array can be sorted with the allowed swaps, so return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - The algorithm resembles bubble sort, where we may need to check every element with every other element.
-   Space-Complexity: `O(1)` - Only a few additional variables are used for counting and swapping.
