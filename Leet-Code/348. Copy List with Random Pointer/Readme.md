## 138. Copy List with Random Pointer

This problem involved about, a linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/copy-list-with-random-pointer/description/)

**Approach :**<br/>

1. Initialize a pointer 'pseudoHead' to the head of the original linked list.
2. First Round:
    - Iterate through the original list using 'pseudoHead'.
    - For each node in the original list, create a new node with the same value and set it as the 'next' of the current node.
    - Move 'pseudoHead' to the original node's 'next'.
3. Second Round:
    - Reset 'pseudoHead' to the head of the original list.
    - Iterate through the original list using 'pseudoHead'.
    - If the original node has a 'random' pointer, set the 'random' pointer of the duplicate node to the 'next' node of the original node's 'random' node.
    - Move 'pseudoHead' to the next original node (skip the duplicates).
4. Third Round:
    - Reset 'pseudoHead' to the head of the original list.
    - Initialize a new node 'newHead' and a copy pointer 'copy' to it.
    - Iterate through the original list using 'pseudoHead'.
    - Update the 'next' pointers of the original list to restore its original state.
    - Set the 'next' pointer of the 'copy' node to the duplicate nodes created in the first round.
    - Move 'copy' and 'pseudoHead' to their respective next nodes.
5. Return the 'next' of 'newHead,' which will be the head of the duplicate linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the original linked list. We visit each node once during the three rounds of traversal.
-   Space-Complexity:`O(1)` - We use a constant amount of additional space to store pointers and variables, regardless of the size of the input linked list.
