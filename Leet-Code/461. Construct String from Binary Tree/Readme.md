## 606. Construct String from Binary Tree

This problem involved about, given the root of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/construct-string-from-binary-tree/description)

**Approach :**<br/>

The tree2str function initiates the string generation process by invoking the DFS function, which performs a depth-first traversal of the binary tree.

1. DFS Traversal:

    1. The DFS function is a recursive helper function responsible for traversing the tree.
    2. It checks if the current node is NULL (base case) and returns if so.
    3. Appends the string representation of the current node's value to the res string.
    4. Checks if the current node has a left child or a right child.
        - If the node has a left child or both left and right children:
            - Appends an opening parenthesis '('.
            - Calls DFS recursively for the left child.
            - Appends a closing parenthesis ')'.
        - If the node has a right child:
            - Appends an opening parenthesis '('.
            - Calls DFS recursively for the right child.
            - Appends a closing parenthesis ')'.

2. Tree Construction in String Format:
    1. The traversal adds nodes and parentheses to represent the tree structure in a string.
    2. The parentheses indicate the hierarchy of nodes, ensuring the correct construction of the tree.
3. String Return:
    1. The generated string representation of the binary tree is accumulated in the res variable and returned as the final result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the binary tree. This is because each node is visited exactly once.
-   Space-Complexity:`O(n)` - due to the recursion stack space used during the depth-first traversal, proportional to the height of the tree.
