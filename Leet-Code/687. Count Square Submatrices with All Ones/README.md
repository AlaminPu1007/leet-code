# 1277. Count Square Submatrices with All Ones

This problem involved about, given a `m * n` matrix of ones and zeros, return how many square sub-matrices have all ones.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/)

**Approach :**<br/>

1. `Dynamic Programming with Memoization`:
    - Use a 2D DP matrix to store the results of previous subproblems, reducing redundant calculations.
2. `Recursive DFS to Calculate Square Sides`:
    - For each cell `(i, j)`, recursively calculate the maximum square length that can end at that cell by checking the squares that can be formed from the cells to the right, below, and diagonally.
3. `Result Accumulation`:
    - The final count of square submatrices is obtained by summing up the values calculated for each cell.

**Algorithm :**<br/>

4. `Initialize the DP Matrix`: Set up a DP matrix to store the maximum square side lengths for each cell.
5. `Iterate through the Matrix`:
    - For each cell `(i, j)`, if it contains a `1`, calculate the maximum square submatrix that can be formed ending at `(i, j)`.
6. `Recursive DFS Calculation`:
    - For each cell, compute the minimum side length from its neighboring cells to form the largest square possible.
7. `Sum Up Results`: Sum up values in the DP matrix to get the final count of square submatrices.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns. Each cell is visited once.

-   Space-Complexity: `O(n * m)` - required for the DP matrix to store intermediate results.
