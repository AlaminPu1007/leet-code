## 867. Transpose Matrix

This problem involved about, given a 2D integer array matrix, return the transpose of matrix.<br/>
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/transpose-matrix/description/)

**Approach :**<br/>

1. Get the dimensions of the original matrix matrix (n rows and m columns).
2. Initialize an empty matrix res with dimensions m by n.
3. Iterate through each element of the original matrix using two nested loops:
    - Set res[j][i] (row j, column i of the transposed matrix) to be equal to matrix[i][j] (row i, column j of the original matrix).
4. Return the transposed matrix res.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m)` - where n is the number of rows and m is the number of columns in the original matrix.
-   Space-Complexity: `O(n*m)` - as the algorithm creates a new matrix with dimensions m by n to store the transposed matrix. The space required is directly proportional to the size of the input matrix
