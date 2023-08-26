## 125. Valid Palindrome

This problem involved about, given a string s, return true if it is a palindrome, or false otherwise.

# Problem description

For better problem description please visit [Leetcode Pages](https://leetcode.com/problems/valid-palindrome/description/)

**Approach :**<br/>

Algorithm: isPalindrome(string s)
Input: A string s
Output: A boolean indicating whether s is a palindrome or not

1. Initialize an empty string copyStr.
2. Initialize a boolean variable res and set it to true.
3. Get the length of the input string s and store it in n.
4. Initialize a variable count and set it to 0.

5. Iterate through each character, c, in the string s from index 0 to n-1:
   a. If c is an uppercase letter (between 'A' and 'Z'):
   i. Convert c to lowercase by adding 32 to its ASCII value.
   ii. Append the lowercase character to the end of copyStr.

    b. If c is a lowercase letter (between 'a' and 'z'):
    i. Append c to the end of copyStr.

    c. If c is a digit (between '0' and '9'):
    i. Append c to the end of copyStr.

6. Calculate the value of r as copyStr's size minus 1.

7. Iterate through each index i from 0 to the size of copyStr - 1:
   a. Compare the character at index i in copyStr with the character at index r in copyStr.
   i. If they are equal, continue to the next iteration.
   ii. If they are not equal: 1. Set res to false. 2. Break out of the loop.

8. Return the value of res.

9. End of the algorithm.

Main function:

1. Create an object of the Solution class and name it obj.
2. Initialize a string str with the value "0P".
3. Call the isPalindrome method of the obj object with str as the argument.
4. Print the result of the isPalindrome method call (either true or false).
5. Return 0 to indicate successful program execution.

End of the main function.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the string array that would take `O(n)` times
-   Space-Complexity: `O(n)` - we are using an extra additional spaces to store string
