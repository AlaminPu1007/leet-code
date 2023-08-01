## 1556. Thousand Separator

This problem involved about, given an integer n, add a dot (".") as the thousands separator and return it in string format.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/thousand-separator/description/)

**Algorithm :**<br/>

1. Start the function thousandSeparator with an integer parameter n.
2. Create an empty string variable called str.
3. Create an empty string variable called res.
4. Convert the integer n to a string and store it in the variable str.
5. Get the length of the string str and store it in a variable called len
6. Iterate over each character in the string str using a for loop with index i from 0 to len - 1.
    - Check if i is greater than 0 and if the remaining characters (len - i) is divisible by 3. If the above condition is true, append a '.' character to the string res.
    - Append the current character of str to the string res.
7. Return the string res as the formatted number with thousand separators.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of the method is O(N), where N is the number of digits in the input integer n. This is because we need to iterate over each digit of the string representation of n to add the '.' character as needed. The loop runs N times, where N is the length of the string str.Since the += operator for string concatenation has a time complexity of O(1) amortized, .Additionally, the conversion from integer to string can be done in O(N) time complexity.

-   Space-Complexity: `O(n)` - The space complexity of the thousandSeparator method is O(N), where N is the number of digits in the input integer n. This is because we are converting the integer n to a string and storing it in the str variable,
