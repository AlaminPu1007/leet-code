## 386. Lexicographical Numbers

This problem is involved about, given an integer n, return all the numbers in the range [1, n] sorted in lexicographical order.

# Problem description

For better problem explanation, please visit [LeetCode Page](https://leetcode.com/problems/lexicographical-numbers/description/)

**Algorithm :**<br/>

-   initialize an array to store result
-   called Solve recursive method
-   This recursive method will store result lexicographically

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The recursion will take `O(n)` times to complete it's operation. Recursion has an loop that will iterate `9` in worst case senior, which almost similar to constant `O(1)` times.
-   Space-Complexity: `O(1)` - if we avoid the result array
