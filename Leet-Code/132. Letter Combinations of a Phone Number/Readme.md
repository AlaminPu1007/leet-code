## 17. Letter Combinations of a Phone Number

[Visit problem](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

**Approach :**<br>

-   This is an recursive solution
-   each time we take one item from original string and get it's value from hash-map
-   loop through string_length(get from hash-map) and called next index to get next item from original string and so on
-   Note: after finished each recursion we need to removed previous added character from copy_string other wise it will always carry previous character(back-tracking)

**Complexity :**<br>

-   Time-Complexity: `O(n * 4 ^ n)` //where n is the string length and 4 is the at most character for digit `9 can be(wxyz)`
