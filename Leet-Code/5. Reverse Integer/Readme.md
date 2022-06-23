# Reverse Integer
https://leetcode.com/problems/reverse-integer/

**Problem:**
Given a signed 32-bit integer x, return x with its digits reversed.<br>
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.<br>

**Solution**
To solve this issue, we need help of INT_MAX and INT_MIN library method.<br>

NT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. <br>
INT_MIN specifies that an integer variable cannot store any value below this limit.<br>

Value of INT_MAX is +2147483647.<br>
Value of INT_MIN is -2147483648.<br>