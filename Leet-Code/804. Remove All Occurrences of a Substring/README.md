# 1910. Remove All Occurrences of a Substring

This problem involved about, given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description)

**Algorithm :**<br/>

    - Use a stack to simulate the process of removing occurrences of `part`.
    - Iterate through each character of `s` and push it onto the stack.
    - After pushing a character, check if the top `m` characters of the stack match `part` (where `m` is the length of `part`).
    - If a match is found, pop the top `m` characters from the stack (effectively removing the occurrence of `part`).
    - Repeat the process until the entire string is processed.
    - Finally, construct the result string from the remaining characters in the stack.

**Steps :** <br/>

    - Initialize an empty stack.
    - Iterate through each character of `s`:
        1. Push the character onto the stack.
        2. If the stack size is at least `m`, check if the top `m` characters match `part`.
        3. If they match, pop the top `m` characters from the stack.
    - After processing the entire string, construct the result by popping characters from the stack and reversing the order.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the length of `s` and `m` is the length of `part`.
-   Space-Complexity: `O(n)` - due to the stack storing up to `n` characters.
