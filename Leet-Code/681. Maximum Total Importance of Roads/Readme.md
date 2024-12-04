# 2285. Maximum Total Importance of Roads

This problem involved about, you are given an integer n denoting the number of cities in a country. The cities are numbered from 0 to n - 1. You are also given a 2D integer array roads where roads[i] = [ai, bi] denotes that there exists a bidirectional road connecting cities ai and bi.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-total-importance-of-roads/description/)

**Approach :**<br/>

1. `Degree Calculation :`

    - Calculate the degree of each city, which is the number of roads connected to it.

2. `Sorting Degrees :`

    - Sort the cities by their degree in ascending order. This will allow us to assign the highest importance to the cities with the highest degrees.

3. `Assign Importance and Calculate Result :`
    - Assign importance values starting from 1 to the city with the lowest degree and up to `n` for the city with the highest degree.

**Algorithm :**<br/>

1. `Initialization :`

    - Initialize a vector `inDeg` of size `n` to store the degree of each city.
    - Iterate over the `roads` to update the degree of each city.

2. `Sorting and Importance Assignment :`

    - Sort the `inDeg` vector in ascending order.
    - Initialize a variable `res` to store the result and a variable `count` starting from 1 to assign importance.

3. `Calculate Maximum Importance :`

    - Iterate over the sorted `inDeg` vector:
        - Multiply the degree of the city by the current `count` value and add it to `res`.
        - Increment `count` by 1.

4. `Return Result :`
    - Return the value of `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where `n` is the number of cities, due to the sorting step. Counting the degrees and calculating the result are both `O(n)` operations.
-   Space-Complexity: `O(n)` - due to the additional vector used to store the degrees of the cities.
