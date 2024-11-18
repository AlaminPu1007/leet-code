# 1395. Count Number of Teams

This problem involved about, there are n soldiers standing in a line. Each soldier is assigned a unique rating value.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-teams/description/)

**Approach :**

1. **Iterative Approach**:

    - Iterate through each element in the array (excluding the first and last elements) to find valid teams.
    - For each element, count the number of elements smaller to its left and larger to its right.
    - Count the number of elements larger to its left and smaller to its right.
    - Multiply the counts to get the number of increasing and decreasing subsequences respectively.

2. **Detailed Steps**:

    - For each element `rating[i]`, iterate through the left part of the array to count the elements smaller than `rating[i]`.
    - Iterate through the right part of the array to count the elements larger than `rating[i]`.
    - Calculate the number of valid increasing subsequences by multiplying the counts of smaller elements on the left and larger elements on the right.
    - Similarly, calculate the number of valid decreasing subsequences.
    - Sum up both counts for the final result.

**Complexity Analysis :**

-   Time-Complexity: `O(n ^ 2)` - where `n` is the number of elements in the ratings array. This is due to the nested loops iterating through the array.

-   Space-Complexity: `O(1)` - where `n` is the number of elements in the ratings array. This is due to the nested loops iterating through the array.