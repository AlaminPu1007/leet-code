## 1422. Maximum Score After Splitting a String

This problem involved about, given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring). <br/>

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/)

**Approach :**<br/>

1. Initialize ones as the number of times 1 occurs in s
2. Initialize zeros = 0 and the answer ans = 0.
3. Iterate i from 0 until s.length - 1:
    1. If s[i] == '1', decrement ones.
    2. Otherwise, increment zeros.
    3. Update ans with zeros + ones if it is larger.
4. return `res`

    **Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + o(n) => O(n)` - count all `1` have `O(n)` and count max result also has required `O(n)` time complexity
-   Space-Complexity: `O(1)` - we are using an constant amount of spaces
