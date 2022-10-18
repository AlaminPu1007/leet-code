## 1832. Check if the Sentence Is Pangram

[problem link](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)

**Problem :**<br>
A pangram is a sentence where every letter of the English alphabet appears at least once.<br>

Given a string sentence containing only lowercase English letters, `return true` if sentence is a pangram, or `false`otherwise.<br>

**Approach :**<br>

- put each character frequency inside array, 1-26
- loop through `freq` array and find out each character frequency is present at least once<br>
- if it's not then `return false`
- else `return true`

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`//we used const 26 space
