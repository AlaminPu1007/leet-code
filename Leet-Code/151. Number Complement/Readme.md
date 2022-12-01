## Number Complement

[Open Problem](https://leetcode.com/problems/number-complement/)

**Approach 1:**<br>

-   First we made number five as binary representation
-   Then we made the 5 complement
-   Then multiply each bit's with 2
-   `return result`

**Approach 2:**<br>

-   Basic idea is to find the smallest power of 2 that is larger than the input number num, and output the difference between powerof2s and num .
    For example let's the example from description of the question:- <br>
    Input: `num = 5(101)` ,<br>
    Thus the smallest power of `2 (and larger than 5) is 8 (1000)` <br>
    The output should be `8 - 5 - 1 = 2 (010)`. <br>
    [Learn about left/right shift](https://www.log2base2.com/C/bitwise/bitwise-right-shift-operator-in-c.html)

**Complexity Analysis of approach-1 :**<br>

-   Time-Complexity :`O(n)`
-   Space-Complexity :`O(n)`

**Complexity Analysis of approach-2:**<br>

-   Time-Complexity :`O(log(n))`, we divided num >> 1 (means num / 2)
-   Space-Complexity :`O(1)`
