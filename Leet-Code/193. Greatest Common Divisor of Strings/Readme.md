## 1071. Greatest Common Divisor of Strings

[Visit Problem](https://leetcode.com/problems/greatest-common-divisor-of-strings/description/)

**Approach :**<br>

-   Check if the concatenations of `str1 and str2` in different orders are the same.If not,` return ""`
-   Get the GCD gcdLength of the two lengths of `str1 and str2`
-   Return the prefix string with a length of gcdLength of either `str1 or str2` as the answer.

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n+m)`
-   Space-Complexity: `O(n+m)`
