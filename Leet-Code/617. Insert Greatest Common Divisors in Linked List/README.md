# 2807. Insert Greatest Common Divisors in Linked List

This problem involved about, given the head of a linked list head, in which each node contains an integer value.
Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

**Approach :**<br/>

1. `Initialize Pointers:`

    - Use two pointers, `cur` to keep track of the current node and `next_node` to point to the next node (`cur->next`).

2. `Traverse the List:`

    - Iterate through the linked list as long as `cur` and `cur->next` are not `NULL`.
    - For each consecutive pair of nodes, compute the greatest common divisor (GCD) of their values using the in-built `__gcd()` function.

3. `Insert the GCD Node:`

    - After computing the GCD, create a new node with the GCD value.
    - Insert this node between `cur` and `next_node`.
    - Update the pointers to continue the traversal.

4. `Return the Modified List:`
    - Once all pairs have been processed, return the head of the modified linked list.

**Algorithm :**<br/>

1. Start from the head of the linked list.
2. Use the `__gcd()` function to compute the GCD between the values of `cur` and `cur->next`.
3. Create a new node with the GCD value and insert it between the current node and the next node.
4. Continue this process for all pairs until the end of the list.
5. Return the modified linked list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of nodes in the original linked list.
-   Space-Complexity: `O(1)` - The iterative implementation of the GCD method has a space complexity of `O(1)`