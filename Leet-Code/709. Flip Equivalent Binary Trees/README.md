# 951. Flip Equivalent Binary Trees

This problem involved about, for a binary tree T, we can define a flip operation as follows: choose any node, and swap the left and right child subtrees.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/flip-equivalent-binary-trees/description)

**Approach :**<br/>

1. `Base Case`:

    - If both trees are empty (`nullptr`), they are considered flip equivalent.
    - If only one of the trees is empty and the other is not, they cannot be flip equivalent.
    - If the root values of the two trees are not the same, they are not equivalent.

2. `Recursive Case`:

    - First, we check if both trees are already structurally identical without any flipping.
    - Second, we check if they can become equivalent after flipping their left and right subtrees.

3. `Combine Results`:
    - The two trees are flip equivalent if either:
        1. They are already structurally identical.
        2. They become structurally identical after flipping their left and right subtrees.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the total number of nodes in the smaller of the two trees.
-   Space-Complexity: `O(h)` - where `h` is the height of the tree due to the `recursion stack`.