## 1373. Maximum Sum BST in Binary Tree

This problem involved about, Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/)

**Approach :**<br/>

The solution utilizes a recursive approach to traverse the binary tree and check for valid BST properties in each subtree. The `largestBSTSubTreeHelper` function returns a `NodeValue` object containing information about the subtree, such as the minimum and maximum values and the size of the subtree. <br/>

The algorithm follows these steps: <br/>

1. If the current node is NULL, return a `NodeValue` representing an empty subtree.
2. Recursively traverse the left and right subtrees using the `largestBSTSubTreeHelper` function.
3. Check if the current subtree, rooted at the current node, forms a valid BST. If so, calculate the size of the BST subtree using information from the left and right subtrees.
4. Return a `NodeValue` representing the properties of the current subtree.

The `largestBst` method calls `largestBSTSubTreeHelper` with the root of the tree and returns the size of the largest BST subtree.

## Class: NodeValue

The `NodeValue` class represents the properties of a subtree relevant to the largest BST subtree problem. It includes the minimum node value, maximum node value, and the size of the subtree. <br/>

```
class NodeValue
{
public:
    int maxNode, minNode, maxSize;

    NodeValue(int minNode, int maxNode, int maxSize)
    {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};

```

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - where h is the height of the binary tree, due to the recursive call stack.
