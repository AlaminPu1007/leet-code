## 155. Min Stack

This problem involved about, Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/min-stack/description/)

**Approach :**<br/>

1. Implement a stack `st` to store the values.
2. Implement another stack `minSt` to keep track of the minimum value encountered so far.
3. When pushing a new value `val` onto the stack:
    - Push `val` onto the `st`.
    - If `minSt` is not empty, compare `val` with the current minimum value stored in `minSt`.
        - If `val` is smaller, push `val` onto `minSt`.
        - If `val` is larger or equal, push the current minimum value again onto `minSt`.
    - If `minSt` is empty, push `val` onto `minSt`.
4. When popping a value from the stack:
    - Pop from both `st` and `minSt`.
5. For retrieving the top element of the stack, return the top element of `st`.
6. For retrieving the minimum value of the stack, return the top element of `minSt`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - For every method required `O(1)` time complexity
-   Time-Complexity: `O(n)` - For stack
