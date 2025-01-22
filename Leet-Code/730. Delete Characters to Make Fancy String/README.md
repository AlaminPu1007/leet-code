# 1957. Delete Characters to Make Fancy String

This problem involved about, a fancy string is a string where no three consecutive characters are equal.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/)

**Approach :**<br/>

1. `Initialize Variables`:

    - `prev`: keeps track of the previous character.
    - `frequency`: counts the occurrence of consecutive characters.
    - `ans`: stores the resulting "fancy" string.

2. `Iterate Through the String`:

    - Start from the second character in `s`.
    - `If the current character matches `prev``:
        - Increment `frequency`.
        - If `frequency` is less than 3, append the character to `ans`.
    - `If the current character differs from `prev``:
        - Reset `frequency` to 1.
        - Update `prev` to the current character.
        - Append the current character to `ans`.

3. `Return the Result`:
    - After iterating, `ans` contains the modified string with no three consecutive identical characters.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of `s` (we go through the string once).

-   Space-Complexity: `O(n)` - for storing the modified string `ans`.
