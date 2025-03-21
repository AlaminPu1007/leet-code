# 1267. Count Servers that Communicate

This problem involved about, you are given a map of a server center, represented as a m \* n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-servers-that-communicate/description/)

**Approach :**<br/>

1. `Count Servers per Row and Column`:

    - Traverse the grid and count the number of servers (`grid[i][j] == 1`) in each row and column.
    - Store these counts in `rowCount` and `colCount` arrays, respectively.

2. `Identify Communicating Servers`:

    - Traverse the grid again.
    - For each cell containing a server (`grid[i][j] == 1`), check if the total count of servers in the corresponding row or column (`rowCount[i]` or `colCount[j]`) is greater than 1.
    - If true, this server can communicate with at least one other server, so increment the result.

3. `Return the Result`:
    - The result is the total number of servers that can communicate.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - Traverse the grid twice, once to populate `rowCount` and `colCount` and once to check server communication.

-   Space-Complexity: `O(n + m)` - For the `rowCount` and `colCount` arrays.
