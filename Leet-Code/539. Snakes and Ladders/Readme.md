
## 909. Snakes and Ladders

This problem involved about, you are given an n x n integer matrix board where the cells are labeled from 1 to n2 in a Boustrophedon style starting from the bottom left of the board (i.e. board[n - 1][0]) and alternating direction each row. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/snakes-and-ladders/description/)

**Approach :**<br/>

1. Initialize a queue `q` for BFS traversal and a 2D vector `vis` to keep track of visited cells.
2. Push the starting cell (1) into the queue and mark it as visited.
3. Initialize a variable `res` to store the minimum number of moves required to reach the last cell.
4. While the queue is not empty:
    - Process each cell in the current level of BFS traversal:
        - If the current cell is the last cell (n x n), return the result.
        - Otherwise, explore all possible moves (1 to 6) from the current cell:
            - Calculate the next step based on the current cell and the move.
            - Get the row and column of the next step using the `getRowCol` function.
            - If the next step is within the bounds of the board and has not been visited:
                - Mark the next step as visited.
                - If the next step does not contain a ladder or a snake, push it into the queue.
                - If the next step contains a ladder or a snake, push the destination cell of the ladder or snake into the queue.
    - Increment the result to represent moving to the next level of BFS traversal.
5. If the queue becomes empty and the last cell is not reached, return -1, indicating that it's impossible to reach the last cell.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - The time complexity of the BFS algorithm is O(N^2), where N is the number of cells in the board.

-   Space-Complexity: `O(n ^ 2)` - The space complexity is O(N^2) as well, considering the space required for the queue and the visited vector.
