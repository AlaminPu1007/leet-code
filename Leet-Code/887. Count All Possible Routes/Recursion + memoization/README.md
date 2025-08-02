# 1575. Count All Possible Routes

This problem involved about, you are given an array of distinct positive integers locations where locations[i] represents the position of city i. You are also given integers start, finish and fuel representing the starting city, ending city, and the initial amount of fuel you have, respectively.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-all-possible-routes/description)

**Key Insights :**<br/>

1. `Dynamic Programming with Memoization`: The problem has overlapping `subproblems` and optimal substructure, making it suitable for DP.
2. `State Representation`: The state is defined by (current city, remaining fuel).
3. `Base Cases`:
    - If fuel runs out (fuel < 0), return 0
    - If current city is destination, count as 1 valid route
4. `Transitions`: From current city, try moving to all other cities if enough fuel remains.

**Algorithm Steps :**<br/>

1. `Initialize DP Table`:

    - Size n × (fuel+1) initialized to -1 (`uncomputed`)
    - Stores number of routes from each city with given fuel

2. `Recursive DP Function`:

    - Base cases for fuel exhaustion and reaching destination
    - For each neighboring city (excluding current):
        - Calculate remaining fuel after move
        - Recursively count routes from new city
    - Sum all possibilities modulo 1e9+7

3. `Return Result`: Value from starting state (start city, initial fuel)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2 * fuel)` - for each (location, fuel) state, we loop over all n locations.
-   Space-Complexity: `O(n ^ 2)` - storing results for each (location, fuel) pair in a 2D DP table.
