# 3394. Check if Grid can be Cut into Sections

This problem involved about, you are given an integer n representing the dimensions of an n x n grid, with the origin at the bottom-left corner of the grid. You are also given a 2D array of coordinates rectangles, where rectangles[i] is in the form `[startx, starty, endx, endy]`, representing a rectangle on the grid.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given `n` rectangles, each represented as `[x1, y1, x2, y2]` where `(x1,y1)` is the bottom-left corner and `(x2,y2)` is the top-right corner.
    - The goal is to determine if we can make at least 3 valid cuts (either horizontal or vertical) that don't intersect any rectangle.

2. `Algorithm`:

    - Separate the x-coordinates (left and right edges) and y-coordinates (bottom and top edges) of all rectangles.
    - Sort both the x and y coordinate intervals.
    - Count the maximum number of non-overlapping intervals in both x and y directions using a greedy approach.
    - If the maximum count from either direction is at least 3, return `true`; otherwise, return `false`.

3. `Steps`:
    - Extract x-intervals (`[x1, x2]`) and y-intervals (`[y1, y2]`) from the rectangles.
    - Sort both sets of intervals.
    - Use the `countValidCuts` function to count non-overlapping intervals in each direction:
        1. Initialize `count` to `0` and `prv_end` to `-1`.
        2. For each interval, if it doesn't overlap with the previous interval, increment `count` and update `prv_end`.
    - Return `true` if either x or y direction has at least 3 non-overlapping intervals.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` -
-   Space-Complexity: `O(n)` -
