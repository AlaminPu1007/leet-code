## 1903. Largest Odd Number in String

This problem involved about, you are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-odd-number-in-string/description/)

**Approach :**<br/>

1. Iterate through the digits of the string from right to left (starting from the least significant digit).
2. For each digit, convert it to an integer (value) using ASCII values.
3. Check if the integer value is odd (value % 2 == 1).
4. If the digit is odd, return the substring of the original string from the beginning up to the current position.
5. If no odd digit is found, return an empty string

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the length of the input string num. The algorithm iterates through each digit of the string once.
-   Space-Complexity: `O(1)`
