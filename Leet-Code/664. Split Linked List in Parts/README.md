# 725. Split Linked List in Parts

This problem involved about, given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts. <br/>

The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/split-linked-list-in-parts/description)

**Approach :**<br/>

1. `Calculate the Length of the Linked List:`

    - Traverse through the entire linked list to calculate its length `len`.

2. `Determine the Number of Nodes in Each Part:`

    - Compute two values:
        1. `eachBucketNodes = len / k`: the base number of nodes each part will have.
        2. `extra_nodes = len % k`: the number of parts that should receive an extra node.

3. `Split the List:`

    - Traverse the linked list again and split it into `k` parts. For the first `extra_nodes` parts, allocate `eachBucketNodes + 1` nodes, and for the remaining parts, allocate `eachBucketNodes` nodes.
    - For each part, detach the end of the list by setting the `next` pointer of the last node in the part to `NULL`.

4. `Return the Result:`
    - Return a vector of `ListNode*` pointers representing the heads of each part. If there are fewer nodes than `k`, the remaining parts should contain `NULL`.

**Algorithm :**<br/>

1. Compute the length of the linked list.
2. Calculate the number of nodes each part should contain (`eachBucketNodes` and `extra_nodes`).
3. Traverse the list again, splitting it into parts by adjusting the `next` pointers and assigning the heads to the result array.
4. If the number of nodes is less than `k`, add `NULL` parts as needed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We traverse the entire linked list head twice, where each time takes `O(N)` time. Thus, the total time complexity is `O(N)`.
-   Space-Complexity: `O(k)` - The additional space is required to store the result array of `k` parts