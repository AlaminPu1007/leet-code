## 2352. Equal Row and Column Pairs

This problem is involved about, given a 0-indexed `n x n` integer matrix grid, return the number of pairs `(ri, cj)` such that row ri and column cj are equal

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/equal-row-and-column-pairs/).

**Algorithm :**<br/>

-   Initialize an hash-map or hash-table, to hold list of row & col elements with their frequency(how much time an row and column is present)
-   we iterate `grid`(our root matrix data) and making key value pairs with each row
-   Then, we iterate over the grid again to making key-value pairs of each column
-   Later we check this element is already present in our hash-map, if it's then we store it's frequency(present number of times in Map) in result
-   return `result`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - since we using first loop for row, and second loop for column
-   Space-Complexity: `O(n)` - We store each row of the grid in the hash map, in the worst-case scenario, `Map` might contains `n` distinct rows of length `n`
