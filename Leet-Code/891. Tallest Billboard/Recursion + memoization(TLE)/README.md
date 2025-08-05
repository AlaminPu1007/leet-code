# 956. Tallest Billboard

This problem involved about, you are installing a billboard and want it to have the largest height. The billboard will have two steel supports, one on each side. Each steel support must be an equal height.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/tallest-billboard/description)

**Key Insights :**<br/>

1. `Three Choices per Rod`: For each rod, we have three options:
    - Don't use it in either billboard
    - Add it to the first billboard
    - Add it to the second billboard
2. `State Representation`: Track the current index and the height difference between the two billboards
3. `Memoization`: Cache results to avoid redundant computations of the same state

**Algorithm Steps :**<br/>

1. `Recursive DFS with Memoization`:
    - Base case: When all rods are processed, return the height if both billboards are equal
    - For each rod, explore all three possibilities (skip, add to left, add to right)
    - Cache results using a string key representing the current state

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * max(sum)^2)` - where n is number of rods and `sum` is maximum possible sum.
-   Space-Complexity: `O(n * max(sum)^2)` - for storing all possible states.
