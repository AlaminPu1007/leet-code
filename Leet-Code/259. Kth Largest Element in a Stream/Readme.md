## 703. Kth Largest Element in a Stream

This problem about find the `kth` largest element in a stream

# Problem Description

Find for a betterFor a detailed problem description, please visit the [LeetCode Page](https://leetcode.com/problems/kth-largest-element-in-a-stream/description/)

**Approach :**<br/>

-   Initialize the class with the value of k and an empty data structure to store the k largest elements encountered so far.
-   When adding a new element to the stream, check if the size of the data structure is less than k.
-   If it is less than k, simply add the new element to the data structure.
-   If it is equal to k, compare the new element with the smallest element in the data structure.
-   If the new element is larger, remove the smallest element and add the new element.
-   If the new element is smaller, do not add it to the data structure.
-   Return the smallest element in the data structure, which represents the kth largest element in the stream.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N log K)` - iterates over each element in the `nums` has ` O(N)` and the add function has a time complexity of `O(log K)`
-   Space-Complexity: `O(k)` - O(K) because the priority queue stores at most K elements
