## 1143. Longest Common Subsequence

[Open problem](https://leetcode.com/problems/longest-common-subsequence/)

# Approach-1 To solve this problem we are going to use, LCS -> Table

- First we need fill `DP(2D array)` array first row and column by `0`
- Then run nested Loop through first string length and second string length

```
 DP[i + 1][j + 1] = text1[i] == text2[j] ? DP[i][j] + 1 : max(DP[i + 1][j], DP[i][j + 1])
```

- Finally `return DP[m][n]`

**Complexity of Approach-1:**<br>

- Time-Complexity: `O(n * m)`, where n and m are the string sizes.
- Space-Complexity: `O(m * n)`

# Approach-2 To solve this problem we are going to use, memoization technique

- You may notice that we are only looking one row up in the solution above. So, we just need to store two rows

```
 MEMO[!(i % 2)][j + 1] = text1[i] == text2[j] ? MEMO[i % 2][j] + 1 : max(MEMO[i % 2][j + 1], MEMO[!(i % 2)][j]);
```

**Complexity of Approach-2:**<br>

- Time-Complexity: `O(n * m)`, where n and m are the string sizes.
- Space-Complexity: `O(min(m * n))`, assuming that we will use a smaller string for the column dimension.

**Reference :**<br>
[Visit](<https://leetcode.com/problems/longest-common-subsequence/discuss/348884/C%2B%2B-with-picture-O(nm)>)
