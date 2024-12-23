# 2593. Find Score of an Array After Marking All Elements

This problem involved about, you are given an array `nums` consisting of positive integers.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/)

**Approach :**<br/>

1. `Store Elements with Indices`:

    - Use a vector of pairs to store each element along with its index for sorting.

2. `Sort by Value and Index`:

    - Sort the array first by value, and in case of ties, by their index.

3. `Iterate Over the Sorted Array`:

    - For each element, check if it is unvisited.
    - If unvisited:
        - Add the value to the result.
        - Mark the current element and its adjacent elements (if within bounds) as visited.

4. `Edge Cases`:
    - Handle cases where the array has duplicate values.
    - Ensure the bounds for adjacent elements are checked properly.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array of pairs takes
-   Space-Complexity: `O(n)` - The traversal of the sorted array takes
