##

This problem involved about, we build a table of n rows `(1-indexed)`. We start by writing `0` in the 1'st row. Now in every subsequent row, we look at the previous row and replace each occurrence of `0` with `0,1`, and each occurrence of `1` with `1,0`.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/k-th-symbol-in-grammar/description/)

**Approach :**<br/>

1. The code follows a binary tree-like structure, where each node has two children.
2. The left child is a copy of the parent node, and the right child is the complement of the parent node.
3. The kthGrammar function calculates the K-th symbol in the N-th row using a binary search-like approach. It iteratively divides the sequence into two halves and determines which half contains the K-th symbol, updating the result as it goes.

**Algorithm :**<br/>

1. Initialize left to 1 and right to 2^(n-1) to represent the range of elements in the N-th row.
2. Loop from 1 to n - 1 to determine the K-th symbol
3. Calculate the middle index mid between left and right.
4. If K is less than or equal to mid, update right to mid.
5. If K is greater than mid, update left to mid + 1 and update the result res based on the rule that if the current value of res is 1, it becomes 0, and if it's 0, it becomes 1.
6. Continue the loop until reaching the N-th row.
7. Return the final value of res as the K-th symbol in the N-th row.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the `n` that has `O(n)` times complexity
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces except constant
