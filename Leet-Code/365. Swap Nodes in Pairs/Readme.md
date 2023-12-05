## 24. Swap Nodes in Pairs

This problem involved about, given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/swap-nodes-in-pairs/description/)

**Approach :**<br/>

1. `dummyNode` is a placeholder node created with a value of 0. This node helps in handling edge cases when swapping pairs at the beginning of the list.
2. prv and cur are pointers used to keep track of the nodes in the swapping process.
3. The while loop continues as long as there are at least two nodes remaining to be swapped (cur and cur->next).
4. Inside the loop:
    - nextPrt is a pointer to the node following the pair being swapped (the third node in the list).
    - second is a pointer to the second node in the pair (cur->next).
5. The nodes are swapped by adjusting the next pointers:
    - second->next is set to cur, linking the second node to the first.
    - cur->next is set to nextPrt, skipping the original second node.
6. The previous node (prv) is updated to point to the newly swapped pair.
7. prv and cur are updated to move to the next pair for the next iteration.
8. The final result is the next node after the dummyNode, which is the head of the modified linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of this algorithm is `O(n)`, where n is the number of nodes in the linked list. The algorithm processes each node once.

-   Space-Complexity: `O(1)` - The space complexity is O(1) because the algorithm uses a constant amount of extra space regardless of the size of the input linked list.
