# 1593. Split a String Into the Max Number of Unique Substrings

This problem involved about, given a string s, return the maximum number of unique substrings that the given string can be split into.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/split-a-string-into-the-max-number-of-unique-substrings/description/)

**Approach :**<br/>

#### Depth-First Search (DFS) with Backtracking

We use a DFS approach combined with backtracking to explore all possible splits of the string `s`. At each point in the string, we attempt to split a substring and check if it has already been encountered. If it hasn't, we proceed to explore the remaining part of the string, keeping track of the number of unique substrings.

#### Key Points

1. `Backtracking`:

    - At every index `i`, try to split the string into a substring `s[i...j]`, where `j` ranges from `i` to the end of the string.
    - We keep track of the unique substrings in an unordered set (`st`).
    - For every valid substring, we recursively explore the rest of the string.

2. `Base Case`:
    - If we've reached the end of the string, return 0 as there are no more characters left to split.
3. `Recursion`:
    - For each substring, if it is unique, we add it to the set, explore the rest of the string recursively, and then backtrack by removing the substring from the set before trying another possible split.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*n*2^n)` - where n is the length of the string. This is because, in the worst case, every possible substring is considered.
-   Space-Complexity: `O(n)` - for the call stack and the storage of substrings in the unordered set