## 1614. Maximum Nesting Depth of the Parentheses

This problem involved about, a string is a valid parentheses string (denoted VPS) if it meets one of the following: <br/>

It is an empty string "", or a single character not equal to "(" or ")", <br/>
It can be written as AB (A concatenated with B), where A and B are VPS's, or <br/>
It can be written as (A), where A is a VPS.<br/>

# Problem description

For better problem description, please visit[LeetCode Pages](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses)

**Approach :**<br/>

1. Initialize variables `count` and `res` to keep track of the depth and maximum depth, respectively.
2. Iterate through each character in the string.
3. If the current character is `'('`, increment `count`.
4. If the current character is `')'`, decrement `count`.
5. Update `res` to the maximum of `res` and `count`.
6. After iterating through the string, `res` will contain the maximum depth of valid parentheses.
7. Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the string once, resulting in a time complexity of `O(n)`.

-   Space-Complexity: `O(1)` - The algorithm uses constant space, resulting in a space complexity of O(1).
