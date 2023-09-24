## 19. Remove Nth Node From End of List

This problem involved about, given the head of a linked list, remove the nth node from the end of the list and return its head.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)

**Approach :**<br/>

1. Create a dummy node and set its next pointer to point to the head of the linked list. This dummy node helps handle the case where the head node needs to be removed.
2. Initialize two pointers, r and l, both initially pointing to the dummy node. r will be advanced by n positions ahead of l.
3. Move the r pointer n positions ahead by iterating through the list using a for loop.
4. After moving r n positions ahead, both r and l are advanced one node at a time until r reaches the end of the list. At this point, l will be pointing to the node just before the node to be removed.
5. Update the next pointer of l to skip the node to be removed and point to the node after it, effectively removing the target node from the list.
6. Delete the removed node to free up the memory it occupies.
7. Return the next pointer of the dummy node as the new head of the modified list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Traverse list node can cause `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any kind of additional spaces except constant spaces.The space complexity is O(1) because the algorithm uses a constant amount of extra space, regardless of the size of the input list. It creates only a few pointers (dummyNode, r, l, and temp) to navigate and modify the list, and these pointers occupy constant space.
