## 1930. Unique Length-3 Palindromic Subsequences

This problem involved about, given a string s, return the number of unique palindromes of length three that are a subsequence of s.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description)

**Approach :**<br/>

1. Initialize two arrays, firstIndex and lastIndex, each of size 26 (for the 26 lowercase English alphabets), with values -1.

2. Traverse the input string to find the first and last occurrences of each character. Store these indices in the firstIndex and lastIndex arrays.
3. Iterate through the 26 lowercase letters. For each letter:
    - Check if it exists in the input string. If not, move to the next letter.
    - Create a set to store unique characters encountered between the first and last occurrences of the current letter in the string.
    - Count the number of unique characters between the first and last occurrences of the letter and accumulate this count.
4. Return the total count, which represents the number of unique characters found between the first and last occurrences of each letter.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we calculate first and last by iterating over s, which costs `O(n)`.
-   Space-Complexity: `O(1)` - first, last, and between all use constant space since s only contains letters in the English alphabet.
