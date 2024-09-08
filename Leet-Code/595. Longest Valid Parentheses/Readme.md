## 32. Longest Valid Parentheses

This problem involved about, given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-valid-parentheses/description/)

**Approach :**<br/>

-   Initialize a stack with -1 to handle the base case for valid substrings starting from index 0.
-   Iterate through each character in the string:
    -   If the character is an opening parenthesis `'('`, push its index onto the stack.
    -   If the character is a closing parenthesis `')'`:
        -   Pop the top element from the stack (this represents a matched opening parenthesis).
        -   If the stack is empty, push the current index onto the stack (this helps to mark the end of the last valid substring).
        -   If the stack is not empty, calculate the length of the current valid substring using the difference between the current index and the new top index of the stack. Update the result if this length is greater than the previously recorded maximum length.
-   Return the maximum length of valid parentheses found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each character in the string is processed exactly once, resulting in linear time complexity.
-   Space-Complexity: `O(n)` - The space complexity is determined by the stack, which in the worst case can store all indices in the string, resulting in O(n) space complexity.
