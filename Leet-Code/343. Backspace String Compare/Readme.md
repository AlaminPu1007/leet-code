## 844. Backspace String Compare

This problem involved about, given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/backspace-string-compare/description)

**Approach :**<br/>

1. we need stack DSA to solve this problem
2. Iterate over the string and push item into stack if 'char' is not `#`, whenever we get any `#` we removed stack top most element
3. We will repeat step-2 for `t` string also
4. now iterate over the both stack & check they exactly have the same string. if not, then we return false
5. return true if both stack has same size

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(m) + O(min(n, m))` - iterate over the both string have `O(n) + O(m)` time complexity, then check stack has `O(min(n,m))` time complexity
-   Space-Complexity: `O(n)` - we are using an extra spaces
