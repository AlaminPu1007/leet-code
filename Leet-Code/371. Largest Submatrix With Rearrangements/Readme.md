## 1727. Largest Submatrix With Rearrangements

This problem involved about, you are given a binary matrix matrix of size m x n, and you are allowed to rearrange the columns of the matrix in any order.<br/>

Return the area of the largest `sub-matrix` within matrix where every element of the `sub-matrix` is 1 after reordering the columns optimally.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-submatrix-with-rearrangements/description/)

**Approach :**<br/>

1. Traverse each row of the matrix.
2. For each row, update the count of consecutive 1s for each column based on the count from the previous row.
3. Sort the counts in non-ascending order and calculate the area of the rectangle for each column.
4. Keep track of the maximum area encountered so far.

**Algorithm :**<br/>

1. Initialize ans to 0 (the maximum area).
2. Iterate over each row in the matrix.
    - Update the consecutive 1s count for each column based on the count from the previous row.
    - Create a copy of the current row and sort it in non-ascending order.
    - For each column, calculate the area of the rectangle formed by considering consecutive 1s and update ans accordingly.
3. Return the final ans.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m * n * log(n))`
-   Space-Complexity: `O(m * n)`

**References :**<br/>

-   [Learn from Leet-Code official solution](https://leetcode.com/problems/largest-submatrix-with-rearrangements/editorial/)
