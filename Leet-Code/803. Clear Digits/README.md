# 3174. Clear Digits

This problem involved about, you are given a string `s`. Your task is to remove all digits by doing this operation repeatedly.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/clear-digits/description/)

**Approach :**<br/>

1. `Use a Stack:`

    - Iterate through `s` character by character.
    - If the character is a `letter`, push it onto a stack.
    - If the character is a `digit`, pop the most recent letter from the stack.
    - This ensures that each digit removes its closest preceding letter.

2. `Construct the Result:`
    - Collect the remaining characters in the stack to form the final string.
    - Reverse the stack's content to maintain the original order.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - since we iterate through s once and process each character.
-   Space-Complexity: `O(n)` - in the worst case (when all characters are letters and stored in the stack).
