## 2331. Evaluate Boolean Binary Tree

This problem involved about, you are given the root of a full binary tree with the following properties:<br/>

- Leaf nodes have either the value 0 or 1, where 0 represents False and 1 represents True.<br/>
- Non-leaf nodes have either the value 2 or 3, where 2 represents the boolean OR and 3 represents the boolean AND.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/evaluate-boolean-binary-tree/description)

**Approach :**<br/>

- Base Case: If the node is a leaf (i.e., it has no children), return the boolean value of the node (true if val is 1, false otherwise).
- OR Operation (val == 2): If the node represents an OR operation, recursively evaluate the left and right subtrees and return the logical OR of their results.
- AND Operation (val == 3): If the node represents an AND operation, recursively evaluate the left and right subtrees and return the logical AND of their results.
- Recursive Evaluation: Use recursive calls to evaluate the subtrees and apply the respective logical operations.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(h)` - no of nodes in the given tree
- Space-Complexity: `O(n)` - where h is the height of the tree.