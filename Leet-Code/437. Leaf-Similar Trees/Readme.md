## 872. Leaf-Similar Trees

This problem involved about, consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/leaf-similar-trees/description/)

**Approach :**<br/>

Let's find the leaf value sequence for both given trees. Afterwards, we can compare them to see if they are equal or not. <br/>

To find the leaf value sequence of a tree, we use a depth first search. Our dfs function writes the node's value if it is a leaf, and then recursively explores each child. This is guaranteed to visit each leaf in left-to-right order, as left-children are fully explored before right-children.<br/>

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - where `n` and `m` are the lengths of the given trees.
-   Space-Complexity: `O(n + m)`
