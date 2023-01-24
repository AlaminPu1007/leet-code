## 405. Convert a Number to Hexadecimal

[Open problem](https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/)

**Approach :**<br>

-   loop through `number`
-   get value from `hexValue` array by divided `number` by 16
-   `mod num by 16` till `num != 0`, so on

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
