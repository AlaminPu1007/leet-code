# 3330. Find the Original Typed String I

This problem involved about, alice is attempting to type a specific string on her computer. However, she tends to be clumsy and may press a key for too long, resulting in a character being typed multiple times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-original-typed-string-i/description/)

**Key Insights :**<br/>

1. `Adjacent Swaps Only`: Only consecutive duplicate characters can be swapped to form new strings
2. `Distinct Count`: Each swap of adjacent duplicates creates exactly one new distinct string
3. `Linear Scan`: Can count valid swaps with a single pass through the string

**Algorithm Steps :**<br/>

1. `Initialize Counter`: Start with 1 (the original string)
2. `Scan String`:
    - Compare each character with its neighbor
    - For each pair of identical adjacent characters, increment count
3. `Return Result`: Total count of original plus adjacent swaps

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is string length.
-   Space-Complexity: `O(1)` - no additional space are used.
