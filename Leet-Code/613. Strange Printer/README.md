# 664. Strange Printer

There is a strange printer with the following two special properties:<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/strange-printer/description)

**Approach :**<br/>

#### Dynamic Programming (DP) Approach:

1. Use a recursive function DFS to determine the minimum number of print operations needed to print a substring s[l...r].
2. The function is designed to handle overlapping `sub-problems` by storing results in a memoization table dp to avoid redundant calculations

#### Base Case:

1.  If the substring s[l...r] contains only one character (l == r), it requires exactly one operation, so return 1.
2.  If the left index l exceeds the right index r, return 0 since it represents an invalid substring.

#### Recursive Case

1. Iterate through the substring s[l...r] and skip over identical characters, since they can be printed in one go.
2. Consider two scenarios :
    - Print the first segment and recursively handle the rest.
    - Try to split the string at different points and combine the results to minimize the number of operations.

#### Memoization

1. Store results in a 2D dp table with dp[l][r] storing the minimum number of print operations needed for the substring s[l...r].
2. If dp[l][r] has been computed, directly return the stored value.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^3)` - due to the nested loops and recursive calls.
-   Space-Complexity: `O(n^2)` - for storing the results in the dp table.