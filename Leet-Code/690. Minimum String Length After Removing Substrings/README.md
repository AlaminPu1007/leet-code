# 2696. Minimum String Length After Removing Substrings

This problem involved about, you are given a string s consisting only of uppercase English letters.
You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/)

**Approach :**<br/>

The problem can be solved efficiently using a `stack`:

-   Iterate through each character in the string `s`.
-   Use the stack to keep track of characters.
-   For each character, check if it forms a removable pair with the character on top of the stack:
    -   If the current character is 'B' and the top of the stack is 'A', pop the top element ('A') since "AB" can be removed.
    -   If the current character is 'D' and the top of the stack is 'C', pop the top element ('C') since "CD" can be removed.
    -   Otherwise, push the current character onto the stack.
-   After processing the entire string, the size of the stack will represent the minimum length of the string after all valid pairs have been removed.

**Algorithm :**<br/>

1. Initialize an empty stack.
2. Iterate over each character in the string:
    - If the stack is empty or the current character doesn't form a removable pair with the top of the stack, push the character onto the stack.
    - If a removable pair is found, pop the top of the stack.
3. After the loop, the size of the stack gives the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string `s`. We iterate through each character exactly once, and each stack operation (push or pop) is `O(1)`.

-   Space-Complexity: `O(n)` - where `n` is the length of the string `s`. In the worst case, no pairs are removed, and all characters are stored in the stack.