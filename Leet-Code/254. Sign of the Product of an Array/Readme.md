## 1822. Sign of the Product of an Array

-   [Visit Problem](https://leetcode.com/problems/sign-of-the-product-of-an-array/description/)

**Approach :**<br/>

-   loop through array, if we get any element that equal to `0`, return `0`
-   else, count how many negative number is present in array
-   if count of negative number is equal to event then return `1` else `-1`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
