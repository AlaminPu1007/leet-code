## 746. Min Cost Climbing Stairs

This problem involved about, you are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/min-cost-climbing-stairs/description/)

**Approach :**<br/>

-   To sovle this problem we need dynamic programming approach
-   We iterate the array by reverse order and calculated for each item min-cost from index `i+1` to `i+2`
-   The sum it with current index & so on

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array, that has `O(n)` time complexity
-   Space-Compelxity: `O(1)` - since we are not using any kind of extra array, we modified the original array,
