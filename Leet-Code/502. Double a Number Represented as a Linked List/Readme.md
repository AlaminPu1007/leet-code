---
runme:
  id: 01HX8GX9QGK9CXVAP193ZWXKTH
  version: v3
---

## 2816. Double a Number Represented as a Linked List

This problem involved about, you are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.
Return the head of the linked list after doubling it.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/)

**Approach Recursion :**<br/>

1. Perform a depth-first search (DFS) traversal of the linked list recursively.
2. At each node, double its value and propagate the carry to the next node.
3. If there is a carry after the traversal, insert a new node at the beginning of the linked list to accommodate the carry.
4. Return the head of the modified linked list.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - the number of nodes in the linked list
- Space-Complexity: `O(n)` - due to the recursive stack space

## Optimal Approach with constant amount of space

**Approach :**<br/>

1. Reverse the given linked list.
2. Traverse the reversed list and double each node's value while keeping track of any carry.
3. After doubling all values, reverse the list again to restore its original order.
4. If there is a carry, insert a new node at the beginning of the list to accommodate it.
5. Return the head of the modified linked list.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - `n` be the number of nodes in the linked list.
- Space-Complexity: `O(1)` - `O(1)` because the algorithm only uses a constant amount of extra space for pointers and variables.
