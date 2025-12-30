# 486. Predict the Winner

This problem involved about, you are given an integer array `nums`. Two players are playing a game with this array: player 1 and player 2.

Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array `(i.e., nums[0] or nums[nums.length - 1])` which reduces the size of the array by 1. The player adds the chosen number to their score. The game ends when there are no more elements in the array.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/predict-the-winner/description/)

**Approach :**<br/>

This problem is a classic `Game Theory + Dynamic Programming` problem.

We compute the `maximum score Player 1 can achieve` from any subarray `[i, j]` assuming both players play optimally.

At every turn:

-   The current player chooses either the leftmost or rightmost element.
-   The opponent then plays optimally and tries to `minimize` the current player’s future score.

To avoid recomputation, we use `memoization (Top-Down DP)`.

**Algorithm :**<br/>

1. Compute the total sum of the array.
2. Use a recursive function `Solve(i, j)` that returns the **maximum score Player 1 can obtain** from subarray `[i, j]`.
3. Base cases:
    - If `i > j`, return `0`.
    - If `i == j`, return `nums[i]`.
4. For each subarray `[i, j]`:
    - If Player 1 picks `nums[i]`, Player 2 will minimize Player 1’s next gain:
        ```
        take_i = nums[i] + min(Solve(i+2, j), Solve(i+1, j-1))
        ```
    - If Player 1 picks `nums[j]`:
        ```
        take_j = nums[j] + min(Solve(i, j-2), Solve(i+1, j-1))
        ```
    - Choose the best option:
        ```
        dp[i][j] = max(take_i, take_j)
        ```
5. Player 2’s score is:

    - player_2 = total_sum - player_1

6. Return `true` if `player_1 >= player_2`, otherwise `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)^2` - There are `n × n` possible subarrays `(i, j)`, and each state is computed once due to memoization.
-   Space-Complexity: `O(n)` - The DP table stores results for all `i, j` pairs.
