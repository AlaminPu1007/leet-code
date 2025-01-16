# 1106. Parsing A Boolean Expression

This problem involved about, a boolean expression is an expression that evaluates to either true or false. It can be in one of the following shapes

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/parsing-a-boolean-expression/description/)

**Approach :**<br/>

### Step 1: Depth-First Search (DFS)

-   Use a recursive depth-first search (DFS) approach to evaluate the expression.
-   As we traverse through the expression, we keep track of the current character (`curChar`) and skip necessary parentheses or commas.

### Step 2: Handling NOT `!`

-   If we encounter a `!`, skip the open parenthesis `(`, evaluate the next expression recursively using `DFS()`, and return the negated result.
-   Skip the closing parenthesis `)` after processing the NOT operation.

### Step 3: Handling AND `&`

-   For AND `&`, skip the open parenthesis and collect all the sub-expressions inside it. We evaluate all sub-expressions recursively and return `false` if any of them is `false`. Otherwise, return `true`.

### Step 4: Handling OR `|`

-   For OR `|`, evaluate all sub-expressions and return `true` if any of them is `true`. Otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The function traverses each character in the string exactly once, performing constant-time operations for each character.

-   Space-Complexity: `O(n)` - We use recursive calls to evaluate each sub-expression, and each call consumes space on the call stack. Additionally, we use a vector to store the boolean values of sub-expressions, which has a size proportional to the number of expressions being evaluated.