## 22. Generate Parentheses

This problem involved about, given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/generate-parentheses/description/)

**Approach :**<br/>

-   The DFS function takes three parameters: `openP` (count of open parentheses), `closeP` (count of close parentheses), and `n` (total number of pairs).
    -   If the count of open and close parentheses reaches `n`, we have found a valid combination, and we add it to the result vector.
    -   Otherwise, we explore two possibilities:
        1.  Add an open parenthesis if the count of open parentheses is less than `n`.
        2.  Add a close parenthesis if the count of close parentheses is less than the count of open parentheses.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2^n)` - where n is the given number of pairs of parentheses. This complexity arises due to the branching factor of the recursive DFS approach.
-   Space-Complexity: `O(n) + O(n) + o(n)` - The recursive solution will be used extra spaces, as well as we are using ans `str` to hold the parenthesis, and we are using an `res` to hold the result
