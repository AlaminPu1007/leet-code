# 1312. Minimum Insertion Steps to Make a String Palindrome

This problem involved about, given a string s. In one step you can insert any character at any index of the string.
Return the minimum number of steps to make s palindrome.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/)

### Brute force approach (Using Recursion) (Memory Limit Exceeded)

**Approach :**<br/>

1. **Longest Common Subsequence (LCS)**:

   - Use a recursive `Depth-First Search (DFS)` to find the length of the LCS between `word1` and `word2`.
   - If the characters at the current indices match, increment the LCS count and move to the next characters in both strings.
   - If they don't match, find the maximum LCS by either moving to the next character in `word1` or `word2`.

2. **Calculate Minimum Operations**:

   - The number of deletions required is `n - lcs_length`, where `n` is the length of `word1`.
   - The number of insertions required is `m - lcs_length`, where `m` is the length of `word2`.
   - The total number of operations is the sum of deletions and insertions.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2 ^ (n + m))` - in the worst case, as it explores all possible subsequences.

- Space-Complexity: `O(n + m)` - for the recursion depth.

<br/>
<br/>

### Recursion + Memoization (Memory Limit Exceeded)

**Approach :**<br/>

1. **Calculate Longest Common Subsequence (LCS)**:

   - Use a recursive Depth-First Search (DFS) with memoization to find the length of the LCS between `word1` and `word2`.
   - If the characters at the current indices match, increment the LCS count and move to the next characters in both strings.
   - If they don't match, find the maximum LCS by either moving to the next character in `word1` or `word2`.
   - Memoize the results to avoid redundant calculations and speed up the process.

2. **Compute Minimum Operations**:

   - The number of deletions required is `n - lcs_length`, where `n` is the length of `word1`.
   - The number of insertions required is `m - lcs_length`, where `m` is the length of `word2`.
   - The total number of operations needed is the sum of deletions and insertions.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - where `n` and `m` are the lengths of `word1` and `word2`, because each state `(n, m)` is computed once and stored in the `dp` array.

- Space-Complexity: `O(n * m) + O(n + m)` - for storing the LCS lengths. `O(n + m)` for the maximum recursion depth.

<br/>
<br/>

### Bottom up or Tabulation (Accepted solution)

**Approach :**<br/>

1. **Calculate Longest Common Subsequence (LCS)**:

   - Use Dynamic Programming (DP) to find the length of the LCS between `word1` and `word2`.
   - Initialize a 2D DP table `dp` where `dp[i][j]` represents the length of the LCS of the substrings `word1[0..i-1]` and `word2[0..j-1]`.
   - Iterate through each character in `word1` and `word2`:
     - If characters match (`word1[i-1] == word2[j-1]`), set `dp[i][j] = 1 + dp[i-1][j-1]`.
     - If characters do not match, set `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`.
   - The value at `dp[n][m]` will be the length of the LCS of `word1` and `word2`.

2. **Compute Minimum Operations**:

   - The number of deletions required is `n - lcs_length`, where `n` is the length of `word1`.
   - The number of insertions required is `m - lcs_length`, where `m` is the length of `word2`.
   - The total number of operations needed is the sum of deletions and insertions.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - where `n` and `m` are the lengths of `word1` and `word2`, because we fill out an `n x m` DP table.

- Space-Complexity: `O(n * m)` - for storing the LCS lengths.
