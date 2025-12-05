# 1304. Find N Unique Integers Sum up to Zero

This problem involved about, given an integer n, return any array containing n unique integers such that they add up to 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/)

**Approach :**<br/>

1. `Symmetric Pairs`: For every positive integer, include its negative counterpart to cancel out the sum.
2. `Odd Length Handling`: When `n` is odd, include zero to maintain the sum while having the required number of elements.
3. `Distinct Integers`: Using positive/negative pairs and zero ensures all elements are distinct.

**Algorithm :**<br/>

1. `Generate Pairs`:
    - For `i` from 1 to `n/2`:
        - Add `i` and `-i` to the result array
2. `Handle Odd Case`:
    - If `n` is odd, add `0` to the result
3. `Return` the generated array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the n/2.
-   Space-Complexity: `O(1)` - Only constant amount spaces are used.
