## 144. Binary Tree Preorder Traversal

[Visit the problem](https://leetcode.com/problems/binary-tree-preorder-traversal/description/)

**Approach :**<br>

-   1. Initialize an empty array answer
-   2. Start with the root node root. If root is not `NULL`
-   -> add its value to answer
-   -> repeat step 2 with root's left child
-   -> repeat step 2 with root's right child.
-   3. Return answer after the iteration stops.

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`

**References :**<br>
[Learn LeetCode official Solution](https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/binary-tree-preorder-traversal/)
[Learn from Youtube](https://www.youtube.com/watch?v=RlUu72JrOCQ)
[geeksforgeeks](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
