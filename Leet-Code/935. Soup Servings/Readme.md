# 808. Soup Servings

This problem involved about, you have two soups, A and B, each starting with n mL. On every turn, one of the following four serving operations is chosen at random, each with probability 0.25 independent of all previous turns:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/soup-servings/description/)

**Approach :**<br/>

This problem is solved using `Dynamic Programming + Memoization (Top-down Recursion)`.

We simulate all possible serving combinations and store results for overlapping `subproblems` to avoid recomputation.

There are 4 possible operations at each step:

- (100, 0)
- (75, 25)
- (50, 50)
- (25, 75)

We recursively reduce the soup quantities and store results in a `2D DP` table.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2)` - There are at most `n × n` unique states `(a, b)`. Each state is computed once due to memoization. Each state performs 4 constant recursive calls
- Space-Complexity: `O(n^2)` - We are using an 2DP array.
