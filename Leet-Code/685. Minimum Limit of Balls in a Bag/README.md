# 1760. Minimum Limit of Balls in a Bag

This problem involved about, you are given an integer array `nums` where the ith bag contains `nums[i]` balls. You are also given an integer maxOperations.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/description)

**Approach :**<br/>

1. `Define the Search Range`:

    - The smallest possible value for the maximum ball size is `2` (since splitting a bag requires at least 2 balls).
    - The largest possible value is the maximum number of balls in the input array (`maxNum`).

2. `Binary Search`:

    - Use binary search to determine the minimum possible value of `max_ball` that satisfies the constraints.
    - For each `mid` in the binary search range, check if the number of operations required to ensure no bag has more than `mid` balls is within `maxOperations`.

3. `Helper Function`:
    - Use a helper function `can_divided` to calculate the number of operations needed for a given `max_ball` value:
        1. For each bag, compute the number of splits required:
        2. Return `true` if the total splits are within `maxOperations`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - For each operation we perform a binary search.
-   Space-Complexity: `O(1)` - Constant extra space is used.
