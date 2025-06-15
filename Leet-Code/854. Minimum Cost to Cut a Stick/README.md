# 1547. Minimum Cost to Cut a Stick

This problem involved about, given a wooden stick of length n units. The stick is labelled from 0 to n. For example, a stick of length 6 is labelled as follows:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a wooden stick of length `n` and a list of positions where cuts need to be made.
    - The cost of making a cut is equal to the length of the stick at the time of the cut.
    - The goal is to determine the minimum total cost to make all the cuts.

2. `Algorithm`:

    - Use `dynamic programming with memoization` to compute the minimum cost.
    - Sort the cuts and add the start (`0`) and end (`n`) of the stick to the cuts array.
    - Define a DP table `dp[left][right]` to store the minimum cost to cut the stick between `arr[left]` and `arr[right]`.
    - For each segment `(left, right)`, consider all possible cuts and recursively compute the cost for the left and right segments.
    - The cost for the current segment is the length of the segment plus the cost of cutting the left and right segments.
    - Use memoization to avoid redundant calculations.

3. `Steps`:
    - Sort the `cuts` array and add `0` and `n` to represent the start and end of the stick.
    - Initialize a DP table `dp` with `-1` to represent uncomputed states.
    - Define a recursive function `Solved`:
        - If the segment `(left, right)` has no cuts (`right - left == 1`), return `0`.
        - If the result for the current segment is already computed, return it.
        - Iterate through all possible cuts between `left` and `right`:
            - Compute the cost of the current cut and recursively compute the cost for the left and right segments.
            - Update the minimum cost.
        - Store the result in the DP table and return it.
    - Call the recursive function with the initial segment `(0, cuts.size() - 1)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^3)` - where `n` is the number of cuts.
-   Space-Complexity: `O(n^2)` - due to the DP table.
