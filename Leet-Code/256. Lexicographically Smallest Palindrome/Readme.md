## 2697. Lexicographically Smallest Palindrome

This problem involves making a given string a palindrome with the minimum number of operations.

# Problem Description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/lexicographically-smallest-palindrome/description/).

**Approach :**<br/>

-   We will loop through a `left` pointer and a `right` pointer, where the initial value of the `left` pointer is 0, and the initial value of the right pointer is `string.len-1`.
-   Then, we will check if the character at position left in the string is equal to the character at position right.
-   If they are not equal, we will compare the characters. If the character at position left is less than the character at position right, we will update the character at position right with the character at position left. If it is not, we will update the character at position left with the character at position right.
-   We will increment the left pointer and decrement the right pointer.
-   Finally, we will return the original string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`- Since we check every element from the given string until the string length.
-   Space-Complexity: `O(1)`- We do not use any extra space.
