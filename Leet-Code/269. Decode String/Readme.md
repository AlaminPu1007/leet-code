## 394. Decode String

This problem involves decoding a string based on a specific pattern and returning the decoded string.

# Problem Description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/decode-string/description/).

**Algorithm :**<br/>
The algorithm used to decode the string is as follows:

-   Create a Solution class with a private recursive method called `recursiveMethod`.
-   The public method decodeString takes a string s as input and initializes an empty string ans and an index i to 0
-   Call the recursiveMethod with s, i, and the length of s
-   The recursiveMethod takes the input string s, the index i, and the length of the string len
-   Create an empty string res to store the decoded result.
-   While i is less than len and the character at index i in s is not ']', perform the following steps :
    1. If the character is not a digit, append it to res and increment i.
    2. If the character is a digit, extract the number n by parsing the consecutive digits in s starting from index i
    3. Increment i to skip the '[' character.
    4. Recursively call recursiveMethod with s, i, and len to decode the substring between '[' and ']'.
    5. Increment i to skip the ']' character.
    6. Repeat the decoded substring n times and append it to res.
-   Return the decoded string res from the recursiveMethod.
-   Finally, return the decoded string ans from the public method decodeString.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of this algorithm is O(n), where n is the length of the input string s. This is because we iterate through the string only once.
-   Space-Complexity: `O(n)` - The space complexity is O(n) since we store the decoded result in the res string.
