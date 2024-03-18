## 622. Design Circular Queue

This problem involved about, design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/design-circular-queue/description/)

**Approach :**<br/>

# Enqueue (enQueue)

1. Check if the circular queue is full.
2. Create a new node with the given value.
3. Update pointers to insert the new node at the rear of the queue:
    - Set the new node's next pointer to the rear sentinel node (right).
    - Set the new node's prev pointer to the previous rear node (right->prev).
    - Update pointers of adjacent nodes to connect the new node properly.
4. Decrease the available space in the circular queue.

# Dequeue (deQueue)

1. Check if the circular queue is empty.
2. Update pointers to remove the front node from the queue:
    - Set the front sentinel node's next pointer to skip the node to be removed (left->next = left->next->next).
    - Update the removed node's next node's prev pointer to the front sentinel node (left).
3. Increase the available space in the circular queue.
   **Front (Front) and Rear (Rear) :**<br/>

    - Return the values of the elements at the front and rear of the circular queue by accessing the appropriate nodes.

        **Is Empty (isEmpty) and Is Full (isFull) :**<br/>

    - Check if the circular queue is empty or full based on conditions such as sentinel node positions and available space.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` 
-   Space-Complexity: `O(n)` - where n is the specified size of the queue.
