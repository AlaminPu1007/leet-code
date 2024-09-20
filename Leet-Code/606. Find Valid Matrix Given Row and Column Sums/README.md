# 1605. Find Valid Matrix Given Row and Column Sums

This problem involved about, you are given two arrays rowSum and colSum of non-negative integers where `rowSum[i]` is the sum of the elements in the ith row and `colSum[j]` is the sum of the elements of the jth column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/description/)

**Approach (Modify with constrains) :**<br/>

1. **Initialization**:

    - Determine the number of rows `n` and columns `m` from `rowSum` and `colSum`.
    - Initialize the result matrix `res` with dimensions `n x m` filled with zeros.
    - Initialize two pointers `i` and `j` to 0, representing the current row and column.

2. **Matrix Filling**:

    - Use a while loop to iterate as long as `i < n` and `j < m`.
    - At each position `res[i][j]`, set the value to the minimum of `rowSum[i]` and `colSum[j]`.
    - Subtract this value from `rowSum[i]` and `colSum[j]`.
    - If `rowSum[i]` becomes zero, move to the next row by incrementing `i`.
    - If `colSum[j]` becomes zero, move to the next column by incrementing `j`.

3. **Return the Result**:
    - Once the matrix is completely filled, return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns. This is because each element in `rowSum` and `colSum` is processed exactly once.

-   Space-Complexity: `O(n * m)` - due to the space required to store the result matrix `res`.

<br/>

## Without modify the constrains (Sometimes interviewer don't want to modify the given constrains)

**Approach :**<br/>

1. **Initialize the Result Matrix**:

    - Determine the number of rows `n` and columns `m` from `rowSum` and `colSum`.
    - Initialize the result matrix `res` with dimensions `n x m` filled with zeros.

2. **Fill Each Row**:

    - For each row, set the first column value to the corresponding value in `rowSum`. This ensures that the sum of each row matches the given `rowSum`.

3. **Adjust Columns**:

    - For each column, calculate the current column sum.
    - If the current column sum exceeds the required column sum (`colSum[col]`), adjust the values by shifting the excess to the next column.
    - Continue this process until all columns satisfy their respective column sums.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - This is because we iterate through each element in the matrix multiple times, first to initialize the rows and then to adjust the columns.

-   Space-Complexity: `O(n * m)` - due to the space required to store the result matrix `res`.
