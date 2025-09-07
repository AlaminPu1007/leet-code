# 688. Knight Probability in Chessboard

This problem involved about, on an `n x n` chessboard, a knight starts at the cell (row, column) and attempts to make exactly k moves. The rows and columns are 0-indexed, so the top-left cell is `(0, 0)`, and the bottom-right cell is `(n - 1, n - 1)`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/knight-probability-in-chessboard/description/)

**Key Insights :**<br/>

1. `Recursive Exploration`: The knight has 8 possible moves at each step
2. `Memoization`: Store computed probabilities to avoid redundant calculations
3. `Probability Calculation`: Each move contributes 1/8 to the total probability
4. `Boundary Conditions`: Knight exits if moves off the board

**Algorithm Steps :**<br/>

1. `Base Cases`:

    - If knight moves off board: return 0 probability
    - If no moves left (k=0): return 1 probability

2. `Memoization Check`:

    - Use current position and remaining moves as memoization key
    - Return stored value if already computed

3. `Recursive Calculation`:

    - For each of 8 possible moves:
        - Calculate probability of staying on board after k-1 moves
        - Sum all valid move probabilities
    - Divide total by 8 (each move has equal probability)

4. `Result Storage`: - Store computed probability in memoization table - Return final probability
   **Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * n^2)` - there are total `O(k * n^2)` possible states.
-   Space-Complexity: `O(k * n^2)` - for memoization.
