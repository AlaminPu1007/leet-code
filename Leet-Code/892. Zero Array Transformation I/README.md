# 3355. Zero Array Transformation I

This problem involved about, you are given an integer array `nums` of length n and a 2D array queries, where `queries[i] = [li, ri]`.

## Problem description

for better problem description, please visit [LeetCode Page](https://leetcode.com/problems/zero-array-transformation-i/description/)

**Key Insights :**<br/>

1. `Difference Array Technique`: Efficiently track range operations using a difference array
2. `Prefix Sum Calculation`: Convert the difference array into actual increments
3. `Verification`: Check if the increments can cancel out the original array values

**Algorithm Steps :**<br/>

1. `Initialize Difference Array`:
    - Create an array to track range operations
2. `Apply Queries`:
    - For each query [start, end]:
        - Mark start with +1
        - Mark end+1 with -1 (if within bounds)
3. `Compute Prefix Sum`:
    - Convert difference array to actual increments
4. `Validate Result`:
    - Check if increments ≥ original values at each position

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is number of queries and array size.
-   Space-Complexity: `O(n)` - using an diffArray, res additional spaces.
