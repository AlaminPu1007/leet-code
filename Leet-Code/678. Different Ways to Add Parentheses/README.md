# 241. Different Ways to Add Parentheses

This problem involved about, given a string expression of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. You may return the answer in any order.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/different-ways-to-add-parentheses/description)

**Approach :**<br/>

1. `Divide and Conquer:`

    - The problem can be broken down into `subproblems` by splitting the expression at each operator.
    - Recursively evaluate the left and right parts of the expression, compute their results, and then combine the results using the operator.

2. `Recursive Computation:`

    - For each operator in the string, recursively compute the possible results from the left and right sub-expressions.
    - For each combination of left and right results, apply the current operator (`+`, `-`, or `*`) and store the result.

3. `Base Case:`

    - If the sub-expression is purely numeric (i.e., contains no operators), directly convert it to an integer and return it.

4. `Return Results:`
    - After processing all operators, return the list of possible results.

**Algorithm :**<br/>

1. `Recursive Function (`backTrack`):`
    - Takes `left` and `right` indices and the expression string as input.
    - Iterates over the expression, searching for operators (`+`, `-`, `*`).
    - For each operator, recursively compute the left and right results by splitting the expression.
    - Combine the results from the left and right sub-expressions using the operator.
2. `Base Case:`

    - If no operators are found in the sub-expression, convert the numeric part to an integer and return it as a vector containing a single element.

3. `Final Result:`
    - The recursive calls build the results from smaller `subproblems` and return all possible outcomes.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * 2^n)` - The number of ways to split the expression grows exponentially because for each operator, we need to recursively compute the results of the left and right sub-expressions.
-   Space-Complexity: `O(2^n)` - The space complexity is determined by the recursion depth and the space required to store all intermediate results. The recursive call stack can go as deep as the number of operators in the expression, which is proportional to the size of the expression.