# 2196. Create Binary Tree From Descriptions

This problem involved about, You are given a 2D integer array descriptions where `descriptions[i] = [parenti, childi, isLefti]` indicates that `parent-i` is the parent of `child-i` in a binary tree of unique values. Furthermore,

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/create-binary-tree-from-descriptions/description/)

**Approach :**<br/>

Given a list of descriptions of the form `[parent, child, isLeft]`, where `isLeft` is `1` if the child is a left child, and `0` if the child is a right child, construct the binary tree and return its root.

**Algorithm :**<br/>

1. **Create Nodes and Track Children**:

    - Use a hash map to keep track of all nodes by their values.
    - Use a set to keep track of all children nodes.

2. **Construct the Tree**:

    - For each description, create the parent and child nodes if they do not already exist in the hash map.
    - Link the child node to the parent node as either the left or right child based on the `isLeft` value.

3. **Identify the Root**:

    - The root node is the only node that is not anyone's child.
    - Iterate through the descriptions to find the parent node that is not in the set of children.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of descriptions, since each description is processed once.

-   Space-Complexity: `O(n)` - for the hash map and the set used to store nodes and children.