# 2523. Closest Prime Numbers in Range

This problem involved about, give integers left and right, find the two integers num1 and num2 such that.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/closest-prime-numbers-in-range/description)

**Approach :**<br/>

1. `Generate Prime Numbers`
    - Use the `Sieve of Eratosthenes` to find all prime numbers in the given range efficiently.
2. `Find the Closest Pair`
    - Iterate through the prime numbers list and find the `smallest difference` between two adjacent primes.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log * log(n))` - For Sieve of Eratosthenes algorithm
-   Space-Complexity: `O(n)` - we are using an extra array to stores primes.
