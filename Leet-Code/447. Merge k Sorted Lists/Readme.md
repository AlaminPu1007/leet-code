## 23. Merge k Sorted Lists

This problem involved about, you are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it. <br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/merge-k-sorted-lists/description/)

**Approach (Using priority-queue) :**<br/>

1. Create a dummy node to maintain the merged list and a tail pointer to track the last node of the merged list.
2. Use a min heap (priority queue) to store pairs of (node value, node pointer) from the heads of all lists. The min heap will ensure that the smallest value node is always at the top.
3. Initialize the min heap with the heads of all lists.
4. While the min heap is not empty:
    - Pop the top element (smallest value node) from the min heap.
    - If the popped node has a next pointer, push the next node into the min heap.
    - Append the popped node to the merged list using the tail pointer.
5. Return the next node of the dummy node, which represents the head of the merged list.

**Complexity Analysis (Using priority-queue) :**<br/>

-   Time-Complexity: `O(n * log(k))` - The time complexity of building the initial heap is `O(k log k)`, and each of the `n` nodes is inserted and extracted once from the heap, resulting in a time complexity of `O(n log k)` for the merge operation.

-   Space-Complexity: `O(n)` - we are using extra priority queue data structures
