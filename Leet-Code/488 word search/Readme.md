## 79. Word Search

This problem involved about, given an m x n grid of characters board and a string word, return true if word exists in the grid. <br/>

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once. <br/>

# Problem description

For better problem description, please visit []()

**Approach :**<br/>

1. Initialize variables `n` and `m` to store the dimensions of the board.
2. Create a 2D boolean array `visited` to keep track of visited cells in the board.
3. Iterate through each cell in the board using nested loops.
4. For each cell, perform depth-first search (DFS) starting from that cell to search for the word.
5. In the DFS function, handle base cases:
    - If the index `i` reaches the length of the word, return true, indicating that the word is found.
    - If the current cell is out of bounds, visited, or does not match the current character of the word, return false.
6. Mark the current cell as visited and recursively explore neighboring cells in all four directions (up, down, left, right) to search for the next character of the word.
7. Backtrack by marking the current cell as unvisited before returning from the recursive calls.
8. Return the result of the DFS search.

**Complexity :**<br/>

-   Time-Complexity: `O(n*m*4^l)`, where N and M are the dimensions of the board, and L is the length of the word. In the worst case, the algorithm performs a DFS from each cell of the board to search for the word.

-   Space-Complexity: `O(N*M)`, where N and M are the dimensions of the board. The space complexity arises from the boolean array `visited` used to keep track of visited cells.
