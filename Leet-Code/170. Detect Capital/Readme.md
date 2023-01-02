## Detect Capital

[Visit Problem](https://leetcode.com/problems/detect-capital/description/)

**Approach :**<br>

-   All letters in this word are capitals, like "USA".
-   All letters in this word are not capitals, like "leetcode".
-   Only the first letter in this word is capital, like "Google".

    The problem gives us three patterns, and ask if the given word matches any of them. It would be easy to think of checking the cases one by one. In each case, we can just use the most simple method to check if word matches the pattern -- check the char one by one.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
