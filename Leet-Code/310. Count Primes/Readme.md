## 204. Count Primes

This problem involved about, Given an integer n, return the number of prime numbers that are strictly less than n.

# Problem description

For better problem description, please visit [Leetcode Page](https://leetcode.com/problems/count-primes/description/)

**Approach :**<br/>

-   We need `sieve-of-eratosthenes` algorithm to solved this problem, [Learn sieve-of-eratosthenes ](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - We iterate over `i = 2 to n`, that has `O(n)` times cost, for each i we removed multiple of `i` item, that has `O(log(n))` times. Overall times will be taken `O(n*log(n))`
-   Space-Complexity: `O(n)` - we are using an extra space to mark primes number
