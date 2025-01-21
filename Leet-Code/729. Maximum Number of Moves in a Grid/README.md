# 2684. Maximum Number of Moves in a Grid

This problem involved about, you are given a 0-indexed m x n matrix grid consisting of positive integers.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-number-of-moves-in-a-grid/description/)

**Approach :**<br/>

1. `Initialize the Starting Points`:
    - Use a queue for breadth-first search (BFS), as BFS will naturally find the shortest path in terms of moves.
    - Enqueue all cells in the first column as the initial positions, each with a move count of 0.
2. `Explore Possible Moves`:

    - For each cell, explore the three possible directions (right, diagonally up-right, diagonally down-right) defined by `dirs = {-1, 0, 1}` for row adjustments.
    - Ensure the target cell:
        - Is within bounds.
        - Has not been visited before.
        - Contains a value greater than the current cell.

3. `Track the Maximum Moves`:
    - For each valid move, increment the move count and update the maximum result.
4. `Edge Cases`:
    - Single row or single column.
    - Non-increasing values, where no valid moves exist beyond the initial position.

**Complexity Analysis :**<br/>

-   Time-Complexity: `(n*m)` - where `n` is the number of rows and `m` is the number of columns, as each cell is visited once.
-   Space-Complexity: `(n*m)` - for maintaining the visited matrix and BFS queue.
