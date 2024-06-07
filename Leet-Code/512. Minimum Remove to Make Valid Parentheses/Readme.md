## 1249. Minimum Remove to Make Valid Parentheses

This problem involved about, given a string s of '(' , ')' and lowercase English characters.<br/>

Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description)

**Approach :**<br/>

This solution utilizes a stack to track the indices of opening parentheses '('. It iterates through the input string `s` twice:

1. In the first pass, it removes unnecessary closing parentheses ')'. It maintains a count of opening parentheses encountered and includes the character in the result string `tempString` if:

    - It is an opening parenthesis '('.
    - It is a closing parenthesis ')' and there are still remaining opening parentheses to match.

2. In the second pass, it removes excess opening parentheses '(' that were not matched with closing parentheses ')'. It iterates through `tempString` in reverse order:

    - If it encounters an opening parenthesis '(' and there are still unmatched opening parentheses to remove, it skips adding it to the final result.
    - Otherwise, it includes the character in the final result string `ans`.

3. Finally, it returns the reversed `ans` string as the result.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n) + O(n) + O(n) => O(n)` - where n is the length of the input string `s`. The solution iterates through the string twice, each time with linear time complexity.
-   Space-Complexity: `O(n)` - We used an extra tempString & ans string to hold the result
