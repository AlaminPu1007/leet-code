# 1509. Minimum Difference Between Largest and Smallest Value in Three Moves

This problem involved about, you are given an integer array `nums`.<br/>
In one move, you can choose one element of `nums` and change it to any value.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/)

**Approach :**<br/>

To find the minimum difference between the largest and smallest values in an array after at most three moves, the approach involves sorting the array and then considering the minimum possible difference by removing up to three elements from either end of the array.

**Algorithm :**<br/>

1. `Handle Small Arrays`:

    - If the array has 4 or fewer elements, return 0 because removing up to three elements can make all elements the same, resulting in a difference of 0.

2. `Sort the Array`:

    - Sort the array to allow easy calculation of differences between the largest and smallest values after removals.

3. `Consider Four Possible Subarrays`:

    - After sorting, there are four ways to remove up to three elements:
        1. Remove the three largest elements.
        2. Remove the two largest and one smallest element.
        3. Remove the one largest and two smallest elements.
        4. Remove the three smallest elements.
    - Calculate the difference between the largest and smallest remaining elements for each of these four cases.

4. `Return the Minimum Difference`:
    - The minimum of these four differences is the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - due to the sorting step, where `n` is the number of elements in the array.

-   Space-Complexity: `O(n)` - in the worst case for the sorting step due to the use of additional space by some sorting algorithms.