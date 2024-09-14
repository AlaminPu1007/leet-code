# 3217. Delete Nodes From Linked List Present in Array

This problem involved about, you are given an array of integers `nums` and the head of a linked list. Return the head of the modified linked list after removing all nodes from the linked list that have a value that exists in `nums`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description)

**Approach :**<br/>

-   First, we convert the vector `nums` into an unordered set `st`. This allows us to efficiently check whether a node's value is in `nums` in O(1) time on average.

-   The algorithm starts by checking if the head node needs to be removed. If the head's value exists in the set, we update the head to the next node and delete the current head. This process continues until the head has a value not in the set or until the list becomes empty.

-   After the head is validated, the function iterates through the rest of the list. For each node, it checks the next node:
    1.  If the next node's value is in the set, that node is removed by updating the current node's `next` pointer to skip it.
    2.  If the value is not in the set, the function moves to the next node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m + n)` - where `m` is the size of the `nums` vector and `n` is the number of nodes in the list.
-   Space-Complexity: `O(m)` - where `m` is the size of `nums`
