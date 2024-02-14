## 297. Serialize and Deserialize Binary Tree

This problem involved about, serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment. <br/>

Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/)

**Approach :**<br/>

1. Initialization:

    - The `Codec` class provides two methods: `serialize` and `deserialize`, which are used to convert a binary tree to a string representation and vice versa.

2. Algorithm (`serialize`):

    - The `serialize` method takes a `TreeNode` pointer `root` as input.
    - Initialize an empty string `str`.
    - Use a queue to perform a level-order traversal of the binary tree.
    - Enqueue the root node.
    - While the queue is not empty:
        - Dequeue a node.
        - If the node is `NULL`, append `#` to the string.
        - If the node is not `NULL`, append its value followed by `,` to the string.
        - Enqueue the left and right children of the node (even if they are `NULL`).
    - Return the final string representation.

3. Algorithm (`deserialize`):

    - The `deserialize` method takes a string `data` as input.
    - If the input string is empty, return `NULL`.
    - Convert the input string into a stringstream object `s`.
    - Read the first value from the stringstream and create the root node.
    - Use a queue to perform the reconstruction of the binary tree:
        - Enqueue the root node.
        - While the queue is not empty:
            - Dequeue a node.
            - Read the next value from the stringstream:
                - If the value is `#`, set the left child of the current node to `NULL`.
                - If the value is not `#`, create a new node with the value and set it as the left child of the current node. Enqueue the new node.
            - Read the next value from the stringstream:
                - If the value is `#`, set the right child of the current node to `NULL`.
                - If the value is not `#`, create a new node with the value and set it as the right child of the current node. Enqueue the new node.
    - Return the root of the reconstructed binary tree.

4. Result:
    - The `Codec` class allows serialization and deserialization of binary trees.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N)`, where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(N)`, space for the queue and string.
