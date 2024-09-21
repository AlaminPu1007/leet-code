# 840. Magic Squares In Grid

This problem involved about, A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/magic-squares-in-grid/description)

**Approach :**<br/>

1. `Iterate Over All Possible 3x3 Subgrids`:

    - The main function `numMagicSquaresInside` iterates over every possible 3x3 subgrid in the given grid.
    - For each subgrid, it checks if it forms a magic square.

2. `Check Magic Square Conditions`:

    - Use a helper function `isMagicSquare` to check if the subgrid is a magic square.
    - The function checks the following:
        - All numbers in the subgrid are unique and within the range 1 to 9.
        - The sum of all rows, columns, and both diagonals are the same.

3. `Return the Count`:

    - If a 3x3 subgrid is a magic square, increment the result counter.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where n is the number of rows and m is the number of columns in the grid. Each 3x3 subgrid is checked in constant time.
-   Space-Complexity: `O(1)` - additional space, excluding the space for the grid itself.