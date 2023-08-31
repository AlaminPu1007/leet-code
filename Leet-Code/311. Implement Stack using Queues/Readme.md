## 225. Implement Stack using Queues

This problem involved about, implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/implement-stack-using-queues/description/)

**Intuition :**<br/>
Stack is LIFO (last in - first out) data structure, in which elements are added and removed from the same end, called top.
In general stack is implemented using array or linked list, but in the current article we will review a different approach for implementing stack using queues. In contrast queue is FIFO (first in - first out) data structure, in which elements are added only from the one side - rear and removed from the other - front. In order to implement stack using queues, we need to maintain two queues q1 and q2. Also we will keep top stack element in a constant memory.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - push item into queue and swap then with another queue, can have `o(n)` times complexity
-   Space-Complexity: `O(n)` - we are using an queue data structure to store no of element which is near about `O(n)`

# References

-   [Learn from leet-code official solution](https://leetcode.com/problems/implement-stack-using-queues/editorial/)
