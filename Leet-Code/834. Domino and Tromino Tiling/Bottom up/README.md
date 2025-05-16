# 790. Domino and Tromino Tiling

This problem involved about, you have two types of tiles: a 2 x 1 domino shape and a `tromino` shape. You may rotate these shapes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/domino-and-tromino-tiling/description)

**Approach :**<br/>

1. `Base Cases:`

    - `f(1) = 1` → Only one way: a single vertical domino.
    - `f(2) = 2` → Two ways: two vertical dominoes or two horizontal dominoes.
    - `f(3) = 5` → Five ways using a mix of dominoes and `trominoes`.

2. `Recursive Transition:`
    - The `2 × f(n-1)` term accounts for placing a domino at the end, allowing two orientations.
    - The `f(n-3)` term accounts for placing an `L-shaped tromino`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - each `n` value is calculated at most once.
-   Space-Complexity: `O(n)` - due to `dp` array.
