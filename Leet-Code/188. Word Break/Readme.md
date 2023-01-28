## 139. Word Break

[Visit problem](https://leetcode.com/problems/word-break/description/)

**Approach 1: Brute Force**<br>

-   Algorithm
    The naive approach to solve this problem is to use recursion and backtracking. For finding the solution, we check every possible prefix of that string in the dictionary of words, if it is found in the dictionary, then the recursive function is called for the remaining portion of that string. And, if in some function call it is found that the complete string is in dictionary, then it will return true.<br>

**Approach-2 Recursion with memo :**<br>
In the previous approach we can see that many subproblems were redundant, i.e we were calling the recursive function multiple times for a particular string. To avoid this we can use memoization method, where an array `memo` is used to store the result of the subproblems. Now, when the function is called again for a particular string, value will be fetched and returned using the `memo` array, if its value has been already evaluated.<br><br>

With memoization many redundant subproblems are avoided and recursion tree is pruned and thus it reduces the time complexity by a large factor.

**Complexity of Approach-1 :**<br>

-   Time complexity : `O(2^n)`
-   Space complexity : `O(n)`

**Complexity of Approach-2 :**<br>

-   Time complexity : `O(n^3)`
-   Space complexity : `O(n)`
