# 2601. Prime Subtraction Operation

This problem involved about, you are given a 0-indexed integer array `nums` of length n.
You can perform the following operation as many times as you want:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/prime-subtraction-operation/description/)

**Approach :**<br/>

1. `Prime Number Precomputation`:

    - First, precompute all prime numbers up to the maximum value in the array `nums` using a sieve-like approach.
    - Store the largest prime less than or equal to each number in a `primes` array. This allows constant-time access to the largest prime number less than any `nums[i]`.

2. `Sliding Window`:

    - Use a variable `prv` to track the previous transformed value (initially set to `nums[0]`).
    - For each `nums[i]`, calculate the maximum prime that can be subtracted from `nums[i]` such that the resulting value is greater than `prv` (i.e., the transformed sequence remains strictly increasing).
    - If at any point the largest prime is greater than or equal to `nums[i] - prv`, return `false`.

3. `Return Result`:
    - If the loop completes without any issues, return `true` indicating the transformation is possible.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m * sqrt(m))` - for iterating over `nums` and checking the primes, and `O(m * sqrt(m))` to generate primes, where `m` is the maximum number in `nums`.

-   Space-Complexity: `O(n)` - For the `primes` array used to store the largest primes up to the maximum number.
