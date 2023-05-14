## 1456. Maximum Number of Vowels in a Substring of Given Length

-   [Visit Problem](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/)

**Approach :**<br/>

-   we need an slide-window technique to solve this issue(by this we can solve this problem withing `O(n)` time-complexity)
-   only one character is added to the window while one is removed, Therefore, we can represent the new window by keeping track of the changes between adjacent windows.
-   If the newly added character s[i] is a vowel, we increase count by 1.
-   If the newly removed character s[i - k] is a vowel, we reduce count by 1.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`, We need to record several parameters, count and answer, which takes`O(1)` space. The set vowels contains 5 vowel letters which takes `O(1)`
