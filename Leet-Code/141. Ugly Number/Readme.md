## 263. Ugly Number

[Visit problem](https://leetcode.com/problems/ugly-number/)

**Approach :**<br>

-   An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
-   keep dividing number by `2, 3, 5` until number become 1
-   return `number == 1`

**Complexity Analysis :**<br>

-   Time-Complexity : `O(log(n))`
-   Space-Complexity : `O(1)`
