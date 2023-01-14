## Rotate_string

[Visit problem](https://leetcode.com/problems/rotate-string/description/)

**Approach :**<br>
We can easily see whether it is rotated if B can be found in (A + A).<br>
For example, with A = "abcde", B = "cdeab", we have<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n^2)`, where `n` is the length of `s`
-   Space-Complexity: `O(n)`
