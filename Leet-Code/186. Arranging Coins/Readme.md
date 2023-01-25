## 441. Arranging Coins

[Visit the problem](https://leetcode.com/problems/arranging-coins/description/)

**Approach :**<br>

-   loop through `n`
-   for each iteration divided `n` by i and check `diff` is present, then increment counter by `1` and so on
-   return `res`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`

**Complexity Analysis of binary search :**<br>

-   Time-Complexity: `O(log(n))`
-   Space-Complexity: `O(1)`
