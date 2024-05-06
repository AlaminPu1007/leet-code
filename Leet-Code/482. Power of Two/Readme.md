## 231. Power of Two

This problem involved about, given an integer n, return true if it is a power of two. Otherwise, return false. <br/>
An integer n is a power of two, if there exists an integer x such that n == 2x.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/power-of-two/description)

**Approach :**<br/>

1. Check if the integer is less than 1. If it is, return False.
2. Check if the integer is equal to 1. If it is, return True.
3. Perform a bitwise AND operation with (n-1).
4. If the result is 0, then the integer is a power of two. Otherwise, it is not.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)`
-   Space-Complexity: `O(1)`
