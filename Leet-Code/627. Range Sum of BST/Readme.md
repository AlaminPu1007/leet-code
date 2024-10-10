## 938. Range Sum of BST

This problem involved about, given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/range-sum-of-bst/description/)

**Approach :**<br/>

1. Initialization:

    - The `rangeSumBST` function calculates the sum of all values in a Binary Search Tree (BST) that lie within the given range [low, high].

2. Depth-First Search (DFS):

    - Utilize a Depth-First Search (DFS) approach to traverse the BST.
    - The `DFS` function is a recursive helper function that takes the current node `root`, the lower limit `low`, the upper limit `high`, and a reference to the sum variable `res`.

3. DFS Traversal:

    - Traverse the left subtree by calling `DFS(root->left, low, high, res)`.
    - Traverse the right subtree by calling `DFS(root->right, low, high, res)`.

4. Check Node Value:

    - For each node encountered during the DFS traversal, check if its value is within the range [low, high].
    - If yes, add its value to the `res` variable.

5. Result:
    - The `rangeSumBST` function returns the final sum stored in the variable `res`.

**Complexity Analysis :**<br/>

-Time Complexity: `O(N)`, where N is the number of nodes in the Binary Search Tree (BST). Each node is visited exactly once.

-   Space Complexity: `O(H)`, where H is the height of the Binary Search Tree (BST). The space is used for the recursive call stack.
