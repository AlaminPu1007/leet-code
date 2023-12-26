## 92. Reverse Linked List II

This problem involved about, given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/reverse-linked-list-ii/description)

**Approach :**<br/>

1. Create a dummy node and set its next to the head of the linked list.
2. Traverse the list until the left - 1 position to find the node leftPrv and the current node cur.
3. Initialize a prv variable to NULL to keep track of the reversed portion.
4. Reverse the sub-list from position left to position right by iterating through (right - left + 1) nodes.
    - Save the next node in a temporary variable (tempNode).
    - Update the next pointer of the current node to point to the previous node (prv).
    - Move prv to the current node and cur to the next node (tempNode).
5. Connect the reversed sub-list back into the original list.
    - The next pointer of the node at position left - 1 (leftPrv->next) should point to the last node of the reversed sub-list (prv).
    - The next pointer of the node at position left should point to the node immediately after the reversed sub-list (cur).
6. Return the next pointer of the dummy node, which now points to the head of the modified linked list.

**Complexity :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the linked list. This is because we traverse the linked list only once.
-   Space-Complexity: `O(1)` - as the algorithm uses a constant amount of extra space regardless of the input size.
