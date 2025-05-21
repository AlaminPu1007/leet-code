# 2594. Minimum Time to Repair Cars

This problem involved about, you are given an integer array ranks representing the ranks of some mechanics. `ranksi` is the rank of the ith mechanic. A mechanic with a rank r can repair n cars in `r * n2` minutes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-time-to-repair-cars/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array `ranks`, where `ranks[i]` represents the rank of the `i-th` mechanic.
    - A mechanic with rank `r` can repair one car in `r * n^2` minutes, where `n` is the number of cars they repair.
    - The goal is to determine the `minimum time` required for all mechanics to repair a total of `cars` cars.

2. `Algorithm`:

    - Use `binary search` to find the minimum time required.
    - Define a search range for the time: `low = 1` and `high = ranks[0] * cars * cars` (the worst-case scenario).
    - For each midpoint `mid` in the search range, calculate the total number of cars that can be repaired in `mid` minutes using the `count_cars` function.
    - If the total number of cars repaired is greater than or equal to `cars`, update the result and search for a smaller time.
    - Otherwise, search for a larger time.

3. `Steps`:
    - Initialize `low` to `1` and `high` to `ranks[0] * cars * cars`.
    - Perform binary search:
        - Calculate `mid = (low + high) / 2`.
        - Use the `count_cars` function to compute the total number of cars that can be repaired in `mid` minutes.
        - If the number of cars repaired is sufficient, update the result and search the left half.
        - Otherwise, search the right half.
    - Return the minimum time found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - where `n` is the number of mechanics and `m` is the maximum possible time (`ranks[0] * cars * cars`).
-   Space-Complexity: `O(1)` - as only a few variables are used.
