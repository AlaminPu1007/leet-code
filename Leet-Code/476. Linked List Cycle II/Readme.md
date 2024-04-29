---
runme:
  id: 01HW071J36YTTKZB7BRYPKD7CF
  version: v3
---

## 142. Linked List Cycle II

This problem involved about, given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.<br/>

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/linked-list-cycle-ii/description/)

**Approach :**<br/>

1. Initialize two pointers, `slow` and `fast`, both pointing to the head of the linked list.
2. Create a dummy node and set its next pointer to the head of the linked list.
3. Move the `slow` pointer one step and the `fast` pointer two steps at a time until either `fast` reaches the end of the list or `slow` and `fast` meet.
4. If `fast` becomes null or `fast->next` becomes null, there is no cycle, so return null.
5. Otherwise, reset the `slow` pointer to the head of the list and move both `slow` and `fast` pointers one step at a time until they meet again.
6. The node where they meet is the starting point of the cycle.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of the Floyd's cycle detection algorithm is `O(N)`, where N is the number of nodes in the linked list.

-   Space-Complexity: `O(1)` - The space complexity is O(1) as we are using only a constant amount of extra space.