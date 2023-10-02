## 21. Merge Two Sorted Lists

This problem involved about, You are given the heads of two sorted linked lists list1 and list2.Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/merge-two-sorted-lists/description/)

**Approach :**<br/>

1. Create a dummyNode and a temp pointer, both initially pointing to NULL. The dummyNode will be used to keep track of the merged list's head, and the temp pointer will help in building the merged list.
2. Use a while loop to iterate while both list1 and list2 are not empty:
    1. Compare the values of the current nodes in list1 and list2.
    2. If the value in list1 is less than the value in list2, attach the current node from list1 to the merged list by setting temp->next to list1. Advance list1 to the next node.
    3. Otherwise, if the value in list2 is less than or equal to the value in list1, attach the current node from list2 to the merged list by setting temp->next to list2. Advance list2 to the next node.
    4. Move the temp pointer to the newly attache
3. fter the loop, at least one of list1 or list2 has been fully processed. If list1 is not empty, attach the remaining part of list1 to the merged list by setting temp->next to list1. If list2 is not empty, attach the remaining part of list2 to the merged list by setting temp->next to list2.
4. Return dummyNode->next as the head of the merged list.

**Complexity Analysis :**<br/>

-   Time-Complexity: ` O(min(n, m))` - This is because the number of iterations depends on the longer of the two input lists.
-   Space-Complexity: `O(n + m)`, - where n and m are the lengths of list1 and list2, respectively
