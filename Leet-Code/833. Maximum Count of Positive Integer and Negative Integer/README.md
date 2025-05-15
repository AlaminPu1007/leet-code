# 2529. Maximum Count of Positive Integer and Negative Integer

This problem involved about, given an array `nums` sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a sorted array `nums` containing integers.
    - The goal is to find the maximum count of either `negative numbers` or `positive numbers` in the array.
    - The array may contain zeros, which should not be counted as either positive or negative.

2. `Algorithm`:

    - Use `binary search` to find the first index where the value is `greater than or equal to zero` (`lowerBound`). This gives the count of negative numbers.
    - Use `binary search` to find the first index where the value is `greater than zero` (`upperBound`). This gives the count of positive numbers.
    - The count of negative numbers is the index returned by `lowerBound`.
    - The count of positive numbers is the total length of the array minus the index returned by `upperBound`.
    - Return the maximum of the two counts.

3. `Steps`:
    - Implement `lowerBound`:
        - Use binary search to find the first index where the value is greater than or equal to zero.
    - Implement `upperBound`:
        - Use binary search to find the first index where the value is greater than zero.
    - Compute the count of negative numbers using `lowerBound`.
    - Compute the count of positive numbers using `upperBound`.
    - Return the maximum of the two counts.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - Both `lowerBound` and `upperBound` use binary search, which operates in logarithmic time.

-   Space-Complexity: `O(1)` - as only a few variables are used.
