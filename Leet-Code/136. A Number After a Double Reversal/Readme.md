## 2119. A Number After a Double Reversal

[Visit the problem](https://leetcode.com/problems/a-number-after-a-double-reversal/)

**Approach :**<br>

-   base case is that if number is lees than or equal to `9` just return true
-   if not, then divide number by 10 until it's become to 0
-   after first division check the value is equal to 0 or not
-   if it's then return false
-   else `return true`

**Complexity Analysis :**<br>

-   Time-Complexity : `O(log(n))`
-   Space-Complexity : `O(1)`
