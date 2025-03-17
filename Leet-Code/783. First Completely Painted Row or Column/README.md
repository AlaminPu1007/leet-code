# 2661. First Completely Painted Row or Column

This problem involved about, you are given a 0-indexed integer array arr, and an m x n integer matrix mat. arr and mat both contain all the integers in the range `[1, m * n]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/first-completely-painted-row-or-column/description/)

**Approach :**<br/>

1. `Preprocessing`:

    - Use a hash map `Map` to store positions `(row, col)` for each value in the matrix `mat`.
    - Initialize counters `rowCount` and `colCount` to track the number of marked elements in each row and column.

2. `Processing the Array`:

    - Iterate through `arr`, and for each value:
        1. Retrieve its position `(row, col)` from the hash map.
        2. Increment the respective `rowCount[row]` and `colCount[col]`.
        3. Check if the current row or column becomes completely marked:
            - A row is complete if `rowCount[row] == m` (number of columns).
            - A column is complete if `colCount[col] == n` (number of rows).
        4. If a complete row or column is found, return the current index.

3. `Return Result`:
    - If no row or column is completely marked after processing all elements in `arr`, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((n * m) + k)` - We first build a map to store the positions of each element in the matrix, which takes `O(k)` time. Then, we iterate through the array arr (of size m⋅n) and for each element, we update the counts for the corresponding row and column. This step also takes `O(k)` time. Therefore, the total time complexity is `O(k) ≡ O(m * n)`.
-   Space-Complexity: `O(n * m)` - We are using an extra hash-map to store each element with their respective matrix positions.
