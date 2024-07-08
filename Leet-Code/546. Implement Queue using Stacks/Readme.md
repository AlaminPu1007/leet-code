## 232. Implement Queue using Stacks

This problem involved about, implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

# Problem description

For better problem solution, please visit [LeetCode Pages](https://leetcode.com/problems/implement-queue-using-stacks/description/)

**Approach :**<br/>

The given code implements a queue using two stacks (`st1` and `st2`). The `push` operation is implemented by transferring all elements from `st1` to `st2`, pushing the new element onto `st1`, and then transferring elements back from `st2` to `st1`. This ensures that the oldest element is always at the top of `st1`. The `pop` operation simply involves popping the top element from `st1`. The `peek` operation returns the top element of `st1`, and the `empty` operation checks if `st1` is empty.

-   **Push Operation:**

    1. While `st1` is not empty, pop elements from `st1` and push them onto `st2`.
    2. Push the new element onto `st1`.
    3. While `st2` is not empty, pop elements from `st2` and push them back onto `st1`.

-   **Pop Operation:**

    1. Pop the top element from `st1` and return its value.

-   **Peek Operation:**

    1. Return the top element of `st1` without popping it.

-   **Empty Operation:**
    1. Return true if `st1` is empty, otherwise false.

**Complexity Analysis :**<br/>

-   Time Complexity:

    1. Push Operation: `O(n)` where n is the number of elements in the queue.
    2. Pop Operation: `O(1)`
    3. Peek Operation: `O(1)`
    4. Empty Operation: `O(1)`

-   Space Complexity: `O(n)`- The space complexity is O(n) where n is the number of elements in the queue, as both `st1` and `st2` may contain all the elements of the queue.
