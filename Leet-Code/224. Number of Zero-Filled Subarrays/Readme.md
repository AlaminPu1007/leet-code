## 2348. Number of Zero-Filled Subarrays

[Visit Problem](https://leetcode.com/problems/number-of-zero-filled-subarrays/description/)

**Approach :**<br/>

-   count no of contiguous subarray of `0` by increment counter value with `1`
-   then add count value withing `result` and so on
-   else we do not get any `0` from array element, then make `counter` value at initial state

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
