## 935. Knight Dialer

This Problem involved about, the chess knight has a unique movement, it may move two squares vertically and one square horizontally, or two squares horizontally and one square vertically (with both forming the shape of an L). The possible movements of chess knight are shown in this `diagaram`

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/knight-dialer/description)

**Approach of recursion with memoization :**<br/>

1. Initialize 'dp' as a memoization array to store computed results and 'adj' as an adjacency list representing movements of a knight on a numeric keypad.
2. Implement 'knightDialer' method:
    - Initialize 'res' to 0.
    - Iterate through each key (0 to 9) on the numeric keypad.
    - Call the 'Solve' method to compute the number of valid combinations for 'n - 1' hops starting from each key and add them to 'res'.
    - Return 'res' modulo 'M'.
3. Implement 'Solve' method:
    - Base case: If 'n' is 0, return 1.
    - If 'dp[n][node]' is already calculated, return its value.
    - Initialize 'ans' as 0.
    - Iterate through the adjacency list of the current node (numeric keypad key).
    - Recursively call 'Solve' for 'n - 1' hops from each adjacent node and add the results to 'ans'.
    - Store 'ans' in 'dp[n][node]' and return 'ans'.

**Complexity Analysis for memoization :**<br/>

-   Time-Complexity: `O(n)` - if kkk is the size of the phone pad, then there are `O(n*k)` states to our DP. Because `k=10` in this problem, we can treat kkk as a constant and thus there are `O(n)` states to our DP.
-
-   Space-Complexity: `O(n)` - The recursion call stack will grow to a size of `O(n)`. With memoization, we also store the results to every DP state. As there are `O(n)` states, we require `O(n)` space to store all the results.
