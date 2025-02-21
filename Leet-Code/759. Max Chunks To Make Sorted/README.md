# 769. Max Chunks To Make Sorted

This problem involved about, you are given an integer array arr of length n that represents a permutation of the integers in the range `[0, n - 1]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/max-chunks-to-make-sorted/description)

**Approach :**<br/>

1. `Initialization`:

    - Set a counter `res` to 0 to keep track of the number of chunks.
    - Initialize `cur_max` to `-1` to store the maximum element seen so far.

2. `Iterate Through the Array`:

    - For each index `i` in the array:
        - Update `cur_max` to the maximum of its current value and `arr[i]`.
        - If `cur_max` equals the current index `i`, it indicates all elements up to this point can form a sorted chunk. Increment `res`.

3. `Return Result`:

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - `n` is the size of the array
-   Space-Complexity: `O(1)` - as only a few variables are used for computation.
