## 518. Coin Change II

This problem involved about, you are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/coin-change-ii/description/)

### Brute force (Recursive approach)

**Approach :**<br/>

1. **Initialize Parameters**:

   - Define the size of the coins array `n`.
   - Call the helper function `DFS` with initial parameters: the target `amount`, the `coins` array, and its size `n`.

2. **Recursive Function (`DFS`)**:

   - **Base Case 1**: If `amount` is `0`, return `1` because there is one way to make the amount `0` (using no coins).

   - **Base Case 2**: If `i` is less than `0` or `amount` is less than `0`, return `0` because it's not possible to make a negative amount or use a negative index.

   - **Include the Current Coin**: If the coin at index `i` is less than or equal to `amount`, calculate the number of ways by including this coin (`DFS(amount - arr[i], arr, i)`).

   - **Exclude the Current Coin**: Calculate the number of ways by excluding this coin (`DFS(amount, arr, i - 1)`).

   - Return the sum of results from including and excluding the current coin.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2 ^ n)` - The algorithm explores all possible combinations of coins recursively, leading to exponential time complexity in the worst case.

- Space-Complexity: `O(n)` - The space complexity is determined by the maximum depth of the recursion stack, which can go up to `n` in the worst case.

### Recursive with memoization

**Approach :**<br/>

1. **Initialize Parameters**:

   - Define the size of the coins array `n`.
   - Initialize a 2D vector `dp` of size `(n + 1) x (amount + 1)` with `-1` to store intermediate results.
   - Call the helper function `DFS` with initial parameters: the target `amount`, the `coins` array, the last index `n - 1`, and the `dp` table.

2. **Recursive Function (`DFS`) with Memoization**:
   - **Base Case 1**: If `amount` is `0`, return `1` because there is one way to make the amount `0` (using no coins).
   - **Base Case 2**: If `i` is less than `0` or `amount` is less than `0`, return `0` because it's not possible to make a negative amount or use a negative index.
   - **Memoization Check**: If the value `dp[i][amount]` is not `-1`, return the stored result to avoid redundant calculations.
   - **Include the Current Coin**: If the coin at index `i` is less than or equal to `amount`, calculate the number of ways by including this coin (`DFS(amount - arr[i], arr, i, dp)`).
   - **Exclude the Current Coin**: Calculate the number of ways by excluding this coin (`DFS(amount, arr, i - 1, dp)`).
   - Store the result in `dp[i][amount]` and return it.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n ^ amount)` -The algorithm explores each subproblem only once due to memoization, leading to a polynomial time complexity.

- Space-Complexity: `O(n * amount)` - The space complexity is determined by the size of the `dp` table, which is `(n + 1) x (amount + 1)`. Additionally, the recursion stack can go up to `O(n)`.

### Bottom up (Tabulation) Approach

**Approach :**<br/>

1. **Initialization**:

   - Define the size of the `coins` array as `n`.
   - Initialize a 2D vector `dp` of size `(n + 1) x (amount + 1)` with all values set to `0`.

2. **Base Case**:

   - If the amount is `0`, there is one way to make change (using no coins). Therefore, set `dp[i][0] = 1` for all `i` from `0` to `n`.

3. **Filling the DP Table**:

   - Iterate through the coins (`i` from `1` to `n`).
   - For each coin, iterate through the amounts (`j` from `1` to `amount`).
   - **Include the Current Coin**:
     - If the current coin (`coins[i - 1]`) is less than or equal to the amount `j`, update the DP table as `dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j]`.
     - This means that the number of ways to make `j` includes all the ways to make `j - coins[i - 1]` (by including the current coin) and all the ways to make `j` without the current coin.
   - **Exclude the Current Coin**:
     - If the current coin is greater than the amount `j`, set `dp[i][j] = dp[i - 1][j]`, meaning the number of ways to make `j` is the same as without the current coin.

4. **Result**:
   - The value `dp[n][amount]` contains the number of ways to make the amount using all the coins.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n ^ amount)` - The algorithm iterates through each coin for every amount up to the target amount, resulting in a polynomial time complexity.

- Space-Complexity: `O(n * amount)` - The space complexity is determined by the size of the `dp` table, which stores the number of ways to make each amount with a subset of coins.