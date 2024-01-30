## 150. Evaluate Reverse Polish Notation

This problem involved about, you are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.<br/>

Evaluate the expression. Return an integer that represents the value of the expression.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/)

**Approach 1(Recursive):**<br>

We need an recursive approach to solve this problem

**Approach (Using Stack) :**<br/>

1. Initialize an empty stack `st`.
2. Iterate through each token in the vector `tokens`.
    - If the token is an operator (`+`, `-`, `*`, `/`), pop the top two elements from the stack, perform the corresponding operation, and push the result back onto the stack.
    - If the token is an operand (numeric value), convert it to an integer using `stoi` and push it onto the stack.
3. After processing all tokens, the final result is at the top of the stack.
4. Return the result.

**Complexity Analysis of stack:**<br/>

-   Time-Complexity: `o(n)` - The time complexity is O(n), where n is the number of tokens in the input vector.

-   Space-Complexity: `O(d)` - The space complexity is O(d), where d is the depth of the stack (maximum number of elements stored simultaneously).

**Note :**<br/>

-   The algorithm uses a stack to keep track of intermediate results during the evaluation of RPN expressions. The order of operands in subtraction and division operations is important, and the algorithm pops elements from the stack accordingly.
