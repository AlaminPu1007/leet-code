# 2181. Merge Nodes in Between Zeros

This problem involved about, you are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/merge-nodes-in-between-zeros/description/)

**Approach :**<br/>

The goal is to merge nodes between zeros in a linked list. Given a linked list where each node contains an integer value, we need to sum the values between two zeros and replace the section between the two zeros with a single node containing the sum.

**Algorithm :**<br/>

1. Initialize a dummy node to help with building the resulting list.
2. Traverse the list from the first node after the initial zero.
3. Accumulate the sum of node values until encountering a zero.
4. Upon encountering a zero, create a new node with the accumulated sum and attach it to the result list.
5. Reset the sum and continue the traversal.
6. Return the next node of the dummy node as the head of the new list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the linked list. This is because we traverse each node once.

-   Space-Complexity: `O(n)` - for the new list being created.