# 516. Longest Palindromic Subsequence

This problem involved about, given a string s, find the longest palindromic subsequence's length in s.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-palindromic-subsequence/description/)

### Recursive approach (Time limit exceed)

**Approach :**<br/>

1. **Reverse the String**:

   - Create a new string `newStr` which is the reverse of the input string `s`.

2. **Calculate Longest Common Subsequence (LCS)**:
   - Use a recursive approach with memoization to find the length of the LCS between `s` and `newStr`.
   - Define a recursive function `DFS` to compute the LCS length:
     - If either of the string lengths `n` or `m` is 0, return 0 (base case).
     - If the characters at the current indices in `s` and `newStr` match, include this character in the LCS and recursively compute the LCS for the remaining substrings (`DFS(n-1, m-1)`).
     - If the characters do not match, recursively compute the LCS by either excluding the current character from `s` or `newStr` and take the maximum of both options (`max(DFS(n-1, m), DFS(n, m-1))`).

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2 ^ (n + m))` - in the worst case, as it explores all possible subsequences.

- Space-Complexity: `O(n + m)` - for the recursion depth.

<br/>
<br/>

### Recursive approach (Memory limit exceed)

**Approach :**<br/>

1. **Reverse the String**:

   - Create a new string `newStr` which is the reverse of the input string `s`.

2. **Dynamic Programming Approach**:

   - Use a dynamic programming (DP) table to store the LCS length between substrings of `s` and `newStr`.

3. **Recursive Function with Memoization**:

   - Define a recursive function `DFS` to compute the LCS length:
     - If either of the string lengths `n` or `m` is 0, return 0 (base case).
     - If the characters at the current indices in `s` and `newStr` match, include this character in the LCS and recursively compute the LCS for the remaining substrings (`DFS(n-1, m-1)`).
     - If the characters do not match, recursively compute the LCS by either excluding the current character from `s` or `newStr` and take the maximum of both options (`max(DFS(n-1, m), DFS(n, m-1))`).
     - Store the result in the DP table to avoid redundant calculations.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - where `n` and `m` are the lengths of `word1` and `word2`, because each state `(n, m)` is computed once and stored in the `dp` array.

- Space-Complexity: `O(n * m) + O(n + m)` - for storing the LCS lengths. `O(n + m)` for the maximum recursion depth.

<br/>
<br/>

### Bottom up approach (Accepted)

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