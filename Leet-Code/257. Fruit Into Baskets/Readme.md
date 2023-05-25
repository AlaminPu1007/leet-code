## 904. Fruit Into Baskets

-   [Visit Problem](https://leetcode.com/problems/fruit-into-baskets/description/)

**Approach :**<br/>

-   loop throught original array, and push each element into has-table with their frequency, with total++(it's hold total no of element of sub-array)
-   if has-table size is greater than 2, then decrement it's element from hash-table depending on left pointer(initialize left pointer with 0)
-   check maximum of sub-array by `total`,
-   return `result`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`, Similarly, both indexes `left` and `right` are only monotonically increasing during the iteration, thus we have at most `2*n` steps,
-   Space-Complexity: `O(1)`, We maintain the number of fruit types contained in the window in time. Therefore, at any given time, there are at most 3 types of fruits in the window or the hash map `Map`
