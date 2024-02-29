## 2971. Find Polygon With the Largest Perimeter

This problem involved about, you are given an array of positive integers nums of length n. <br/>

A polygon is a closed plane figure that has at least 3 sides. The longest side of a polygon is smaller than the sum of its other sides. <br/>

Conversely, if you have k (k >= 3) positive real numbers a1, a2, a3, ..., ak where a1 <= a2 <= a3 <= ... <= ak and a1 + a2 + a3 + ... + ak-1 > ak, then there always exists a polygon with k sides whose lengths are a1, a2, a3, ..., ak. <br/>

The perimeter of a polygon is the sum of lengths of its sides. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/description/)

**Approach :**<br/>

1. Initialize variables `res` to `-1` and `total` to 0.
2. Sort the array `nums` in non-decreasing order.
3. Iterate through each element in the sorted array.
4. For each element, if `total` is greater than the current element, update `res` to the sum of `total` and the current element.
5. Update `total` by adding the current element.
6. After the loop, `res` contains the largest perimeter of a triangle formed by three lengths.
7. Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - for sorting the array required `O(n*log(n))` time complexity
-   Space-Complexity: `O(n)` - sorting requires extra spaces
