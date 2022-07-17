# 20. Valid Parentheses

Problem link: https://leetcode.com/problems/valid-parentheses/

**Problem :**<br>
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.<br>

An input string is valid if:<br>

Open brackets must be closed by the same type of brackets.<br>
Open brackets must be closed in the correct order.<br>

**Approach :**<br>
To solve this issue we need to implementation of stack(data structure).<br>
First, push all the open parentheses inside our stack array and keep track of last pushed element by top value.<br>
The initial value of top := -1. <br>

After pushing all open parentheses, check each close parentheses with last pushed value into our stack.<br>
If the close parentheses and open parentheses are same, decrease top := top - 1, and so no. <br>

**Complexity :**<br>
T.C : O(N)<br>
S.C: O(N) // by using new stack array.<br>

# Runtime: 3 ms, faster than 45.59%
