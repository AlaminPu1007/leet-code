# 557. Reverse Words in a String III

Problem link: https://leetcode.com/problems/reverse-words-in-a-string-iii/

**Problem :**<br>
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.<br>

**Approach :**<br>

- we need to detect end of each word and reverse them, also push inside new variable

**Complexity :**<br>
Let N be the length of input string s.<br>

Time Complexity: O(N) Every character in the string is traversed twice. First, to find the end of the current word, and second to reverse the word and append it to the result. Thus the time complexity is, O(N + N) = O(N+N) = O(N).<br>

Space Complexity: O(1) We use constant extra space to track the last space index.<br>
