## 160. Intersection of Two Linked Lists

This problem involved about, Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/intersection-of-two-linked-lists/description/)

**Approach :**<br/>

-   Iterate over the second list, and check for each item with all element of `headA` or first list
-   if any of them `address` has same then return it

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - for each item of `n` we iterate over `m` times that has `O(n*m)` times complexity
-   Space-Complexity: `O(1)` - we are not using any kind of additional spaces
