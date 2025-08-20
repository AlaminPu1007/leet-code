# 135. Candy

This problem involved about, there are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/candy/description/)

**Key Insights :**<br/>

1. `Two-Pass Technique`: Requires both left-to-right and right-to-left passes to satisfy both neighbor constraints
2. `Local Comparisons`: Each child's candy count depends only on immediate neighbors
3. `Greedy Allocation`: Start with minimum allocation and increment based on relative ratings

**Algorithm Steps :**<br/>

1. `Initialization`:

    - Give each child at least 1 candy (initialize array with 1s)

2. `Left-to-Right Pass`:

    - If current child's rating > left neighbor, give one more candy than left neighbor

3. `Right-to-Left Pass`:

    - If current child's rating > right neighbor, ensure candy count is at least one more than right neighbor
    - Take maximum of current value and right neighbor's candy + 1 to satisfy both directions

4. `Sum Calculation`:
    - Sum all candies in the final array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we are iteration over the rating array, that would have time complexity `O(n)`.
-   Space-Complexity: `O(n)` - we are using an additional vector array.
