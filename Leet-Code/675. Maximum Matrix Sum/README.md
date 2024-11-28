# 1975. Maximum Matrix Sum

This problem involved about, you are given an n x n integer matrix. You can do the following operation any number of times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-matrix-sum/description/)

**Approach :**<br/>

1. The absolute values of the elements determine the maximum possible sum.
2. To maximize the matrix sum:
    - Compute the sum of absolute values of all elements.
    - Count the total number of negative values in the matrix.
    - Keep track of the smallest absolute value in the matrix.
3. If the count of negative numbers is odd, the matrix will always contain at least one negative number, reducing the maximum sum by twice the smallest absolute value.

**Algorithm :**<br/>

1. Traverse the matrix and compute:
    - The total sum of absolute values (`sum`).
    - The count of negative numbers (`totalNegativeNum`).
    - The smallest absolute value in the matrix (`minNegativeValue`).
2. If `totalNegativeNum` is odd, subtract `(2 * minNegativeValue` from the sum to account for the unavoidable negative number.
3. Otherwise, return the total sum.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m) ` - where m and n are the dimensions of the matrix. This is due to the single traversal of the matrix.
-   Space-Complexity: `O(1)` - as no additional space is used apart from variables.
