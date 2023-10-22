## 25. Reverse Nodes in k-Group

This problem involved about, Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/reverse-nodes-in-k-group/description/)

**Approach :**<br/>

1. Create a dummy node and set its next to the head of the linked list. This dummy node helps in handling the case where the initial list might not contain k elements.

2. Initialize prv, curNode, and nextNode to the dummy node.

3. Count the total number of nodes in the linked list.

4. While there are at least k nodes remaining:

    - Reverse the k nodes by iteratively swapping the pointers.
    - Move prv and curNode to their new positions.
    - Decrement the count by k.

5. Return the updated linked list starting from the dummy node's next.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the number of nodes in the linked list. In the worst case, you may have to traverse all the nodes once (to count them), and then reverse k-group segments within the list.

-   Space-Complexity: `O(1)`
