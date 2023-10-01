## 876. Middle of the Linked List

This problem involved about, given the head of a singly linked list, return the middle node of the linked list.<br/>
If there are two middle nodes, return the second middle node.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/middle-of-the-linked-list/description/)

**Approach :**<br/>

-   Initialize two pointers, slow and fast, both initially pointing to the head of the linked list.
-   Enter a loop that continues as long as both first and first->next are not NULL. The use of first->next ensures that you move first two steps at a time, while slow moves one step at a time.
-   In each iteration of the loop, move slow one step forward by updating slow = slow->next.
-   Also, move fast two steps forward by updating first = first->next->next.
-   This process effectively doubles the speed of fast compared to slow. As fast moves twice as fast, when fast reaches the end of the list (i.e., first becomes NULL or first->next becomes NULL), slow will be at the middle node.
-   Once the loop exits, slow will be pointing to the middle node of the list.
-   Finally, return the address of the middle node (slow).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n/2) = O(n)` - Since our first pointer moved twice where slow once
-   Space-Complexity: `O(1)` - This is two pointer approach, we are not using any kind of additional space that grows with input size, except constant
