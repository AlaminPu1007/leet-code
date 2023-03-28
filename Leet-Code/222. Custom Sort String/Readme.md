## 791. Custom Sort String

[Visit Problem](https://leetcode.com/problems/custom-sort-string/description/)

**Approach :**<br/>

-   make an key, value pairs using hash-table(map)
-   loop through `order` string and check each `char` is already present inside hash-map, if it's true then push it to `ans` string until it's `frequency(value)` is present and remove item from hash-table also
-   loop through map and push remain item inside ans so no

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` // approximately
-   Space-Complexity: `O(n)`
