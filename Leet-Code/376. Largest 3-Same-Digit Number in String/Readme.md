## 2264. Largest 3-Same-Digit Number in String

This problem involved about, you are given a string num representing a large integer. An integer is good if it meets the following conditions: <br/>

-   It is a substring of num with length 3.
-   It consists of only one unique digit.

Return the maximum good integer as a string or an empty string "" if no such integer exists.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-3-same-digit-number-in-string/description)

**Approach :**<br/>

1. Initialize variables ans and res as empty strings.
2. Initialize a variable count to 1.
3. Iterate through each character of the string from index 1 to the end.
    - If the current character is the same as the previous character:
        1. Increment the count.
        2. Update the ans string with the current character.
    - If the current character is different from the previous character:
        1. Reset the count to 1.
        2. Update the ans string with the current character.
    - If count reaches 3, update the res string with the maximum of its current value and ans.
4. After the iteration, check if the size of the res string is 3. If yes, return res; otherwise, return an empty string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the length of the input string. The algorithm iterates through each character in the string once
-   Space-Complexity: `O(1)` - as the algorithm uses a constant amount of extra space regardless of the input size
