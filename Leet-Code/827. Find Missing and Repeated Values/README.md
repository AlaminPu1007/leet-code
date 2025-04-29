# 2965. Find Missing and Repeated Values

This problem involved about, you are given a 0-indexed 2D integer matrix grid of size n \* n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-missing-and-repeated-values/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an `n x n` grid containing integers from `1` to `n^2`, where one number is repeated, and one number is missing.
    - The goal is to find the repeated and missing numbers.

2. `Algorithm`:

    - Use a hashmap (`Map`) to count the frequency of each number in the grid.
    - Iterate through all numbers from `1` to `n^2`:
        1. If a number is not present in the hashmap, it is the missing number.
        2. If a number appears twice in the hashmap, it is the repeated number.
    - Return the repeated and missing numbers.

3. `Steps`:
    - Initialize a hashmap `Map` to store the frequency of each number in the grid.
    - Iterate through the grid and populate the hashmap.
    - Iterate through numbers from `1` to `n^2`:
        1. If a number is not in the hashmap, it is the missing number.
        2. If a number appears twice in the hashmap, it is the repeated number.
    - Return the repeated and missing numbers as a vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - where `n` is the size of the grid.
-   Space-Complexity: `O(n ^ 2)` - due to the hashmap storing up to `n^2` numbers.
