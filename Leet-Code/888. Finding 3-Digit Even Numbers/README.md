# 2094. Finding 3-Digit Even Numbers

This problem involved about, you are given an integer array digits, where each element is a digit. The array may contain duplicates.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/finding-3-digit-even-numbers/description/)

**Key Insights :**<br/>

1. `Three-Digit Constraint`: Numbers must be between 100-999
2. `Even Numbers`: Last digit must be even (0, 2, 4, 6, 8)
3. `Unique Digits`: Each digit in a number must come from distinct positions in the input
4. `Duplicate Handling`: Must avoid duplicate numbers in the result

**Algorithm Steps :**<br/>

1. `Triple Nested Loop`:
    - Outer loops generate all possible combinations of three distinct digits
    - Check if the combination forms a valid three-digit even number
2. `Set for Uniqueness`:
    - Use a set to automatically handle duplicates
3. `Result Preparation`:
    - Convert set to vector
    - Sort the final result

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3) + O(n * log(n))` - where n is number of digits. Sorting required `O(n * log(n))` time complexity.
-   Space-Complexity: `O(n)` - set storage for unique numbers.
