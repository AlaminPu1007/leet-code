# 1381. Design a Stack With Increment Operation

This problem involved about, design a stack that supports increment operations on its elements.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/design-a-stack-with-increment-operation/description/)

**Approach :**<br/>

#### Push Operation

-   Check if the stack has space to accommodate a new element. If the stack is not full, push the new element to the top.
-   `Condition`: The stack's maximum size is determined when initialized, and the new element can only be pushed if the current number of elements is less than this maximum size.

#### Pop Operation

-   Check if the stack has any elements. If it is not empty, pop the top element and return it.
-   If the stack is empty, return `-1`.

#### Increment Operation

-   Increment the bottom `k` elements of the stack by a specified value.
-   Only the minimum of `k` and the current number of elements in the stack is incremented to avoid accessing elements outside of the stack's current size.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k)` - The increment method iterates over k elements in the worst case, thus having a `O(k)` time complexity.
-   Space-Complexity : `O(n)` - where `maxSize` is the capacity of the stack. This is because the stack is initialized with a fixed maximum size and the space required is directly proportional to this value.