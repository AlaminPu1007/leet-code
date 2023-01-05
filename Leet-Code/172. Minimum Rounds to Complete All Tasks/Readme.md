## 2244. Minimum Rounds to Complete All Tasks

[Visit problem](https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/)

**Approach :**<br>

-   First count all element frequency with Hash-map
-   loop through has-map and check if any element frequency is less than or equal to 1, it it's then `return -1`
-   store all group of frequency `3`
-   else group of `groups of triplets and 2 pairs` or, `groups of triplets and 1 pair`
-   return `result`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
