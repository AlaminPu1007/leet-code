# 264. Ugly Number II

This problem involved about, an ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.<br/>
Given an integer n, return the nth ugly number.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/ugly-number-ii/description/)

**Approach :**<br/>

1. `Use a Min-Heap (Priority Queue)`:

    - Start with 1 in the priority queue since 1 is the first ugly number.
    - Use a set to track the ugly numbers that have been added to avoid duplicates.

2. `Iterate to Find the Nth Ugly Number`:

    - Pop the smallest number from the heap.
    - For each factor (2, 3, and 5), multiply it with the current smallest number to generate the next potential ugly numbers.
    - Add these new numbers to the heap if they haven't been added before.
    - Repeat the process until you reach the nth ugly number.

3. `Return the Result`:
    - When the nth ugly number is found, return it.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Where `n` is the nth ugly number. Each insertion and deletion in the priority queue takes `O(n * log(n))` time.
-   Space-Complexity: `O(n)` - for storing ugly numbers in the set and priority queue.