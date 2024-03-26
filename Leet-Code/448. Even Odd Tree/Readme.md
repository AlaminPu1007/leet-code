## 1609. Even Odd Tree

This problem involved about, A binary tree is named Even-Odd if it meets the following conditions:

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/even-odd-tree/description/)

**Approach :**<br/>

1. Perform a level-order traversal (BFS) of the given binary tree.
2. At each level, check whether the nodes satisfy the conditions for an even-odd tree:
    - For even levels (starting from level 0), all nodes must have odd values, and each node's value must be strictly greater than the value of its previous node.
    - For odd levels, all nodes must have even values, and each node's value must be strictly less than the value of its previous node.
3. Utilize a queue data structure to perform the level-order traversal.
4. Maintain a boolean variable `even` to indicate whether the current level is even or odd.
5. Initialize a temporary variable `tempValue` to store the value of the previous node at each level.
6. Update `tempValue` as you traverse each node and compare it with the current node's value based on the level's parity.
7. If any node violates the conditions, return `false`; otherwise, return `true` after traversing the entire tree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree. We traverse each node once during the level-order traversal.
-   Space-Complexity: `O(n)` - we are using an queue data structure, that requires `O(n)` space complexity

**References :**<br/>

-   [Learn approach from LeetCode official solution](https://leetcode.com/problems/even-odd-tree/editorial/)
