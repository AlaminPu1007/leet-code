# 2696. Minimum String Length After Removing Substrings

This problem involves removing specific substrings from a given string and finding the minimum length of the resulting string.<br/>

# Problem Description

For a detailed problem description, please visit the [LeetCode Page](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/)

**Approach :**<br/>

-   We will utilize a stack data structure to solve this problem.
-   Iterate through each character in the string.
-   If the current character is 'B' and the top of the stack contains 'A', pop the element from the stack.
-   Similarly, if the current character is 'D' and the top of the stack contains 'A', pop the element from the stack.
-   Repeat this process for all characters in the string.
-   Return the length of the stack, which represents the minimum string length after removing substrings.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Since we iterate through each character in the string once.
-   Space-Complexity: `O(n)`- The stack can grow up to the length of the input string.
