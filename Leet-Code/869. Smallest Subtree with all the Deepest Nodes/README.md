# 865. Smallest Subtree with all the Deepest Nodes

This problem involved about, given the root of a binary tree, return the lowest common ancestor of its deepest leaves.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/description/)

**Key Insights :**<br/>

1. `Deepest Leaves Identification`: The deepest leaves are those at the maximum depth in the tree.
2. `LCA Calculation`: The LCA of all deepest leaves will be the node where paths from the root to these leaves diverge.
3. `Depth Tracking`: We need to track the depth of each subtree to determine where the deepest leaves are located.

**Algorithm Steps :**<br/>

1. `Depth-First Search (DFS)`: Perform a post-order traversal to calculate the depth of each subtree.
2. `Compare Depths`: At each node, compare the depths of left and right subtrees.
    - If left subtree is deeper, return its LCA and increment depth.
    - If right subtree is deeper, return its LCA and increment depth.
    - If both subtrees have equal depth, the current node is the LCA for that level.
3. `Return Result`: The root of the entire tree will eventually return the LCA of the deepest leaves.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each node is visited exactly once.
-   Space-Complexity: `O(h)` - The height of the given tree.
