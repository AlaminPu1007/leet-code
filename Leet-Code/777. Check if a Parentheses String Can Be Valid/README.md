# 2116. Check if a Parentheses String Can Be Valid

This problem involved about, a parentheses string is a non-empty string consisting only of '(' and ')'. It is valid if any of the following conditions is true.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/description)

**Approach :**<br/>

#### 1. `Handle Edge Case`

-   If the length of `s` is odd, it cannot form valid pairs. Return `false`.

#### 2. `Use Stacks for Tracking`

-   Maintain two stacks:
    -   `locked_st`: Tracks indices of locked opening parentheses `'('`.
    -   `un_locked`: Tracks indices of unlocked positions `'0'`.

#### 3. `Traverse the String`

-   For each character in `s`:
    1.  If `locked[i] == '0'` (unlocked position), add its index to `un_locked`.
    2.  If `locked[i] == '1'` and `s[i] == '('`, add its index to `locked_st`.
    3.  If `locked[i] == '1'` and `s[i] == ')'`:
        -   First, try to match with an opening parenthesis from `locked_st`.
        -   If none are available, match with an unlocked position from `un_locked`.
        -   If neither is possible, return `false`.

#### 4. `Handle Remaining Locked Parentheses`

-   After traversal, attempt to match leftover locked opening parentheses from `locked_st` with indices from `un_locked`.
-   Ensure all locked opening parentheses can be matched with available unlocked positions in the correct order (i.e., `locked_st.top() < un_locked.top()`).

#### 5. `Final Validation`

-   If `locked_st` is not empty after the above step, it means some locked opening parentheses could not be matched. Return `false`.
-   Otherwise, return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string `s`.
-   Space-Complexity: `O(n)` - We are using an extra stack spaces.
