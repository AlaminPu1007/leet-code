## 119. Pascal's Triangle II

This problem involved about, Given an integer rowIndex, return the `rowIndexth` (0-indexed) row of the Pascal's triangle.<br/>
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/pascals-triangle-ii/description)

**Approach :**<br/>

-   initialize two dimensional array `res` array with put at there first index `[1]`
-   iterate over the given `rowIndex`:
    1. For every iteration, get last pushed item from `res` array by using `res.back()` & initialize a `ans` array, put `1` in it's first index
    2. Then iterate over that `rowSize` and sum up `prvItem[j-1] + prvItem[j]` and push into ans
    3. Then put `1` into `ans` item ans so on

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*m*)` - Iterate over the row that have `O(n)` times complexity, and for each iteration we iterate over the last pushed array of item from `res` array, that also has `O(m)` time complexity. The overall time complexity is `O(n*m)`.
-   Space-Complexity:`O(n * m)` - we are using an two dimensional array to stores result
