## 2259. Remove Digit From Number to Maximize Result

[Open Problem](https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/)

**Approach 1:**<br>

-   loop through string_len and check string item is equal to digit or not
-   if it's then get an substr from given string and get max by max predefined method of c++
-   return grater substr

**Approach 2:**<br>

-   loop through string_len and check string item is equal to digit or not
-   if it's then get the current index of digit and check `digit` is less than `number[i+1] digit`
-   Then, get new string by founded index

**Complexity Analysis of Approach 1:**<br>

-   Time-Complexity: `O(n * m)` where `n` is string size and `m` is substring size
-   Space-Complexity: `O(n)`

**Complexity Analysis of Approach 2:**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
