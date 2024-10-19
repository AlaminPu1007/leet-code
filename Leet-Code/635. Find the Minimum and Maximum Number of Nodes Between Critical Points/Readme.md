# 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

This problem involved about, a critical point in a linked list is defined as either a local maxima or a local minima. <br/>
A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/)

**Approach :**<br/>

1. **Identify Critical Points**:
    - A critical point in a linked list is a node that is either a local minimum or maximum.
    - A node `cur` is a critical point if:
        - `prv->val > cur->val < next->val` (local minimum)
        - `prv->val < cur->val > next->val` (local maximum)
2. **Initialization**:

    - Initialize `i` to 1, representing the index of the current node.
    - Initialize `first_critical_idx` and `previous_critical_idx` to 0.
    - Initialize `max_critical_idx` to -1 and `min_critical_idx` to `INT_MAX`.

3. **Traverse the Linked List**:

    - Use three pointers: `prv`, `cur`, and `next` to iterate through the list.
    - For each node, check if it is a critical point using the `isCriticalIdx` function.
    - Update `first_critical_idx`, `previous_critical_idx`, `max_critical_idx`, and `min_critical_idx` accordingly.

4. **Calculate Distances**:
    - If no critical points are found or only one critical point is found, set `min_critical_idx` to -1.
    - Return the minimum and maximum distances.

**Algorithm :**<br/>

1. **Helper Function**:

    - `isCriticalIdx(ListNode *prv, ListNode *cur, ListNode *next)`:
        - Returns `true` if `cur` is a critical point, otherwise `false`.

2. **Main Function**:
    - `nodesBetweenCriticalPoints(ListNode *head)`:
        - Traverse the linked list and identify critical points.
        - Calculate and return the minimum and maximum distances between critical points.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the linked list. This is due to the single traversal of the linked list.

-   Space-Complexity: `O(1)` - since no additional space proportional to the input size is used.
