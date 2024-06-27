# 330. Patching Array

This problem involved about,given a sorted integer array nums and an integer n, add/patch elements to the array such that any number in the range [1, n] inclusive can be formed by the sum of some elements in the array. <br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/patching-array/description/)

**Approach :**<br/>

1.  **Initialization:**
2.  -   Set `range` to `1` (the smallest number to cover).
    -   Initialize `res` to `0` (no patches added initially).
    -   Set index `i` to `0` to start iterating through `nums`.

3.  **Iterate Until Range Exceeds n:**
4.  -   While `range` is less than or equal to `n`:
        -   If the current element in `nums` is less than or equal to `range`, extend the range by adding the current element (`range += nums[i]`) and move to the next element (`i++`).
        -   If the current element in `nums` is greater than `range`, add `range` itself as a patch to extend the range (`range += range`), and increment the patch counter `res`.

5.  **Return Result:**
6.  -   The variable `res` will contain the minimum number of patches needed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(l * log(n))` - The loop runs until `range` exceeds `n`, and each iteration involves a constant amount of work, making the time complexity `O(l + log n)`, where `l` is the length of `nums`.

-   Space-Complexity: `O(1)` - as the algorithm uses only a few additional variables.
