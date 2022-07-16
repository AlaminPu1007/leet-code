# 48. Rotate Image

problem link: https://leetcode.com/problems/rotate-image/

**Problem :**<br><br>
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).<br>

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.<br>

**Approach :**<br><br>
First, we need to swap row value by column value.<br>

for i = 0 to length<br>
for j = 0 to i<br>
swap(matrix[i][j], matrix[j][i])<br>

swap is a predefined library function.<br>

Then, Reverse array row by using reverse method.Its also an library method.<br>

**Complexity :**<br>
T.C : O(n)
S.C: O(1)
