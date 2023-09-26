## 206. Reverse Linked List

This problem involved about, given the head of a singly linked list, reverse the list, and return the reversed list.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/reverse-linked-list/description/)

**Approach :**<br/>
The reverseList method within the Solution class is used to reverse a singly linked list. It employs an iterative approach, where it maintains three pointers:<br/>

1. prvNode: This pointer is used to keep track of the previously reversed portion of the list. It initially points to NULL as there is no reversed portion at the beginning.
2. head: This pointer is used to traverse the original list. It starts at the head of the original list and iterates through it.
3. newNode: This pointer is used to temporarily store the next node in the original list before we modify the head->next pointer to reverse the list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we traverse whole node and update their pointer, that would be cost of `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any kind of additional extra spaces except single node. The space complexity for reversing the linked list is` O(1)` because it uses a constant amount of extra space regardless of the size of the input list. The extra space is used for the three pointers (prvNode, head, and newNode), which do not depend on the size of the list.
