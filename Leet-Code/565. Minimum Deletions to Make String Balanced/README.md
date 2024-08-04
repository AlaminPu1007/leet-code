# 1653. Minimum Deletions to Make String Balanced

This problem involved about, you are given a string s consisting only of characters 'a' and 'b'​​​​.<br/>

You can delete any number of characters in s to make s balanced. s is balanced if there is no pair of indices `(i,j)` such that `i < j and s[i] = 'b' and s[j]= 'a'`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/)

**Approach :**<br/>

1. **Prefix Count**:

    - We use a prefix count array to keep track of the number of 'a' characters to the right of each index.
    - Traverse the string from the end to the start, updating the count of 'a' characters and storing it in the prefix array.

2. **Calculate Minimum Deletions**:

    - Traverse the string from the start to the end.
    - Maintain a count of 'b' characters encountered so far.
    - For each index, calculate the total deletions required to make the string balanced by adding the count of 'b' characters on the left and the count of 'a' characters on the right (stored in the prefix array).
    - Keep track of the minimum deletions required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string. We traverse the string twice.

-   Space-Complexity: `O(n)` - for the prefix count array.