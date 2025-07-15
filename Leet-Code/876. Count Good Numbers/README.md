# 1922. Count Good Numbers

This problem involved about, a digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-good-numbers/description/)

**Key Insights :**<br/>

1. `Digit Positions`:
    - Even positions have 5 choices (0,2,4,6,8)
    - Odd positions have 4 choices (2,3,5,7)
2. `Pattern Recognition`:
    - For n digits, there are ceil(n/2) even positions and floor(n/2) odd positions
3. `Modular Arithmetic`:
    - Need to handle large exponents efficiently using binary exponentiation

**Algorithm Steps :**<br/>

1. `Calculate Positions`:
    - Count of even positions = n - n/2
    - Count of odd positions = n/2
2. `Compute Choices`:
    - 5^even_positions \* 4^odd_positions
3. `Efficient Calculation`:
    - Use binary exponentiation to compute large powers under modulo
4. `Return Result`:
    - Return the product modulo `10^9 + 7`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - for each exponentiation.
-   Space-Complexity:`O(1)` - Only constant amount of spaces are used.
