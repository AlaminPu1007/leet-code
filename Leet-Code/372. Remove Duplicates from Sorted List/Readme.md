## 26. Remove Duplicates from Sorted Array

This problem involved about, given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Approach :**<br/>

1. Initialize a pointer cur to the head of the linked list.
2. Traverse the linked list using a while loop until cur reaches the end (NULL).
3. Inside the outer loop:
    - Use an inner while loop to skip over duplicate values.
    - Update the next pointer of the current node (cur->next) to point to the next non-duplicate node.
4. Move the cur pointer to the next unique node.
5. Return the modified head of the linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the number of nodes in the linked list. In the worst case, every node needs to be visited once.
-   Space-Complexity: `O(1)` - the algorithm uses a constant amount of extra space regardless of the input size
