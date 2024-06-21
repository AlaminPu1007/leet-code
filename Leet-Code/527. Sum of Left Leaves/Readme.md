## 404. Sum of Left Leaves

This problem involved about, given the root of a binary tree, return the sum of all left leaves. <br/>

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sum-of-left-leaves/description/?envType=daily-question&envId=2024-04-14)

**Approach :**<br/>

1. Initialize a variable `ans` to store the sum of left leaves.
2. Perform depth-first search (DFS) on the binary tree.
3. During the DFS traversal, check if the current node is a left leaf:
    - If the node has a left child but no grandchildren (i.e., it is a leaf and a left child), add its value to `ans`.
4. Recursively perform DFS on the left and right children of the current node.
5. After completing the DFS traversal, `ans` will contain the sum of left leaves.
6. Return `ans`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm traverses each node once, resulting in a time complexity of `O(n)`
-   Space-Complexity: `O(n)` - The algorithm uses recursive calls on the stack, which can consume space proportional to the height of the tree. In the worst case (skewed tree), the space complexity is `O(n)`.
