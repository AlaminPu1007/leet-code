## 2108. Find First Palindromic String in the Array

This problem involved about, given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/)

**Approach :**<br/>

1. Iterate through each word in the given list.
2. For each word, call the `isPalindromicWord` method to check if it is a palindrome.
3. If a palindromic word is found, return that word.
4. If no palindromic word is found, return an empty string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N * M)` - where N is the number of words and M is the average length of the words. This is because for each word, it checks if it is a palindrome by comparing characters.

-   Space-Complexity: `O(1)` - since the additional space used is constant, and it does not depend on the input size.
