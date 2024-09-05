# 1552. Magnetic Force Between Two Balls

This problem involved about, in the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/magnetic-force-between-two-balls/description/)

**Approach :**<br/>

1. **Initialization:**

    - Sort the `position` array.
    - Set `low` to `1` and `high` to the difference between the maximum and minimum positions (`position[n-1] - position[0]`).

2. **Binary Search:**

    - While `low` is less than or equal to `high`:
        - Calculate `mid` as the average of `low` and `high`.
        - Use the helper function `isValidDistance` to check if it is possible to place `m` balls with a minimum distance of `mid`.
        - If `isValidDistance` returns `true`, update the result and set `low` to `mid + 1` to try for a larger distance.
        - If `isValidDistance` returns `false`, set `high` to `mid - 1` to try for a smaller distance.

3. **Helper Function:**

    - Define `isValidDistance` to iterate through the `position` array and count how many balls can be placed with at least `dis` distance between them.

4. **Return Result:**
    - Return the maximum distance found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(maxDistance))` - iterations, each involving a linear scan of the positions `O(n)`, resulting in `O(n log(maxDistance))` for the binary search.
-   Space-Complexity: `O(1)` - as only a few additional variables are used
