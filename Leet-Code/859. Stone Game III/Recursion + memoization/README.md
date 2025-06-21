# 1406. Stone Game III

This problem involved about, alice and Bob continue their games with piles of stones. There are several stones arranged in a row, and each stone has an associated value which is an integer given in the array stoneValue.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/stone-game-iii/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `stoneValue` representing the values of stones in a game.
    - Two players, Alice and Bob, take turns to pick stones. Alice starts first.
    - In each turn, a player can pick `1`, `2`, or `3` stones from the remaining stones.
    - The goal is to determine the winner of the game or if it ends in a tie, based on the total value of stones each player collects.

2. `Algorithm`:

    - Use `dynamic programming with memoization` to compute the maximum difference in scores between Alice and Bob.
    - Define a DP array `dp[i]` to store the maximum difference in scores starting from the `i-th` stone.
    - For each position `i`, consider all possible moves (picking `1`, `2`, or `3` stones) and recursively compute the result for the remaining stones.
    - The result for the current position is the maximum difference in scores achievable by Alice.

3. `Steps`:
    - Initialize a DP array `dp` of size `n + 1` with `-1` to represent uncomputed states.
    - Define a recursive function `Solved`:
        1. If the current index `i` exceeds the array size, return `0`.
        2. If the result for the current index is already computed, return it.
        3. Iterate through all possible moves (picking `1`, `2`, or `3` stones):
            - Calculate the total stones collected in the current move.
            - Recursively compute the result for the remaining stones.
            - Update the maximum difference in scores.
        4. Store the result in the DP array and return it.
    - Call the recursive function with the initial index `0`.
    - Compare the result with `0` to determine the winner or if it's a tie.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each state i is computed once, and there are `n` possible states
-   Space-Complexity: `O(n)` - The DP array consumes `O(n)` space.
