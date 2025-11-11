# 3542. Minimum Operations to Convert All Elements to Zero

This problem involved about, you are given an array `nums` of size n, consisting of non-negative integers. Your task is to apply some (possibly zero) operations on the array so that all elements become 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/description/)

**Algorithm :**<br/>

1. Initialize an empty stack `st` and a result counter `res = 0`.
2. Iterate over each number `item` in `nums`:
    - While the stack is not empty and the top element is greater than `item`, pop from the stack.
    - Skip `item` if it equals 0 (since zeros are ignored).
    - If the stack is empty or the top element is less than `item`:
        - Increment `res` (count one operation).
        - Push `item` into the stack.
3. After processing all elements, return `res` as the minimum number of operations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each element is pushed and popped from the stack at most once.
-   Space-Complexity: `O(n)` - The stack can hold up to `n` elements in the worst case.
