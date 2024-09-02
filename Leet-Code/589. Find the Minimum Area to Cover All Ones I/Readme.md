# 3195. Find the Minimum Area to Cover All Ones I

This problem involved about, you are given a 2D binary array grid. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the 1's in grid lie inside this rectangle.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/)

**Approach :**<br/>

1. `Initialize Variables :`

    - Initialize four variables `top`, `bottom`, `left`, and `right` to track the boundaries of the rectangle. Set `top` and `left` to `INT_MAX`, and `bottom` and `right` to `INT_MIN`.

2. `Traverse the Grid :`

    - Iterate over each cell in the grid. If the cell contains a `1`, update the boundaries:
        - Update `top` with the minimum row index containing a `1`.
        - Update `bottom` with the maximum row index containing a `1`.
        - Update `left` with the minimum column index containing a `1`.
        - Update `right` with the maximum column index containing a `1`.

3. `Calculate Area :`
    - Calculate the dimensions of the rectangle using the updated boundaries.
    - The height of the rectangle is `(bottom - top + 1)`.
    - The width of the rectangle is `(right - left + 1)`.
    - Multiply the height and width to get the area of the rectangle.

**Algorithm :**<br/>

1. `Initialization :`

    - Initialize `top`, `bottom`, `left`, and `right` to their respective extreme values.

2. `Grid Traversal :`

    - Iterate over each cell in the grid. For each cell containing a `1`, update the boundary variables.

3. `Calculate and Return Area :`
    - Calculate the area using the updated boundary variables and return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the number of rows and `m` is the number of columns, due to the traversal of the entire grid.

-   Time-Complexity: `O(1)` - as no additional space is used other than the variables for tracking boundaries.
