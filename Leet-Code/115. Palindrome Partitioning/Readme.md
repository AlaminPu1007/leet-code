## 131. Palindrome Partitioning

[Problem link](https://leetcode.com/problems/palindrome-partitioning/)

**Problem :**<br>
Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.<br>

A palindrome string is a string that reads the same backward as forward.<br>

**Approach :**<br>
[Learn from article](https://takeuforward.org/data-structure/palindrome-partitioning/)
[Learn from VIDEO](https://www.youtube.com/watch?v=WBgsABoClE0&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=17)

**Complexity :**<br>

- Time Complexity: `O( (2^n) *k*(n/2) )`

Reason: O(2^n) to generate every substring and O(n/2) to check if the substring generated is a palindrome. O(k) is for inserting the palindromes in another data structure, where k is the average length of the palindrome list.<br>

- Space Complexity: `O(k * x)`

Reason: The space complexity can vary depending upon the length of the answer. k is the average length of the list of palindromes and if we have x such list of palindromes in our final answer. The depth of the recursion tree is n, so the auxiliary space required is equal to the O(n).<br>
