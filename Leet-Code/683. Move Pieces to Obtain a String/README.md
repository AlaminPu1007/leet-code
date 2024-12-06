# 2337. Move Pieces to Obtain a String

This problem involved about, you are given two strings start and target, both of length n. Each string consists only of the characters 'L', 'R', and `_` where:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/)

**Approach :**<br/>

1. `Initial Checks`:

    - If the lengths of `start` and `target` differ, return `false`.

2. `Skip Empty Spaces (`\_`)`:

    - Use two pointers `first` and `second` to traverse both strings.
    - Skip over `_` in both `start` and `target`.

3. `Character Matching`:

    - Compare characters after skipping `_`:
        - If characters do not match, return `false`.
        - If the characters are `'L'` or `'R'`:
            - `'L'` in `start` should not appear to the right of `'L'` in `target`.
            - `'R'` in `start` should not appear to the left of `'R'` in `target`.

4. `Final Check`:

    - Ensure both pointers reach the end of their respective strings at the same time.

5. `Edge Cases`:
    - Strings with only `_` should match.
    - Mismatched characters or directions should return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - Length of the strings.
-   Space-Complexity: `O(1)` - Only constant amount of space are used.
