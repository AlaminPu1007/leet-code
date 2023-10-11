## 141. Linked List Cycle

Given head, the head of a linked list, determine if the linked list has a cycle in it.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/linked-list-cycle/description/)

**Approach :**<br/>

-   Initialize a map data-structure to keep track the node appears before
-   if it's then return true
-   return false

**Approach-2 :**<br/>

1. Check for Base Cases:
    - The function starts by checking if the given head pointer is NULL or if the linked list has only one node (i.e., head->next == NULL). If either of these conditions is met, it immediately returns false because a single node or an empty list cannot form a cycle.
2. Initialize Two Pointers:
    - Two pointers, slow and fast, are initialized to point to the head of the linked list. These two pointers will traverse the list at different speeds, with slow moving one step at a time and fast moving two steps at a time.
3. Traverse the Linked List:
    - Inside a while loop, the code continues to traverse the linked list using the two pointers.
    - The loop condition while (fast != NULL && fast->next != NULL && fast->next->next) ensures that the loop will terminate when either fast reaches the end of the list or fast encounters a NULL reference (in case of an odd number of nodes, fast->next->next ensures that fast can move two steps without encountering a NULL reference).
    - In each iteration of the loop, the slow pointer advances by one node (i.e., slow = slow->next), and the fast pointer advances by two nodes (i.e., fast = fast->next->next).
4. Detect a Cycle:
    - At each step of the traversal, the code checks if the slow pointer is equal to the fast pointer (i.e., if (slow == fast)). If they are equal, it means that the two pointers have met within the linked list, indicating the presence of a cycle.
    - If a cycle is detected, the function immediately returns true.
5. Exit the Loop:
    - If the loop completes without detecting a cycle, it means that the fast pointer has reached the end of the linked list (i.e., fast == NULL or fast->next == NULL). In this case, the function returns false because there is no cycle in the linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the list, that has `O(n)` times complexity
-   Space-Complexity: `O(n)` - we are using an additional hash-map to store node of list

**Complexity Analysis of approach-2 :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the list, that has `O(n)` times complexity
-   Space-Complexity: `O(1)`
