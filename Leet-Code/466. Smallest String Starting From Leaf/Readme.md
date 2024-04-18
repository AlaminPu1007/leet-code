---
runme:
  id: 01HVN4BVSE3RDM6B4N1CF3KSMS
  version: v3
---

##

This problem involved about, you are given the root of a binary tree where each node has a value in the range [0, 25] representing the letters 'a' to 'z'. <br/>

Return the lexicographically smallest string that starts at a leaf of this tree and ends at the root. <br/>

As a reminder, any shorter prefix of a string is lexicographically smaller.

**Problem description :**<br/>

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/smallest-string-starting-from-leaf/description/)

**Approach :**<br/>

1. Initialize an empty string `res` to store the result.
2. Perform Depth-First Search (DFS) on the binary tree:
    - At each node, concatenate the character represented by the node's value to the current string `cur`.
    - If the current node is a leaf node (i.e., it has no left or right child), compare `cur` with the current result `res`:
        - If `res` is empty or `cur` is lexicographically smaller than `res`, update `res` with `cur`.
    - Recursively call DFS on the left and right children of the current node with the updated string `cur`.
3. After traversing the entire tree, return the resulting string `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2) ` - The algorithm performs a Depth-First Search (DFS) traversal of the tree, visiting each node once, resulting in a time complexity of `O(n)` and add string to the `cur` can also have O`(n)`

-   Space-Complexity: `O(n) ` - In the worst case, if the tree is skewed (i.e., it resembles a linked list), the space complexity could be `O(n)` where `n` is the number of nodes in the tree.