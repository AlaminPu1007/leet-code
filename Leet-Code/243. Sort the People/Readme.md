## 2418. Sort the People

-   [Visit Problem](https://leetcode.com/problems/sort-the-people/description/)

**Approach :**<br/>

-   make an key-value pairs using hash-table
-   where key will be `heights` and value will be `names`
-   loop through map, and push `item.second`(value) into `ans array`
-   return reverse of `ans array`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
