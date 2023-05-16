## 71. Simplify Path

-   [visit problem](https://leetcode.com/problems/simplify-path/description/)

**Approach :**<br/>

-   to solve this problem we need an stack data-structure
-   iterate over the `path` string
-   if we detect `path[i] == '/'`, then check `cur` string has ".." value or not
-   if it's then removed top most item form stack, and make sure stack is not empty
-   put element from `cur` to stack if `cur != "" && cur != "."`
-   mark cur as initial state, and so on

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`, iterate over the path
-   Space-Complexity: `O(n)`, we used an stack data-structure
