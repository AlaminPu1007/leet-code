## 121. Best Time to Buy and Sell Stock

[Visit Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

**Approach For extra space :**<br/>

-   we need to make an maximum value array from given array
-   loop through original array, and for each item get maximum value after `makeArr[i] - prices[i]` substraction
-   return `result`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`

**Approach for constant space :**<br />

-   Each time we will try to buy and sell stock,
-   get minimum value for each prices[i]
-   get maximum value after ` prices[i] - minValue` substraction
-   return `result`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
