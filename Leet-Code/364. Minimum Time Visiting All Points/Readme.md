## 1266. Minimum Time Visiting All Points

This problem involved about, On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-time-visiting-all-points/description/)

**Approach :**<br/>

1. Initialize variables res to 0.
2. Iterate through each pair of consecutive points from the first to the second-to-last point:
    - Get the x and y coordinates of the current and next points (X1, Y1, X2, Y2).
    - Calculate the horizontal distance (dx) as the absolute difference between X1 and X2.
    - Calculate the vertical distance (dy) as the absolute difference between Y1 and Y2.
    - Add the minimum of dx and dy to the result (res).
    - Add the absolute difference between dx and dy to the result (res).
3. After the iteration, return the final result (res).

**References :**<br/>

-   [Learn from LeetCode Official solution](https://leetcode.com/problems/minimum-time-visiting-all-points/editorial)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the array and calculate `res` required `O(n)` time complexity
-   Space-Complexity: `O(1)` - we are using an constant amount of spaces
