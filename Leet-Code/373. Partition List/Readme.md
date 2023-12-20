## 86. Partition List

This problem involved about, given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/partition-list/description/)

**Approach :**<br/>

1. Create two dummy nodes, left and right, each initialized with a value of 0.
2. Set the next pointer of the left dummy node to the head of the input linked list.
3. Create two pointers, temp1 and temp2, initially pointing to the left and right dummy nodes, respectively.
4. Traverse the original linked list (head):
    - If the value of the current node is less than x, append it to the left partition and update temp1.
    - If the value of the current node is greater than or equal to x, append it to the right partition and update temp2.
5. After the traversal, connect the left partition to the right partition.
6. Set the next pointer of temp2 to NULL to terminate the right partition.
7. Return the modified linked list starting from left->next.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the list and partition, that has `O(n)` time complexity
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces
