## 662. Maximum Width of Binary Tree

This problem involved about, given the root of a binary tree, return the maximum width of the given tree.<br/>

The maximum width of a tree is the maximum width among all levels.<br/>

The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-width-of-binary-tree/description/)

**Approach :**<br/>

1. Initialization:

    - The `widthOfBinaryTree` function calculates the maximum width of a binary tree.

2. Breadth-First Traversal:

    - Utilize a queue for level-order traversal.
    - Use a pair to store each node and its corresponding index in the tree.

3. Calculate Width at Each Level:

    - At each level, keep track of the leftmost (`x1`) and rightmost (`x2`) indices.
    - For each node, calculate its index based on its position in the level (left child: 2 _ index + 1, right child: 2 _ index + 2).

4. Update Maximum Width:

    - After processing each level, calculate the width at that level (width = x2 - x1 + 1).
    - Update the maximum width (`res`) if the current width is greater than the previous maximum.

5. Result:
    - The `widthOfBinaryTree` function returns the maximum width of the binary tree stored in the variable `res`.

**Complexity Analysis :**<br/>

-   Time Complexity: `O(N)`, where N is the number of nodes in the binary tree. Each node is processed once.

-   Space Complexity: `O(W)`, where W is the maximum width of the binary tree at any level.
