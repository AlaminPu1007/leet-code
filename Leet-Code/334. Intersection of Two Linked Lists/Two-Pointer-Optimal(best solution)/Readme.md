## 160. Intersection of Two Linked Lists

This problem involved about, Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/intersection-of-two-linked-lists/description/)

**Approach :**<br/>

-   Check if either headA or headB is NULL. If either of them is NULL, there can be no intersection, so return NULL.
-   Initialize two pointers, A and B, and set them to the heads of headA and headB, respectively.
-   Use a while loop to iterate until A and B are the same (i.e., they point to the same node).
-   In each iteration of the loop, move A and B one step forward. If A reaches the end of headA, reset it to the head of headB. Similarly, if B reaches the end of headB, reset it to the head of headA.
-   When A and B become equal, you have found the intersection point. Return either A or B as the result.
-   If you reach the end of both lists without finding an intersection, return NULL to indicate no intersection exists.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2m)`
-   Space-Complexity: `O(1)`
