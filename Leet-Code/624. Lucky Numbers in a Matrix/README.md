# 1380. Lucky Numbers in a Matrix

This problem involved about, given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.<br/>
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/)

**Approach :**<br/>

1. **Identify Minimums in Rows**:

    - Iterate through each row and find the minimum element.
    - Store these minimum elements in a set.

2. **Identify Maximums in Columns**:

    - Iterate through each column and find the maximum element.
    - Store these maximum elements in a set.

3. **Find Intersection**:

    - Check for elements that are present in both sets (i.e., elements that are both row minimums and column maximums).
    - Add these elements to the result list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns, due to iterating through all elements of the matrix.

-   Space-Complexity: `O(n + m)` - for storing the minimums of rows and maximums of columns.