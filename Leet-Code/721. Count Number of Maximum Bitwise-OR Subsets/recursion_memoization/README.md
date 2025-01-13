# 2044. Count Number of Maximum Bitwise-OR Subsets

This problem involved about, given an integer array nums, find the maximum possible bitwise OR of a subset of nums and return the number of different non-empty subsets with the maximum bitwise OR.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/description/)

**Approach :**<br/>

#### Step 1: Calculate the Maximum OR Value

-   We first need to compute the maximum possible OR value by performing the bitwise OR operation on all the elements of the array.
-   This value serves as the target OR value for the subsets we want to count.

#### Step 2: Recursive Depth First Search (DFS) with Memoization

-   We use DFS to explore all possible subsets.
-   At each element in the array, we have two choices:
    1. `Skip the element` (do not include it in the subset).
    2. `Take the element` (include it in the subset and perform a bitwise OR with the current OR value).
-   The goal is to count how many subsets can achieve the `max_xor` value.

#### Step 3: Memoization

-   To optimize the solution, we use memoization (`dp`) to store results for previously computed states. This avoids redundant computations during recursive DFS calls.
    -   `dp[i][cur_xor]`: Stores the count of subsets starting from index `i` with the current OR value `cur_xor`.

#### Step 4: Base Case and Recursive Steps

-   `Base Case`: When we have processed all elements in the array:
    -   If the current OR value (`cur_xor`) equals `max_xor`, return `1` (this subset is valid).
    -   Otherwise, return `0` (the subset is not valid).
-   `Recursive Step`: For each element, we recursively compute the count of valid subsets by:
    -   Skipping the element.
    -   Including the element and updating the OR value.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * max_xor)` - where n is the number of elements and `max_xor` is the maximum possible OR value.
-   Space-Complexity: `O(n * max_xor)` - The space complexity is `O(n * max_xor)` due to the memoization table.
