## 766. Toeplitz Matrix

[visit problem](https://leetcode.com/problems/toeplitz-matrix/)

**Problem Description :**<br>
Given an `m x n` matrix, `return true` if the matrix is Toeplitz. Otherwise, `return false`.<br>

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.<br>

**Approach :**<br>
Every element belongs to some diagonal, and it's previous element (if it exists) is it's top-left neighbor. Thus, for the square `(r, c)`, we only need to check `r == 0 OR c == 0 OR matrix[r-1][c-1] == matrix[r][c]`.

**Complexity :**<br>
- Time Complexity: `O(M*N)`, as defined in the problem statement.
- Space-Complexity: `O(1)`