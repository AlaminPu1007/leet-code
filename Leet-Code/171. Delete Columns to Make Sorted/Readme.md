# 944. Delete Columns to Make Sorted

[Open Problem](https://leetcode.com/problems/delete-columns-to-make-sorted/description/)

**Approach :**<br>

-   Iterate over the columns from `0 to K - 1`, for each column `col`
-   Iterate over the rows row from `1 to N - 1`
-   If the character at index col in the string `strs[row]` is smaller than the character at index col in the string `strs[row - 1]`, then increment the counter variable answer. Also, we can break the inner loop here as we find the current column unsorted.
-   Otherwise, we check the next row.
-   Return `answer`.

**Complexity Analysis :**<br>

-   Time-Complexity: `O(k*N)`
-   Space-Complexity: `O(1)`
