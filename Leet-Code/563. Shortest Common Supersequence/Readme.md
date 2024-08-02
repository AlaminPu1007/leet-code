# 1092. Shortest Common Supersequence

This problem involved about, given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences. If there are multiple valid strings, return any of them.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/shortest-common-supersequence/)

**Approach :**<br/>

1. **Initialize DP Table**:

   - Create a DP table `dp` of size `(n+1) x (m+1)` where `n` and `m` are the lengths of `str1` and `str2` respectively.
   - `dp[i][j]` represents the length of the longest common subsequence (LCS) of `str1[0...i-1]` and `str2[0...j-1]`.

2. **Fill the DP Table**:

   - Iterate through each character of `str1` and `str2`.
   - If `str1[i-1]` is equal to `str2[j-1]`, then `dp[i][j] = 1 + dp[i-1][j-1]`.
   - Otherwise, `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`.

3. **Construct the SCS**:

   - Start from `dp[n][m]` and trace back to construct the SCS.
   - If characters of `str1` and `str2` match, add that character to the result and move diagonally up-left in the DP table.
   - If they don't match, add the character from the string which gives the larger LCS value and move accordingly (left or up).
   - Append remaining characters from `str1` or `str2` if one string is exhausted before the other.

4. **Return the Result**:
   - The result string will be the SCS of `str1` and `str2`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - where `n` and `m` are the lengths of `str1` and `str2`.
- Space-Complexity: `O(n * m)` - due to the DP table `dp` used to store `LCS` lengths.