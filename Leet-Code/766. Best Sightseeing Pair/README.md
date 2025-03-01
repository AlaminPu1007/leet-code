# 1014. Best Sightseeing Pair

This problem is involved, you are given an integer array values where `values[i]` represents the value of the ith sightseeing spot. Two sightseeing spots `i and j` have a distance `j - i` between them.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/best-sightseeing-pair/description)

**Approach :**<br/>

1. `Initialization`:

    - Start with the first component (`values[0] + 0`) as `first`.
    - Initialize the result `res` to `0`.

2. `Iterate Over Values`:

    - For each index `i` (starting from 1):
        - Compute the second component as `values[i] - i`.
        - Calculate the score as the sum of the current `first` and `second`.
        - Update the result `res` with the maximum score found so far.
        - Update `first` to the maximum value of `values[i] + i` encountered so far.

3. `Return Result`:
    - Return the maximum score stored in `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm traverses the array once
-   Space-Complexity: `O(1)` - Only a few variables are used for computation.
