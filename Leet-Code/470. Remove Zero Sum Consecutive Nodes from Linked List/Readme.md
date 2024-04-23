## 1171. Remove Zero Sum Consecutive Nodes from Linked List

This problem involved about, given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.<br/>

After doing so, return the head of the final linked list. You may return any such answer.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description)

**Approach :**<br/>

1. Initialize a dummy node pointing to the head of the linked list.
2. Create an unordered map `Map` to store the prefix sum and its corresponding node.
3. Insert the initial prefix sum of 0 and the dummy node into the map.
4. Traverse the linked list while updating the prefix sum:
    - Add the value of the current node to the prefix sum.
    - If the current prefix sum already exists in the map, it means there is a subarray with a sum of 0.
    - Remove the subarray by updating the `next` pointer of the node before the start of the subarray to point to the node after the end of the subarray.
    - Remove all entries in the map with prefix sums equal to or greater than the current prefix sum.
    - Otherwise, insert the current prefix sum and its corresponding node into the map.
5. Return the head of the updated linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the list once, so the time complexity is O(n).
-   Space-Complexity: `O(n)` - We are using an extra hash-map
