## 678. Valid Parenthesis String

This problem involved about, Given a string s containing only three types of characters: '(', ')' and '\*', return true if s is valid.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/valid-parenthesis-string/description/)

**Approach :**<br/>

# The algorithm as step follow :

1. Iterate over the string and :
    - Store `(` position in a stack data-structure
    - Store `*` position in a stack data-structure
    - Whenever we get `)` we removed item from `(` stack data-structure or `*` stack data structure, depending on their existing ness
    - if step 3 is failed, then we return false, cause their is no way to have valid parenthesis
2. After execution of loop, we need to do :
    - if `(` stack is present & `*` stack data-structure is also present, then check the position of `(` parenthesis is not greater than `*` position and removed theme
3. return true

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) => O(n)` - Iterate over the array can have `O(n)` times, and push/pop element into stack has `O(1)` times. Traverse over the stack also has `O(n)` times
-   Space-Complexity: `O(n)` - we are using and extra additional Stack data structure.
