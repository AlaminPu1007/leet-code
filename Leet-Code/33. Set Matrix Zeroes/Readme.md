# 73. Set Matrix Zeroes

Problem link: https://leetcode.com/problems/set-matrix-zeroes/

**Problem :**<br>

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's. <br>
You must do it in place. <br>

**Approach :**<br>

- First approach

1. we need an extra array to store column and row value.<br>
2. then, loop through and find-out row and column value is already present inside our extra array or not.<br>
3. if it's true, make matrix[i][j] = 0.<br>

- Second approach

1. Whenever we get zero from our matrix array, we will replace first row and column value with 0.

   for i = 0 to i < row_len <br>

   if (matrix[i][0] == 0) <br>
   isCol = true <br>

   for j = 0 to j < col_len - 1 <br>

   if matrix[i][j] == 0<br>
   then,<br>
   matrix[i][0] = 0 <br>
   matrix[0][j] = 0 <br>

2. now make each row and col to 0
   for i = row_len - 1 to i >= 0 <br>
   for j = col_len - 1 to j >= 1 <br>
   if (matrix[i][0] == 0 || matrix[0][j] == 0)<br>
   matrix[i][j] = 0 <br>

   // if first element of matrix is zero <br>
   // then make all element of first row as zero <br>
   if isCol == true <br>
   matrix[i][0] = 0 <br>

**Complexity :**<br>

1. First approach

- Time-complexity O(MN)
- Space-complexity O(M + N)

2. Second approach

- Time-complexity O(MN)
- Space-complexity O(1)
