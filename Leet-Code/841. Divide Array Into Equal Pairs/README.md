# 2206. Divide Array Into Equal Pairs

This problem involved about, you are given an integer array `nums` consisting of `2 * n` integers.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-array-into-equal-pairs/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `nums` of integers.
    - The goal is to determine if the array can be divided into pairs such that each pair consists of two equal elements.
    - In other words, every element in the array must appear an even number of times.

2. `Algorithm`:

    - Use a hashmap (`Map`) to count the frequency of each element in the array.
    - Iterate through the array and populate the hashmap with the frequency of each element.
    - Check if all frequencies in the hashmap are even.
    - If any frequency is odd, return `false`; otherwise, return `true`.

3. `Steps`:
    - Initialize a hashmap `Map` to store the frequency of each element.
    - Iterate through the array and update the frequency of each element in the hashmap.
    - Iterate through the hashmap and check if all frequencies are even.
    - Return `true` if all frequencies are even; otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(n)` - due to the hashmap storing up to `n` elements.
