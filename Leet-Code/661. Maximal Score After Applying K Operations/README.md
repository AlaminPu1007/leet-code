# 2530. Maximal Score After Applying K Operations

This problem involved about, you are given a 0-indexed integer array `nums` and an integer k. You have a starting score of 0.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/)

**Approach :**<br/>

This problem can be efficiently solved using a `max-heap` (priority queue):

-   `Max-Heap (Priority Queue)`: We use a max-heap to keep track of the largest element efficiently. Each time we select the maximum element, we:
    1. Add it to the result.
    2. Remove it from the heap.
    3. Insert the value obtained by dividing it by 3 and rounding up (using `ceil()`).

**Algorithm :**<br/>

1. `Initialize a max-heap`: Insert all elements of `nums` into the heap.
2. `Process the largest `k` elements`:
    - While there are elements left in the heap and `k` iterations remain:
        1. Extract the maximum element from the heap.
        2. Add this element to the result sum `res`.
        3. Push the value of the element divided by 3 (rounded up) back into the heap.
3. After `k` iterations, return the sum `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n)) + O(k * log(n))` - where `n` is the size of the input array `nums` and `k` is the number of iterations. Each iteration involves a heap operation (insertion and extraction), which takes `O(log(n))` time.
-   Space-Complexity: `O(n)` - where `n` is the number of elements in the array `nums` since all elements are stored in the heap.