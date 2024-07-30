# 1482. Minimum Number of Days to Make m Bouquets

This problem involved about, you are given an integer array bloomDay, an integer m and an integer k. <br/>

You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/)

**Approach :**<br/>

1. **Initialization:**

    - Calculate `val = m * k`. If `val` is greater than the size of `bloomDay`, return `-1` as it's impossible to make the required bouquets.
    - Find the minimum (`low`) and maximum (`high`) values in the `bloomDay` array.

2. **Binary Search:**

    - Use binary search to find the minimum number of days.
    - Set `low` to the minimum value in `bloomDay` and `high` to the maximum value in `bloomDay`.
    - While `low` is less than or equal to `high`:
        - Calculate `mid` as the average of `low` and `high`.
        - If it is possible to make `m` bouquets in `mid` days using the helper function `getMinDays`, update the answer to `mid` and set `high` to `mid - 1`.
        - Otherwise, set `low` to `mid + 1`.

3. **Helper Function:**

    - Define a function `getMinDays` that takes an array `arr`, an integer `day`, `m`, and `k`, and returns a boolean indicating whether it is possible to make `m` bouquets in `day` days.
    - Iterate through the array and count the number of consecutive flowers that can bloom in `day` days.
    - If the count reaches `k`, increment the bouquet count and reset the flower count.

4. **Return Result:**
    - Return the minimum number of days found by the binary search.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n) * n)` - where `n` is the length of the `bloomDay` array. This accounts for the binary search and the linear scan in the helper function.

-   Space-Complexity: `O(1)` - as only a few additional variables are used.
