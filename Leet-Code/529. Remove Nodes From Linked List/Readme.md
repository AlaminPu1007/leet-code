## 2487. Remove Nodes From Linked List

This problem involved about, you are given the head of a linked list. 
Remove every node which has a node with a greater value anywhere to the right side of it.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/remove-nodes-from-linked-list/description)

**Approach using monotonically decreasing stack :**

1. Initialize a dummy node to store the result.
2. Traverse the linked list `head` and use a stack to store the values in non-decreasing order.
3. Create a vector to store the values from the stack in reverse order.
4. Iterate through the vector and create a new linked list with the values.
5. Return the next of the dummy node, which contains the result.

**Complexity Analysis :**

- Time-Complexity: `O(n)` - Let N be the number of nodes in the linked list.
- Space-Complexity: `O(n)` - as we use a stack

## Before moving this solution, please ask about reversing is alow or not

**Approach for constant space :**<br/>

1. Reverse the linked list to make it easier to remove nodes.
2. Traverse the reversed list and keep track of the maximum value encountered so far.
3. If the value of the next node is less than the maximum value, remove the next node.
4. Otherwise, update the maximum value and move to the next node.
5. Finally, reverse the modified linked list again to restore the original order.

**Complexity Analysis :**

- Time-Complexity: `O(n)` - Let N be the number of nodes in the linked list.
- Space-Complexity: `O(1)` - space complexity is `O(1)` because we only use a constant amount of extra space
