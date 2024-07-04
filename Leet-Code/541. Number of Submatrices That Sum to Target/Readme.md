# 1074. Number of Submatrices That Sum to Target

This problem involved about, given a matrix and a target, return the number of non-empty submatrices that sum to target.<br/>

A submatrix x1, y1, x2, y2 is the set of all cells matrix[x][y] with x1 <= x <= x2 and y1 <= y <= y2.

## Problem description

For better problem description, please visit [LeetCode Page]()

**Approach :**<br/>

To efficiently solve this problem, we employ a sliding window technique combined with prefix sums and hashmaps.

1. **Prefix Sum Calculation :**<br/>

-   We first calculate the prefix sum of each row of the matrix. This helps us in quickly calculating the sum of elements in any subarray of the row.

2. **Hashmap to Track Subarray Sums :**<br/>

-   For each subarray window, we iterate over the rows and calculate the sum of elements within the window.
-   We use a hashmap `Map` to track the frequency of each sum encountered so far.
-   At each row, we calculate the current sum and check if `sum - target` exists in the hashmap. If it does, we increment the result count by the frequency of `sum - target` stored in the hashmap.
-   Finally, we increment the count of the current sum in the hashmap.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 * m)` - For each pair of columns, we iterate over all rows, which takes `O(n^2 * m)` time.
-   Space-Complexity: `O(n)` - We use a hashmap to store the frequency of encountered sums, which can have a maximum of `O(n)` distinct sums.