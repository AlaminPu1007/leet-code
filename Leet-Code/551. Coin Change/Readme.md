## 322. Coin Change

This problem involved about, you are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/coin-change/description/)

### Brute Force (Recursive approach) or Top down

**Approach :**<br/>

1. **Initialization**:

   - Define a recursive function `DFS` that explores different combinations of coins to make up the amount.
   - The function parameters include the current coin index `i`, the array of coins `arr`, the remaining `amount`, and the current `count` of coins used.

2. **Base Cases**:

   - If `amount` is 0, return the current `count` (valid solution).
   - If `i` is less than 0 or `amount` is negative, return `INT_MAX` (invalid solution).

3. **Recursive Cases**:

   - If the current coin value `arr[i]` is less than or equal to the remaining `amount`, recursively call the function to:
     - Include the current coin (`DFS(i, arr, amount - arr[i], count + 1)`).
     - Exclude the current coin (`DFS(i - 1, arr, amount, count)`).
   - If the current coin value is greater than the remaining amount, exclude the coin (`DFS(i - 1, arr, amount, count)`).

4. **Result**:
   - The initial call is made with the last coin index and the original amount.
   - If the result is `INT_MAX`, return -1 (indicating no solution), otherwise return the result.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2^n)` - In the worst case, the time complexity is `O(2^n)` due to the exhaustive search of all combinations without memoization.

- Space-Complexity: `O(n)` - The recursion stack can go as deep as the number of coins.

  <br/>
  <br/>

### Recursive with memoization

**Approach :**<br/>

1. **Initialize DP Array**:

   - Create a 2D DP array `dp` where `dp[i][j]` represents the minimum number of coins needed to make amount `j` using the first `i` types of coins.
   - Initialize `dp` with `-1` to indicate uncomputed states.

2. **Recursive DFS Function**:

   - Define a recursive function `DFS` that takes the current coin index `i`, the remaining amount, and the DP array.
   - The function returns the minimum number of coins needed to make the remaining amount.

3. **Base Cases**:

   - If the amount is 0, return 0 (no coins needed).
   - If `i` is less than 0 or the amount is negative, return `INT_MAX - 1` (indicating an invalid solution).

4. **Memoization**:

   - Before computing, check if the result for `dp[i][amount]` is already computed. If so, return the cached result.

5. **Recursive Calculation**:

   - Compute the result by either including or excluding the current coin.
   - To avoid integer overflow, use `INT_MAX - 1` for invalid cases.
   - If including the current coin, ensure the total count is incremented.

6. **Return the Result**:
   - The initial call to `DFS` is made with the last coin index and the original amount.
   - If the result is `INT_MAX - 1`, return -1 (indicating no solution), otherwise return the result.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * amount)` - Due to the memoization, each state `dp[i][amount]` is computed once, resulting in a time complexity of `O(n * amount)`.

- Space-Complexity: `O(n * amount)` - The DP array `dp` requires` O(n * amount)` space.

<br/>
<br/>

### Bottom up or Tabulation approach

**Approach :**<br/>

1. **Initialize DP Array**:

   - Create a 2D DP array `dp` where `dp[i][j]` represents the minimum number of coins needed to make amount `j` using the first `i` types of coins.
   - Initialize the DP array with `INT_MAX - 1` to represent impossible sums (using `INT_MAX - 1` to avoid overflow issues).
   - Set `dp[i][0]` to 0 for all `i` because zero coins are needed to make the amount zero.

2. **Fill DP Array**:

   - Iterate over the coins and the amounts to fill the DP array.
   - For each coin and amount:
     - If the coin's value is less than or equal to the amount, compute the minimum coins needed by either including the current coin or excluding it.
     - Otherwise, exclude the current coin.

3. **Return Result**:
   - The final answer is stored in `dp[n][amount]`, where `n` is the number of coins.
   - If `dp[n][amount]` is still `INT_MAX - 1`, return -1 (indicating no solution), otherwise return `dp[n][amount]`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * amount)` - The time complexity is O(n \* amount) because each state `dp[i][j]` is computed once in the nested loops.

- Space-Complexity: `O(n * amount)` - The space complexity is O(n \* amount) due to the DP array.