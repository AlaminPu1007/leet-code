## 438. Find All Anagrams in a String

[Visit Problem](https://leetcode.com/problems/find-all-anagrams-in-a-string/description/)

**Approach :**<br>

-   define two array to store each string frequency
-   compare first occurrences of frequency, if match, then push first index-0 inside of ans array
-   loop through remain string after `p_length`, and decrement previous added character value by one, increment current character freq by one, and check `window == freq_p` if it's true push string index of occurrences. so on

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
