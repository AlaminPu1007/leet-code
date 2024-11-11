# 885. Spiral Matrix III

This problem involved about, you start at the cell (rStart, cStart) of an rows x cols grid facing east. The northwest corner is at the first row and column in the grid, and the southeast corner is at the last row and column.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/spiral-matrix-iii/description/)

**Approach :**<br/>

1. `Initialize Variables`:

    - `r` and `c` to keep track of the current row and column.
    - `i` to keep track of the direction.
    - `step` to keep track of the number of steps to move in the current direction.

2. `Direction Vectors`:

    - Use `del_row` and `del_col` vectors to define the direction of movement (right, down, left, up).

3. `Spiral Pattern`:

    - The movement pattern in the spiral follows:
        - Step size increments after two directions.
        - Each direction is repeated twice.

4. `Traverse and Collect Coordinates`:

    - Traverse the matrix in the defined spiral order.
    - For each valid coordinate within the bounds, add it to the result.

5. `Stop Condition`:
    - Continue until all cells in the matrix are visited.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where n is the number of rows and m is the number of columns. Each cell is visited once.
-   Space-Complexity: `O(n * m)` - For result array.