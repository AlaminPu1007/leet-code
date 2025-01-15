# 1402. Reducing Dishes

This problem involved about, A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.

Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. `time[i] * satisfaction[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/reducing-dishes/description/)

**Approach :**<br/>

-   `Sorting the Array`: Sorting helps to cook dishes in an order where satisfaction values are maximized.
-   `DFS with Memoization`: Use a recursive approach to explore two options at each step:

    1. `Include the current dish`: Multiply its satisfaction value with the current time, and then move to the next dish with increased time.
    2. `Exclude the current dish`: Move to the next dish without changing the time.

    At each step, take the maximum of the two options. Use a memoization table `dp[i][cur_time]` to store the results for already computed states, avoiding redundant calculations.

#### Steps:

1. `Sort the array`: Sorting helps in maximizing satisfaction by cooking dishes with lower satisfaction values first.
2. `Recursion`: Use DFS to recursively decide whether to include or exclude each dish while keeping track of time.
3. `Memoization`: Store results for `dp[i][cur_time]` to avoid recalculating for the same state.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - where `n` is the number of dishes, due to the recursive DFS and memoization.

-   Space-Complexity: `O(n^2)` - for storing the memoization table.
