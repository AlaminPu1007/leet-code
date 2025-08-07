# 2942. Find Words Containing Character

This problem involved about, you are given a 0-indexed array of strings words and a character x.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-words-containing-character/description)

**Key Insights :**<br/>

1. `Linear Search`: Each word needs to be checked for the presence of the character
2. `Index Tracking`: Maintain a counter to track the current word's index
3. `String Search`: Utilize string's find method to check for character presence

**Algorithm Steps :**<br/>

1. `Initialize Result Container`: Create an empty vector to store indices
2. `Iterate Through Words`:
    - For each word, check if it contains the character `x`
    - If found, add the current index to the result
    - Increment index counter
3. `Return Result`: The vector containing indices of matching words

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where n is number of words and `O(m)` average case for each word `(m = word length)`.
-   Space-Complexity: `O(n)` - where n is number of matches (worst case O(n))
