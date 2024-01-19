## 222. Count Complete Tree Nodes

This problem involved about, given the root of a complete binary tree, return the number of the nodes in the tree.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/count-complete-tree-nodes/description/)

**Approach :**<br/>

The algorithm steps can be stated as :

-   Set a recursive function to calculate the number of nodes.
-   In the recursive function, calculate leftHeight and the right Height of the tree from the given node.
-   If leftHeight == rightHeight, return 2leftHeight – 1.
-   If leftHeight != rightHeight, recursively call the function to calculate nodes in left subtree(leftNodes) and the right subtree (rightNodes) and return 1+leftNodes+rightNodes.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n)^2)` - To find the leftHeight and right Height we need only log*N time and in the worst case we will encounter the second case(leftHeight != rightHeight) for at max log*N times, so total time complexity will be `O(log N * logN)`

-   Space-Complexity: `O(log(n))` - Space is needed for the recursion stack when calculating height. As it is a complete tree, the height will always be log\*N.

**References :**<br/>

-   [Learn from blog](https://takeuforward.org/binary-tree/count-number-of-nodes-in-a-binary-tree/)
