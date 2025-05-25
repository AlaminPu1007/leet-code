# 3191. Minimum Operations to Make Binary Array Elements Equal to One I

This problem involved about, you are given a binary array `nums`. You can do the following operation on the array any number of times (possibly zero):

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a binary array `nums`.
    - The goal is to make all elements of the array `1` using the minimum number of operations.
    - In one operation, we can flip a subarray of length `3` (i.e., toggle `0` to `1` or `1` to `0` for three consecutive elements).

2. `Algorithm`:

    - Iterate through the array from the beginning to the third last element.
    - If the current element is `0`, perform a flip operation on the current element and the next two elements.
    - Increment the operation count (`res`) for each flip.
    - After processing all elements, check if the last two elements are `1`. If not, return `-1` (it is impossible to make all elements `1`).
    - Return the total number of operations.

3. `Steps`:
    - Initialize `res` to `0`.
    - Iterate through the array from index `0` to `n - 3`:
        - If the current element is `0`, flip it and the next two elements.
        - Increment `res` by `1`.
    - After the loop, check if the last two elements are `1`. If not, return `-1`.
    - Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate through the array once, and each flip operation takes constant time.
-   Space-Complexity: `O(1)` - as only a few variables are used.
