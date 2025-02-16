# 2762. Continuous Subarrays

This problem involved about, you are given a 0-indexed integer array `nums`. A `subarray` of `nums` is called continuous if:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/continuous-subarrays/description/)

**Approach :**<br/>

1. `Use Two Pointers`:

    - Maintain a window `[left, right]` where the absolute difference between the maximum and minimum elements is at most `2`.

2. `Track Maximum and Minimum Elements`:

    - Use a `map` (or `multiset`) to store the frequency of elements in the current window.
    - The maximum element in the window is the last key in the map, and the minimum is the first key.

3. `Shrink the Window if Condition Fails`:

    - If the absolute difference between the maximum and minimum exceeds `2`, increment `left` to shrink the window and restore the condition.
    - Update the map accordingly by removing elements that are no longer part of the window.

4. `Calculate Valid Subarrays`:
    - For every `right`, the number of valid subarrays ending at `right` is `(right - left + 1)`.

**Complexity Analysis :**<br/>

-   Time-Complexiyt: `O(n * log(n))` - Iterating over the array takes `O(n)`, Inserting into or erasing from the map takes `O(log(n))`.
-   Space-Complexity: `O(n)` - The map can contain at most 3 elements (due to the difference constraint).
