## Power of Three

[Open Problem](https://leetcode.com/problems/power-of-three/)

**Approach 1 Loop Iteration:**<br>
One simple way of finding out if a number n is a power of a number b is to keep dividing n by b as long as the remainder is 0. <br>

**Approach 2: Integer Limitations:**<br>
In particular, n is of type int. In Java, this means it is a 4 byte, signed integer. The maximum value of this data type is `2147483647`.<br>
Knowing the limitation of n, we can now deduce that the maximum value of n that is also a power of three is `1162261467`<br>

**Complexity Analysis of approach-1:**<br>

-   Time complexity : `O(log_b(n))`
-   Space complexity : `O(1)`

**Complexity Analysis of approach-2:**<br>

-   Time complexity : `O(1)`
-   Space complexity : `O(1)`
