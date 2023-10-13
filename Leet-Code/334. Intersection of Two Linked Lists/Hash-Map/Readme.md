## 160. Intersection of Two Linked Lists

This problem involved about, Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/intersection-of-two-linked-lists/description/)

**Approach :**<br/>

-   Traverse the first linked list (headA) and create an unordered map (Map) where the keys are the addresses (pointers) of the nodes in headA, and the values are set to true.
-   Next, traverse the second linked list (headB). For each node in headB, check if its address is present in the Map. If it is, return that node as the intersection point.
-   If you complete the traversal of headB without finding an intersection, return NULL to indicate that there is no intersection.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - iterate over the list one and store each references into map.
-   Space-Complexity: `O(n)` - we are not using an hash-map that has `O(n)` space complexity
