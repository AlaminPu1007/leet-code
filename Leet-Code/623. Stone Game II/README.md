# 1140. Stone Game II

This problem involved about, alice and Bob continue their games with piles of stones. There are a number of piles arranged in a row, and each pile has a positive integer number of stones piles[i]. The objective of the game is to end with the most stones.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/stone-game-ii/description/)

**Approach :**<br/>

1. `Dynamic Programming (DP) Approach`:

    - Use a recursive function `getAliceMaxStones` to determine the maximum stones Alice can get starting from the current index `idx` with a current `M`.
    - The function takes a boolean `alice` to indicate whose turn it is. If `alice` is `true`, Alice tries to maximize her stones. If `false`, Bob tries to minimize Alice's stones.
    - We use a cache to store results of subproblems, identified by a unique key formed from `alice`, `idx`, and `m`.

2. `Base Case`:

    - If the index `idx` is greater than or equal to the number of piles `n`, return 0 since no more stones can be collected.

3. `Recursive Case`:

    - Iterate over possible values of `i` (the number of piles Alice or Bob can take) from 1 to `2 * M`.
    - If it's Alice's turn, maximize her stones by considering the sum of stones she can take plus the result of the recursive call for Bob's turn.
    - If it's Bob's turn, minimize the stones Alice can get by trying to leave her with the minimum possible value in subsequent recursive calls.

4. `Memoization`:
    - Store results in a cache with a key format of `alice_idx_m` to avoid recomputation of subproblems.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 3)` - because the recursive function may be called for each combination of `idx`, `M`, and whether it's Alice's or Bob's turn, but the memoization reduces this complexity substantially.

-   Space-Complexity: `O(n ^ 2)` - for the memoization cache and the recursion stack.