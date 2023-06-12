## 1351. Count Negative Numbers in a Sorted Matrix

This problem is involved about, given a `m x n` matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)

**Algorithm :**<br/>

-   Initialize a variable `count = 0`, to count the total number of negative elements in the matrix.
-   sing two nested for-loops iterate on each element of the matrix grid, and if the element is negative increment the count by 1
-   Return count

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m)`- We iterate on each element of the matrix once, and the total number of the elements in the matrix is `n*m`
-   Space-Complexity: `O(1)`- We don't use any additional space.
