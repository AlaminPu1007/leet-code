## 143. Reorder List

This problem involved about, you are given the head of a singly linked-list. The list can be represented as: <br/>
`L0 → L1 → … → Ln - 1 → Ln`
Reorder the list.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/reorder-list/description/)

**Approach :**<br/>

1. Initialize two pointers, slow and fast, to the head of the linked list.

2. Move slow one step at a time and fast two steps at a time until fast reaches the end.
   This ensures that slow is pointing to the middle of the linked list.

3. Reverse the second half of the linked list starting from slow->next.

4. Merge the first half and the reversed second half:
    - Initialize two pointers, first and reverseList, to the head.
    - While reverseList is not NULL:
        1. Save the next nodes of first and reverseList as temp1 and temp2.
        2. Update the next pointers: first->next = reverseList and reverseList->next = temp1.
        3. Move first to temp1 and reverseList to temp2.
5. Set the next pointer of the last node in the reordered list to NULL.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) + O(n)`
-   Get middle of the list have `O(n)` times required, then reverse of the end or right portion of the list also has `O(n)` times complexity & finally merge to get original list has `O(n)` times complexity

-   Space-Complexity: `O(1)` - we are not using any kind of additional extra spaces
