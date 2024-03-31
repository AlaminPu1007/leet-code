## 921. Minimum Add to Make Parentheses Valid

This problem involved about, a parentheses string is valid if and only if:

-   It is the empty string,
-   It can be written as AB (A concatenated with B), where A and B are valid strings, or
-   It can be written as (A), where A is a valid string.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/)

**Approach :**<br/>

1. Initialization:

    - The `minAddToMakeValid` function takes a string `s` consisting of parentheses ('(' and ')').
    - It returns the minimum number of parentheses needed to be added to make the string valid.

2. Stack-based Approach:

    - Utilize a stack to keep track of the opening parentheses encountered.
    - Iterate through each character in the string.

3. Opening Parenthesis:

    - If an opening parenthesis '(' is encountered, push it onto the stack.

4. Closing Parenthesis:

    - If a closing parenthesis ')' is encountered:
        - If the stack is non-empty and the top of the stack is an opening parenthesis, pop the stack.
        - Otherwise, increment the result counter as it indicates an invalid closing parenthesis.

5. Remaining Opening Parentheses:

    - After processing the string, add the size of the remaining elements in the stack to the result.
      This accounts for the opening parentheses without matching closing parentheses.

6. Result:
    - The function returns the total count of parentheses needed to make the string valid.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the length of the input string. Each character is processed once.
-   Space-Complexity: `O(n)` - where N is the length of the input string. The space is used for the stack.
