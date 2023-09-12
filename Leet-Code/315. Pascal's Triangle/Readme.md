## 118. Pascal's Triangle

This problem involved about, given an integer numRows, return the first numRows of Pascal's triangle.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/pascals-triangle/description/)

**Approach :**<br/>

-   Start with a list containing the first row [1]
-   For each subsequent row, generate it based on the last row in the list. Start and end each row with 1 and fill the middle elements according to Pascal's rule.
-   After generating the required number of rows, return the triangle.

**Complexity Analysis :**<br/>

-   Time Complexity: `O(n^2)`-
-   Space Complexity: `O(n^2)`
