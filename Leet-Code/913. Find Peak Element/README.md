# 162. Find Peak Element

This problem involved about, a peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-peak-element/description/)

**Key Insights :**<br/>

1. `Binary Search`: The problem can be efficiently solved using binary search due to the sorted-like property where any element greater than its right neighbor indicates a peak to the left, and vice versa.
2. `Boundary Checks`: Special handling is required for the first and last elements since they have only one neighbor.
3. `Early Termination`: The search can terminate as soon as a peak is found.

**Algorithm Steps :**<br/>

1. `Initial Checks`:
    - If the array has only one element, return 0 as it's trivially a peak.
    - Check if the first or last element is a peak.
2. `Binary Search`:
    - Calculate mid index.
    - Check if mid element is a peak.
    - If not, move towards the side with the higher neighbor.
3. `Return Peak`: Once a peak is found, return its index.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - where n is the number of elements in the array.
-   Space-Complexity: `O(1)` - constant time operations.
