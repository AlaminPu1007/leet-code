## 235. Lowest Common Ancestor of a Binary Search Tree

This problem involved about,

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)

**Approach :**<br/>

-   Algorithm

    1. Call the DFS method with the root node and the nodes `p` and `q`.
    2. In the DFS method, if the current node's value is less than both `p` and `q`, recursively call the DFS method on the right subtree.
    3. If the current node's value is greater than both `p` and `q`, recursively call the DFS method on the left subtree.
    4. If neither of the above conditions is met, the current node is the LCA. Return the current node as the result.

-   DFS Method (`DFS`)

    1. If the current node is NULL, return NULL (no common ancestor).
    2. Get the value of the current node.
    3. Compare the values of the current node with the values of nodes `p` and `q`:
        - If the current node's value is less than both `p` and `q`, call the DFS method on the right subtree.
        - If the current node's value is greater than both `p` and `q`, call the DFS method on the left subtree.
        - If neither of the above conditions is met, return the current node as the LCA.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(h)` - where `h` is the number of nodes in the given tree
-   Space-Complexity: `O(h)` - where `h` is the height of the tree, due to the recursive call stack.
