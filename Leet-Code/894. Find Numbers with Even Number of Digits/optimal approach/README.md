# 1295. Find Numbers with Even Number of Digits

This problem involved about, given an array `nums` of integers, return how many of them contain an even number of digits.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

**Key Insights :**<br/>

1. `Fixed Digit Ranges`: Numbers with even digits fall into specific ranges:
    - 10-99 (2 digits)
    - 1000-9999 (4 digits)
    - 100000 (6 digits)
2. `Range Checking`: Direct range comparisons are faster than digit counting
3. `Special Case Handling`: Explicit check for 100000 (the only 6-digit number in constraints)

**Algorithm Steps :**<br/>

1. `Initialize Counter`: Start with `res = 0`
2. `Iterate Through Array`:
    - Check if number falls in 2-digit, 4-digit, or is exactly 100000
    - Increment counter if condition is met
3. `Return Result`: Total count of numbers in even-digit ranges

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is array size.
-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will by input size.
