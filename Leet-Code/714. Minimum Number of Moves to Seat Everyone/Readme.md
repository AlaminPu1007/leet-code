# 2037. Minimum Number of Moves to Seat Everyone

This problem involved about, there are n seats and n students in a room. You are given an array seats of length n, where `seats[i]` is the position of the ith seat. You are also given the array students of length n, where `students[j]` is the position of the jth student.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/)

**Approach :**<br/>

1. Sort the `seats` array in non-decreasing order.
2. Sort the `students` array in non-decreasing order.
3. Initialize a variable `res` to store the total number of moves.
4. Iterate through the sorted arrays and for each index `i`, add the absolute difference between `seats[i]` and `students[i]` to `res`.
5. Return the value of `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting both the `seats` and `students` arrays takes `O(n log n)` time where `n` is the number of elements in the arrays.
-   Space-Complexity: `O(n)` - sorting required an extra `O(n)` space