## 160. Intersection of Two Linked Lists

This problem involved about, Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/intersection-of-two-linked-lists/description/)

**Approach :**<br/>

-   Initialize two counters, counter1 and counter2, to count the number of nodes in headA and headB, respectively.
-   Create two dummy pointers, dummyNodeA and dummyNodeB, and set them to the heads of headA and headB.
-   Traverse dummyNodeA and dummyNodeB while counting nodes in both linked lists.
-   Calculate the absolute difference diff between counter1 and counter2. This difference represents the number of nodes by which one of the pointers should be advanced to make them start from the same relative position.
-   Reset dummyNodeA and dummyNodeB to the heads of headA and headB.
-   If counter1 is greater than counter2, advance dummyNodeA by diff nodes. If counter2 is greater, advance dummyNodeB by diff nodes.
-   Now, both dummyNodeA and dummyNodeB start from the same relative position in their respective linked lists.
-   Traverse both dummyNodeA and dummyNodeB simultaneously. When they meet at the same node (the intersection point), return that node.
-   If they reach the end of both lists without finding an intersection, return NULL to indicate no intersection exists.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - The code performs two traversals of both linked lists, which take `O(m + n)` time, where m and n are the lengths of the two linked lists.
-   Space-Complexity: `O(1)`
