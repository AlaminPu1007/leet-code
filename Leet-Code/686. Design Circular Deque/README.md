# 641. Design Circular Deque

This problem involved about, design your implementation of the circular double-ended queue (deque).<br/>
Implement the MyCircularDeque class:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/design-circular-deque/description/)

**Approach :**<br/>

#### Step 1: Node Class Definition

-   We define a `Node` class to store the value of each element, and maintain pointers to the **next** and **previous** nodes for doubly linked behavior.

#### Step 2: Maintain Head, Rear, Size, and Capacity

-   We maintain four variables:
    -   `head`: Pointer to the front node.
    -   `rear`: Pointer to the rear node.
    -   `size`: Tracks the current number of elements in the deque.
    -   `capacity`: The maximum capacity of the deque.

#### Step 3: Insertion and Deletion

-   **Insertions:**
    -   `insertFront`: Insert a new node at the front of the deque.
    -   `insertLast`: Insert a new node at the rear of the deque.
-   **Deletions:**
    -   `deleteFront`: Remove the node from the front of the deque.
    -   `deleteLast`: Remove the node from the rear of the deque.

#### Step 4: Get and Check Operations

-   `getFront`: Returns the value at the front of the deque.
-   `getRear`: Returns the value at the rear of the deque.
-   `isEmpty`: Checks whether the deque is empty.
-   `isFull`: Checks whether the deque has reached its maximum capacity.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - Because we maintain access to the front and rear elements at all times, all operations simply involve pointer manipulations that take `O(1)` time.

-   Space-Complexity: `O(k)` - In the worst case, there will be maximum k nodes in our doubly linked list, which will involve instantiating k node objects and thus take `O(k)` space.
