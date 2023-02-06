## 2554. Maximum Number of Integers to Choose From a Range I

[Visit problem](https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/)

**Approach :**<br>

-   make an key value pairs of `banned` array
-   loop through `i = 0 to n`, and check this item is already present in hash-map, if it's then reduce `maxSum` by `1` and increment `result` by 1 also. so on.
-   return `result`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
