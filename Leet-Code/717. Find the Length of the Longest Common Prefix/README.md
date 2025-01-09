# 3043. Find the Length of the Longest Common Prefix

This problem involved about, you are given two arrays with positive integers arr1 and arr2.<br/>

A prefix of a positive integer is an integer formed by one or more of its digits, starting from its leftmost digit. For example, 123 is a prefix of the integer 12345, while 234 is not.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/description/)

**Approach :**<br/>

#### Trie Construction

1. Use a `Trie (Prefix Tree)` to store the prefixes of numbers from `arr2`.
2. For each number in `arr2`, convert the number into a string.
3. Insert each possible prefix of the number into the Trie.
    - For example, for the number `123`, insert the prefixes `1`, `12`, and `123`.
4. This Trie allows for efficient prefix lookups when comparing numbers in `arr1` to the prefixes in `arr2`.

#### Counting Common Prefixes

1. For each number in `arr1`, convert the number to a string.
2. Use the Trie to find the longest matching prefix between the current number from `arr1` and any number in `arr2`.
3. The Trie traversal stops when a mismatch occurs or the entire string has been matched.
4. The result is the length of the longest common prefix between any number in `arr1` and `arr2`.

#### Return the Maximum Length

-   After traversing all numbers in `arr1`, return the maximum length of the common prefix found.

**Algorithm :**<br/>

1. `Insert Prefixes`:  
   For each number in `arr2`, convert the number to a string and insert all possible prefixes into the Trie.
2. `Count Common Prefixes`:  
   For each number in `arr1`, convert the number to a string and traverse the Trie to find the longest common prefix with any of the numbers in `arr2`.

3. `Result`:  
   Track the maximum length of the common prefixes and return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((m + n) * L)` - where `m` is the number of numbers in `arr2`, `n` is the number of numbers in `arr1`, and `L` is the average number of digits in the numbers.
-   Space-Complexity: `O((m + n) * L)` - Storing the numbers from `arr1` and `arr2` as strings requires `O(n * L + m * L)` space.