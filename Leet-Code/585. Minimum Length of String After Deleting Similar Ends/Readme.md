## 1750. Minimum Length of String After Deleting Similar Ends

This problem involved about, Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/description/)

**Approach :**<br/>

1. Initialize variables `n` as the size of the string `s`, `left` as the left pointer, and `right` as the right pointer.
2. Iterate while `left` is less than `right` and characters at `left` and `right` are equal.
3. Within the loop, perform the following:
    - Store the character at `left` in variable `c`.
    - Move the left pointer to the next character if it is the same as its next character.
    - Move the right pointer to the previous character if it is the same as its previous character.
4. Return the length of the substring between `left` and `right` (inclusive).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `N` is the size of the input string `s`. The algorithm involves iterating through the string once.

-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will increase with input size.
