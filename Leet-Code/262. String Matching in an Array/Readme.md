## 1408. String Matching in an Array

This problem is involved about given an array of string words, return all strings in words that is a substring of another word

# Problem Description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/string-matching-in-an-array/description/).

**Approach :**<br/>

-   We will iterate through the given list of strings.
-   For each string i, we will iterate through the given strings again (nested loop).
-   Using the find method, we will check if i is a substring of any other word.
-   If a match is found, we will push the word into the result array and break the loop to avoid duplicates.
-   Finally, we will return the result array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - Since we are using two loops, the nested loop runs n times for each element, resulting in a total of `n*n` operations.
-   Space-Complexity: `O(n)` - We use an additional result array to store the substrings.
