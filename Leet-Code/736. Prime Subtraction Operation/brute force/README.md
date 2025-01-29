# 2601. Prime Subtraction Operation

This problem involved about, you are given a 0-indexed integer array `nums` of length n.
You can perform the following operation as many times as you want:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/prime-subtraction-operation/description/)

**Approach :**<br/>

1. `Iterate Through Array`:
    - Use a variable `prv` to store the previous target value of the transformed array. Initially, set `prv = 0`.
    - For each `nums[i]`:
        - Calculate `upper_bound = nums[i] - prv`. This is the maximum value a prime number can be subtracted from `nums[i]` while still ensuring `target_num > prv`.
        - Find the largest prime number less than `upper_bound` by iterating downward and checking for primality.
        - Compute `target_num = nums[i] - largest_prime_number`.
        - If `target_num <= prv`, the transformation fails, and we return `false`.
        - Update `prv` to `target_num` for the next iteration.
2. `Prime Check Helper Function`:

    - Use `isPrime` to check if a number is prime by testing divisibility up to its square root.

3. `Return Result`:
    - If the loop completes without returning `false`, the transformation is successful, and we return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m * sqrt(m))` - For each element, we may check up to `sqrt(m)` primes, where `m` is the current value of `nums[i]`.

-   Space-Complexity: `O(1)` - No additional data structures are used, only primitive variables.
