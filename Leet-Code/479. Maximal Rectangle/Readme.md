## 85. Maximal Rectangle

This problem involved about, given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximal-rectangle/description/)

**Approach :**<br/>

1. `Iterate Through Each Row`:

    - For each row in the matrix, update the histogram of heights for each column.
    - Traverse each column in the current row:
        - If the element in the matrix is '1', increment the height of the histogram for that column by 1.
        - If the element in the matrix is '0', reset the height of the histogram for that column to 0.

2. `Calculate Largest Rectangle Area`:

    - After updating the histogram for each row, calculate the largest rectangle area in the histogram using the `largestRectangleArea` function.

3. `Update Maximum Area`:

    - Update the maximum area with the maximum of the current area and the maximum area found so far.

4. `Return Maximum Area`:
    - After iterating through all rows, return the maximum area found.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n * (m + k))` - where `k` is the maximum size of the stack during the execution of the largestRectangleArea function. Thank you for pointing that out!
-   Space-Complexity: `O(n)` - using stack as a extra spaces
