## 328. Odd Even Linked List

This problem involved about, given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.<br/>

The first node is considered odd, and the second node is even, and so on.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/odd-even-linked-list/description/)

**Approach :**<br/>

1. Initialize two pointers `even` and `odd` to the first and second nodes of the linked list, respectively. Also, keep a reference to the starting node of the odd indices (`odd_start`).
2. Traverse the linked list, moving `even` and `odd` pointers alternately:
    - Update the `next` pointer of the current `even` node to skip the next node (which is an odd index).
    - Update the `next` pointer of the current `odd` node to skip the next node (which is an even index).
    - Move the `even` and `odd` pointers to their respective next nodes.
3. Once traversal is complete, connect the last even-indexed node to the starting node of the odd indices (`odd_start`).
4. Return the modified head of the linked list.

<br/>

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm traverses the entire linked list once
-   Space-Complexity: `O(1)` - The algorithm uses only a constant amount of extra space
