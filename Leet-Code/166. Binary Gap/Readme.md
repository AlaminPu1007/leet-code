## Binary Gap

[Visit Problem](https://leetcode.com/problems/binary-gap/description/)

**Approach-1 :**<br>

-   loop through 32, constrains can at most 32 bit's
-   after shit bit of 'n' to i'th and and make and && with 1, if it's true then store the position of founded positive bit(1)
-   again loop through `A` array and count the distance of `1` founded bit

**Complexity Analysis of Approach-1:**<br>

-   Time Complexity: `O(log(n))`, Note that log⁡N is the number of digits in the binary representation of N.
-   Space Complexity: `O(log(n))`, the space used by A.

**Complexity Analysis of Approach-2:**<br>

-   Time Complexity: `O(log(n))`, Note that log⁡N is the number of digits in the binary representation of N.
-   Space Complexity: `O(1)`
