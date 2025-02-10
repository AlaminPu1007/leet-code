# 2109. Adding Spaces to a String

This problem involved about, you are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/adding-spaces-to-a-string/description/)

**Approach :**<br/>

1. `Two-Pointer Technique`:

    - Use one pointer `i` to traverse the string `s`.
    - Use another pointer `j` to track the current position in the `spaces` list.

2. `Iterate Through the String`:

    - For each character in `s`, check if the current index `i` matches the value at `spaces[j]`.
    - If it matches:
        - Insert a space (`' '`) into the result string.
        - Increment the pointer `j` to process the next index in `spaces`.

3. `Continue Adding Characters`:

    - Append the current character in `s` to the result string.

4. `Return Result`:
    - After processing the entire string, return the result string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Length of the string.
-   Space-Complexity: `O(n)` - Space required to store the result string
