# 3160. Find the Number of Distinct Colors Among the Balls

This problem involved about, You are given an integer limit and a 2D array queries of size `n x 2`. There are `limit + 1` balls with distinct labels in the range `[0, limit]`. Initially, all balls are uncolored. For every query in queries that is of the form `[x, y]`, you mark ball x with the color y. After each query, you need to find the number of distinct colors among the balls.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description)

**Approach :**<br/>

### Step 1: Data Structures

-   `colors` (unordered_map<int, int>)`: Maps each `ball`to its`current color`.
-   `colorsCount` (unordered_map<int, int>)`: Keeps track of the `count of balls for each color`.

### Step 2: Processing Queries

1. Extract `ball` and `colorCode` from the query.
2. Check if `ball` has been previously colored (`colors.count(ball)`). If yes:
    - Retrieve the `previous color` of `ball`.
    - `Decrement` the count of `prevColor` in `colorsCount`.
    - If `prevColor` count reaches `0`, remove it from `colorsCount`.
3. Assign `colorCode` to `ball` and `increment` the count of `colorCode` in `colorsCount`.
4. Store the `size` of `colorsCount` in the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - \*Iterating through `queries`.
-   Space-Complexity: `O(n)` - We are using ans extra `map` data structure.
