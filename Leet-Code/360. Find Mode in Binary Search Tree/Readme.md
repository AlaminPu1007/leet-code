## 501. Find Mode in Binary Search Tree

This problem involved about, Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently occurred element) in it.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-mode-in-binary-search-tree/description/)

**Approach :**<br/>

1. Initialize an empty unordered_map Map to store the frequency of values encountered in the BST.
2. Define a helper function DFS_METHOD that performs a depth-first traversal of the BST.
3. In the DFS_METHOD, for each node:
    - Increment the count for the value of the node in the Map.
    - Recursively call `DFS_METHOD` for the left and right children of the node.
4. After DFS traversal is complete, find the maximum frequency (maxElement) in the Map.
5. Iterate through the Map, and for each key-value pair, if the value matches the maxElement, add the key to the ans vector.
6. Return the ans vector, which contains the mode value(s).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where 'n' is the number of nodes in the tree.
-   Space-Complexity: `O(n)` -The space used by the Map
