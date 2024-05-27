---
runme:
  id: 01HVG2CSP2M7NPG7DN3CES5SS2
  version: v3
---

## 129. Sum Root to Leaf Numbers

This problem involved about, you are given the root of a binary tree containing digits from 0 to 9 only.

Each root-to-leaf path in the tree represents a number. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sum-root-to-leaf-numbers/description/)

**Approach :**<br/>

1. Initialize a variable `ans` to store the sum of all root-to-leaf numbers.
2. Perform a depth-first search (DFS) traversal of the binary tree.
3. During the traversal, maintain a variable `value` representing the current root-to-leaf number.
4. At each node, update `value` by appending the current node's value to the existing number (`value * 10 + node->val`).
5. If the current node is a leaf node (i.e., it has no left or right children), add `value` to `ans`.
6. Recursively call DFS on the left and right children of the current node, passing the updated `value`.
7. After traversing the entire tree, return `ans`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm performs a depth-first traversal of the tree, visiting each node once, resulting in a time complexity of `O(n)`.

-   Space-Complexity: `O(n)` - In the worst case, the tree could be skewed, resulting in a space complexity of `O(n)`.