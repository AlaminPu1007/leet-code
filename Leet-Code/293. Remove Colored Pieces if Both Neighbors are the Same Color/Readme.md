## 2038. Remove Colored Pieces if Both Neighbors are the Same Color

This problem involved about, there are n pieces arranged in a line, and each piece is colored either by 'A' or by 'B'. we have to return true or false according to problem description.

# Problem description

For better explanation, please visit [LeetCode Pages](https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/)

**Algorithm :**<br/>

The thing is to observer the three consecutive A's && B's hence the turn will take one by one hence the count of consecutive A's are greater than the consecutive B's then definately Alice win which of consecutive A.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we are iterate given string from 0 to len - 2
-   Space-Complexity: `O(1)` - we are not using any extra spaces
