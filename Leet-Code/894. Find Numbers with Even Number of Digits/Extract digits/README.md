# 1295. Find Numbers with Even Number of Digits

This problem involved about, given an array `nums` of integers, return how many of them contain an even number of digits.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

**Key Insights :**<br/>

1. `Digit Counting`: For each number, we need to determine its digit count
2. `Even Check`: Simple modulo operation to check if digit count is even
3. `Efficiency`: Need to handle numbers up to 10^5 efficiently

**Algorithm Steps :**<br/>

1. `Initialize Counter`: Start with `res = 0`
2. `Iterate Through Array`:
    - For each number, count its digits
    - Check if digit count is even
    - Increment counter if condition is met
3. `Return Result`: Total count of numbers with even digit counts

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - the time complexity of `isEvenNumber` is `O(log(m))`, and we iterate over the array onces that also has `O(n)` time complexity.
-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will by input size.
