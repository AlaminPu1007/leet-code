## 147. Insertion Sort List

This problem involved about, given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/insertion-sort-list/description/)

**Approach :**<br/>

1. Create a dummyNode with a value of 0 and set it as the head of the sorted linked list.
2. Initialize a pointer cur to the head of the original linked list.
3. Iterate through the original linked list until cur reaches the end.
    - Save the next node of cur in nextNode.
    - Initialize a temporary pointer tempNode to the dummyNode.
    - Traverse the sorted portion of the list using a while loop:
        1. Move tempNode until its next node is null or its next node's value is greater than or equal to the current node's value (cur->val).
    - Insert the current node (cur) into the sorted portion:
        1. Update the next pointer of the current node (cur->next) to point to the next node of tempNode.
        2. Update the next pointer of tempNode to point to the current node
    - Move cur to the next node (nextNode).
4. Return the next pointer of the dummyNode, which points to the head of the sorted linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - where n is the number of nodes in the linked list. This is because, in the worst case, for each node in the original linked list, the algorithm may need to traverse the sorted portion of the list.
-   Space-Complexity: `O(1)` - as the algorithm uses a constant amount of extra space regardless of the input size.
