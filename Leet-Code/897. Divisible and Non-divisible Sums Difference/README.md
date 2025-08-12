# 2894. Divisible and Non-divisible Sums Difference

This problem involved about, you are given positive integers n and m.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/)

**Key Insights :**<br/>

1. `Divisibility Check`: For each number in [1,n], check divisibility by m
2. `Separate Summation`: Maintain two running sums for divisible and non-divisible numbers
3. `Direct Calculation`: The result is simply num1 - num2

**Algorithm Steps :**<br/>

1. `Initialize Sums`: num1 for non-divisible, num2 for divisible
2. `Iterate Through Numbers`:
    - For each number from 1 to n:
        - If divisible by m, add to num2
        - Else, add to num1
3. `Return Difference`: Compute and return num1 - num2

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the input number.
-   Space-Complexity: `O(1)` - additional space (two integer variables).
