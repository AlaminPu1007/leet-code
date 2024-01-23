## 931. Minimum Falling Path Sum

This problem involved about, given an n x n array of integers matrix, return the minimum sum of any falling path through matrix.
<br/>
A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1). <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-falling-path-sum/description/)

**Approach-1 (caching)**<br/>

1. Initialization

    - Initialize a cache (`unordered_map`) to store computed results for subproblems.
    - Initialize the result (`res`) to `INT_MAX`.

2. Main Function (`minFallingPathSum`):

    - Iterate through each column of the first row in the matrix.
    - For each column, find the minimum falling path sum starting from that element using the DFS function.
    - Update the overall minimum result (`res`) with the minimum falling path sum.

3. DFS Function:
    - The DFS function performs a depth-first search with memoization.
    - Base Cases:
        - If the current row is beyond the last row, return 0.
        - If the current column is beyond the matrix boundaries, return `INT_MAX`.
    - Check if the result for the current position (`row`, `col`) is already computed and stored in the cache. If so, return the cached result.
    - Calculate the falling path sum for the current position by adding the current element in the matrix to the minimum of the falling path sums from the three possible next positions (left, straight down, right).
    - Cache the computed result for future reference.
    - Return the calculated falling path sum.

**Complexity Analysis Of Approach-1 :**<br/>

-   Time-Complexity: `O(n^2)` - for recursive solution
-   Space-Complexity: `O(n)` - due to the cache, which stores the results of `subproblems`. The maximum depth of recursion is limited by the number of rows in the matrix.

**Approach-2 (Dynamic Programming)**<br/>

1. Iteration over Rows:

    - Start iterating from the second row (`i = 1`) to the last row (`n - 1`).
    - For each cell in the current row (`i`), calculate the minimum falling path sum by considering the values from the previous row (`i - 1`).
    - Update the value in the current cell with the minimum falling path sum.

2. Minimum Calculation:

    - Calculate the minimum falling path sum by considering the values from the previous row (`i - 1`) at the current cell (`matrix[i][j]`), the left adjacent cell (`matrix[i - 1][j - 1]`), and the right adjacent cell (`matrix[i - 1][j + 1]`).

3. Final Result:
    - After iterating through all rows, find the minimum falling path sum from the last row (`n - 1`).
    - This result represents the minimum falling path sum from any cell in the last row to the bottom of the matrix.

**Complexity Analysis Of Approach-1 :**<br/>

-   Time-Complexity: `O(n*m*)` - where n is the number of rows and m is the number of columns in the matrix.
-   Space-Complexity: `O(1)` - as the updates are done in-place in the given matrix
