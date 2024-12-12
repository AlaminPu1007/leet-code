# 2096. Step-By-Step Directions From a Binary Tree Node to Another

This problem involved about, you are given the root of a binary tree with n nodes. Each node is uniquely assigned a value from 1 to n. You are also given an integer startValue representing the value of the start node s, and a different integer destValue representing the value of the destination node t.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/description/)

**Approach :**<br/>

1. **Find the Lowest Common Ancestor (LCA)**:

    - The LCA of two nodes is the deepest node that is an ancestor of both.
    - Use a recursive approach to find the LCA.

2. **Find Paths from LCA to Start and Destination Nodes**:

    - Use Depth-First Search (DFS) to find the paths from the LCA to the `startValue` and `destValue` nodes.
    - Record the path as a string of 'L' and 'R' moves.

3. **Construct the Final Directions**:

    - Convert the path to the `startValue` node into 'U' moves (one 'U' for each character in the path).
    - Append the path to the `destValue` node to the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the tree, since each node is visited at most once.

-   Space-Complexity: `O(n)` - where `h` is the height of the tree, due to the recursion stack.