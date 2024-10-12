# 2326. Spiral Matrix IV

This problem involved about, you are given two integers m and n, which represent the dimensions of a matrix.
You are also given the head of a linked list of integers.

## problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/spiral-matrix-iv/description/)

**Approach :**<br/>

1. `Initialize the Matrix:`

    - Create a 2D grid (`m x n`) and initialize all cells with `-1`. This will be the matrix to fill in a spiral order.

2. `Define the Directions for Spiral Movement:`

    - Set the directions for movement in a spiral pattern: right (`[0, 1]`), down (`[1, 0]`), left (`[0, -1]`), and up (`[-1, 0]`). Use these directions to control how the pointer moves within the matrix.

3. `Traverse the Linked List and Fill the Matrix:`

    - Start at the top-left corner of the matrix (`[0, 0]`).
    - For each node in the linked list, assign its value to the current matrix cell.
    - Check if the next move goes out of bounds or lands on an already filled cell (not `-1`). If so, change direction in a cyclic manner (right → down → left → up).

4. `Edge Cases:`
    - If the linked list has fewer nodes than the total number of cells (`m * n`), leave the remaining cells filled with `-1`.
    - If the linked list is longer than the matrix size, only the first `m * n` nodes are used.

**Algorithm :**<br/>

1. Initialize a `m x n` matrix filled with `-1`.
2. Define the directions for spiral movement.
3. Traverse the linked list and fill the matrix in the spiral order, checking boundaries and filled cells to change direction.
4. Return the filled matrix.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - is the time to traverse and fill the entire matrix with values from the linked list
-   Space-Complexity: `O(n * m)` - The additional space is used for the `m x n` matrix.