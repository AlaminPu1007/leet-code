## 1637. Widest Vertical Area Between Two Points Containing No Points

This problem involved about, given n points on a 2D plane where `points[i] = [xi, yi]`, Return the widest vertical area between two points such that no points are inside the area. <br/>

A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width. <br/>

Note that points on the edge of a vertical area are not considered included in the area.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/)

**Approach :**<br/>

To get the widest area between two points, we need to sort the array. After sorting array calculate differences between two pointes and store max result of them.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - sorting array requires `O(n*log(n))` time complexity
-   Time-Complexity: `O(n)` - sorting array requires `O(n)` extra spaces
